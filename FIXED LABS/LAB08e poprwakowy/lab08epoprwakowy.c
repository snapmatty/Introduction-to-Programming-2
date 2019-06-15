#include <stdio.h>
#include <stdlib.h>

void strupr(char str[])
{
	int a;
	
		for(a=0;str[a]!='\0';a++)
	{
		
		if(str[a]>='a' && str[a]<='z')
		{
			str[a]=str[a]-32;
		}
		
	}
}


int main()
{
    printf("Welcome to program of LAB08e!!\n");

	char string[100];
	
	
	printf("Enter your text that below: \n");
	gets(string);

	strupr(string);

	printf("Your text in uppercase letters: \n %s" , string);
	
    return 0;
}