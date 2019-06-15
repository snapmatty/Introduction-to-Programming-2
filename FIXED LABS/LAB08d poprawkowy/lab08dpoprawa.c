#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void conc(char str1[], char str2[])
{
	int a;
	
	int len1=strlen(str1);
	a=0;
 	while(str2[a])
	 {
	 	str1[len1++]=str2[a++];
	 }
	 str2[a]='\0';

}

int main()
{
    printf("Welcome to program of LAB08d!\n");
    
    char string1[30],string2[30];
    
    printf("Enter your first text below: \n" );
    scanf("%s" , string1);
    printf("\nEnter your second text below: \n");
    scanf("%s" , string2);

	conc(string1, string2);
	
	 printf("\n\n");
    printf("The two strings concatenated: %s",string1);

    return 0;
}