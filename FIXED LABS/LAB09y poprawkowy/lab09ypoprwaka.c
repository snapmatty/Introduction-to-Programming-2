#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int size =0;
    float *x=NULL;
     
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    
	x=(float*)malloc(sizeof(float)*size);
	
    for(i=0;i<size;i++)
	{
		printf("x[%d]= ",i);
		scanf("%f",&x[i]);
	}
	
	
	 printf("Enter the size you would like to change the array into:\n");
	 
	 int size2;
	 scanf("%d",&size2);
	
	 float *new_x= (float*)malloc(sizeof(float)*size2);
	 
	 if(new_x==NULL)
	 {
	 	printf("cannot load array\n");
	 }
	 else
	 {
		 int k=0;
	
	 for(i=0;i<size2;i++)
	 {
	 	new_x[k++]=x[i];
	 }
	 free(x);
	 x= new_x;
	 size=size2;
	 }
	 
	 for(i=0;i<size;i++)
	 {
	 	printf("x[%d]= %f\n",i,x[i]);
	 }
	 	free(x);
	 	return 0;
}
