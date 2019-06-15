#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 struct Data     
	  {
	   double height;
	   double age;
	   double salary;
	   double weight;
	   double bills;
	   double leftover;
	  };
	   	
void input(struct Data *in)
{
	printf("Enter your height in meters: \n");
	scanf("%lf",&in->height );
	printf("Enter your age: \n");
	scanf("%lf",&in->age);
	printf("Enter your salary:\n");
	scanf("%lf",&in->salary);
	printf("Enter your weight:\n");
	scanf("%lf",&in->weight);
	printf("Enter how much you spend on bills: \n");
	scanf("%lf",&in->bills);
		
}


void update(struct Data *in)
{
	int ch;
	char choice;
	printf("Enter 'Y' to update, to enter 'N' skip\n");
	scanf(" %c",&choice);
	while(choice!='n' && choice!='N')
	{	
		printf("Which option would you like to update?\n");
	printf("1.Height\n");
	printf("2.Age\n");
	printf("3.Salary\n");
	printf("4.Weight\n");
	printf("5.Bills\n");
	printf("Your choice: \n");
	scanf("%d",&ch);
	
	switch (ch)
	{
		
		case 1:
		{
			printf("Enter your height in meters:\n");
			scanf("%lf",&in->height );	
		}
		break;
		case 2:
		{
		printf("Enter you age: \n");
		scanf("%lf",&in->age);
		}
		break;
		case 3:
		{
		printf("Enter your salary: \n");
		scanf("%lf",&in->salary);
		}
		break;
		case 4:
		{
		printf("Enter your weight: \n");
		scanf("%lf",&in->weight);
		}
		break;
		case 5:
		{
		printf("Enter your bills: \n");
		scanf("%lf",&in->bills);
		}
		break;
	
		default :
		{
			printf("The choice caused an error!!\n");
		}
			
	}
	printf("\nTo update more press 'Y'\n");
	scanf(" %c",&choice);
	
	}
	

}
void output(struct Data *in)
{
    
	printf("Height in m: %lf \n",in->height);
	printf("Age: %lf\n",in->age);
	printf("Weight: %lf \n",in->weight);
	printf("Salary: %f\n",in->salary);
	printf("Bills: %lf\n",in->bills);
	printf("Leftover money: %lf \n",in->salary - in->bills);
	printf("BMI: %lf \n" , in->weight/(in->height*in->height)); 
}

int main()
{
	struct Data me;
	
	input(&me);
	update(&me);
	output(&me);
    return 0;
}
 