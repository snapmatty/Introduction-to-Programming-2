#include <stdio.h>
#include <stdlib.h>

void wordseparationspace(char a[])
{
	   int position=1;
	   
	   while ( a[position])
	   {
	   		if( ( (a[position]<='Z') && (a[position]>='A') ) && a[position-1]!=' ')
			   {
		   		int ending=0;
		   		while (a[ending])
		   			ending++;
		   		
		   		
		   		int i=ending+1;
		   		for( i; i>position; i--)
				   {
				   		a[i]=a[i-1];
				   	
				   }
			   	a[position]=' ';
			   }	   	
	   			position++;
	   }	
	   
	   printf("\n The text: \n\n %s" , a );
	
}

int main()
{
    printf("Welcome to LAB09x!\n");
    
    char wrds[100];
    
    printf("Please, enter your text below: \n");
    gets(wrds);
    
    wordseparationspace(wrds);
    
    
    return 0;
}