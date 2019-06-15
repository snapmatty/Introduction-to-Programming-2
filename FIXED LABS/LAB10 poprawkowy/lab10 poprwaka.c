#include<stdlib.h>
#include<stdio.h>

int max_size = 0;
int size = 0;



void removearray();
void calculate();
void addelement();
float* newarray();

int main()
{
	printf("Welcome to program of LAB10!! \n\n");
	
	int x;
	float* array = NULL;
	do
	{
		printf("=====================================\n");
		printf("==============THE MENU===============\n");
		printf("1. Create new array \n");
		printf("2. Add new sequence of numbers \n");
		printf("3. Remove element \n");
		printf("4. Perform calculations \n");
		printf("5. Exit \n");
		printf("=====================================\n");
		printf("=====================================\n\n");
		
		printf("Input the number of option from the menu: \n");
		scanf("%d", &x);
		switch(x)
		{
		case 1 :
		{
			printf("Enter the size of the array:\n") ;
			scanf("%d", &size);
			array = newarray(size);
		}
		break;
		case 2 :
		{
			
			addelement(&array, &size);
		}
		break;

		case 3 :
		{
			removearray(&array, &size);
		}
		break;

		case 4 :
		{
			calculate(&array, &size);
		}
		break;

		case 5 :
		{
			printf("exit");
		}
		break;

		default :
			printf(" Invalid choice \n");
		}
	}
	while( x != 5);
	
	if(array!=NULL)
	{
		free(array);
		array=NULL;
	}
	
	return 0;
}

float* newarray(int size)
{
	float* a = (float*)malloc(sizeof(float)* size);
	int i;
	for ( i = 0; i < size; i++)
	{
		printf("a[%d]=", i);
		scanf("%f",&a[i]);
	}
	return a;
}


void addelement(float* *a,int *size)
{
	if(*a == NULL)
	{
		printf("error\n");
	}
	int numb, i;
	printf("Enter the amount of numbers you would like to add: \n") ;
	scanf("%d", &numb);

	float *new_a = (float*)malloc(sizeof(float)* (*size+numb));
	for (i = 0; i < *size; i++)
	{
		new_a[i] = (*a)[i];
	}

	for(i =*size; i < *size + numb; i++)
	{
		printf("a[%d]=", i);
		scanf("%f", &new_a[i]);
	}
	*size = *size + numb;
	free(*a);
	*a = new_a;
	
	for(i =0; i <*size; i++)
	{
			printf("a[%d]=%f\n",i, (*a)[i] );
	}
}

void calculate(float* *a,int *size)
{
	float sum = 0.0; 
	int max, min;
	float avg;
	int i;
	for (i = 0; i < *size; i++)
		sum = sum + (*a)[i];
	for (i = 0; i < *size; i++)
	{
		max = (*a)[0];
		if( (*a)[i] > max)
			max = (*a)[i];
	}
	for (i = 0; i < *size; i++)
	{
		min = (*a)[0];
		if( (*a)[i] < min)
			min = (*a)[i];
	}
	avg = sum / *size;
	printf("Sum : %f\n", sum);
	printf("Maximum : %d\n", max);
	printf("Minimum :%d\n", min);
	printf("Average : %f\n", avg);
}


void removearray(float* *a,int *size)
{
	int i=0,j=0;
	if(*a == NULL)
	{
		printf("error\n");
	}
	
	int numb;
	printf("Enter the position of the element : \n");
	scanf("%d", &numb);
	float *new_a = (float*)malloc(sizeof(float)* (*size));
	
	while(i<*size)
	{
		if(i==numb-1)
		{
			i++;
		}
		else
		{
			new_a[j++] = (*a)[i++];
		}
		
	}

	*size =j;
	free(*a);
	*a = new_a;
	for(i =0; i <*size; i++)
	{
			printf("a[%d]=%f\n",i,(*a)[i]);
	}


}