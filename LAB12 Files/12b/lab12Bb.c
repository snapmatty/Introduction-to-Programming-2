#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Welcome to program of LAB12b!\n\n\n");
    
    int N;
    printf("Enter the number of random numbers in array: ");
    scanf("%d",&N);
    
    double array[N];
   
    int i;
    
    printf("The random numbers in array:\n");
    
    for(i=0;i<N;i++){
   	
		array[i]=(rand()%40);
		printf("Element [%d]: %lf\n" , i+1, array[i]);
		
	}
    
    FILE *file;
    
    file=fopen("lab12tekst.txt", "wt");
    for(i=0;i<N;i++)
	{
		 fprintf(file, "%lf \n", array[i]);
	}
	fclose(file);
   
    
    printf("\nThe elements have been saved in file 'lab12tekst'!\n");
    
    
    
    return 0;
}