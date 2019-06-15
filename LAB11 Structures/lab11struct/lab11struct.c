#include <stdio.h>
#include <stdlib.h>

int mymenu()
{
	printf("=============================================================\n");
	printf("PLEASE SELECT ONE OPTION FROM THE MENU:\n");
	printf("1. Input database information\n");
	printf("2. Update the content of one database element\n");
	printf("3. Display on the screen the content of one database element\n");
	printf("=============================================================\n");
	
	int choice;
	scanf("%d" , choice);
	return choice;
}



int main()
{
    printf("Welcome to program of LAB11!!\n\n");
    
    mymenu();
    
    
    
    
    return 0;
}