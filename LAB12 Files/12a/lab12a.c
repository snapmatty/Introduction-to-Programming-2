//THIS LINE IS A TEST FOR THE PROGRAM!//


#include <stdio.h>
#include <stdlib.h>
#include <io.h>



int main()
{
    printf("Welcome to program of LAB12a!!\n\n");
    
    FILE *file;
    int c,n=0;
    char teststring[200];
    file=fopen ("lab12a.c" , "r");
    
    
     
    if(file==NULL)
	{
		printf("error when loading file!");
		return 1;
	}
	/*
	char c[200];
    fscanf(file, "%[^\n]", c);
    printf("Data from the file: \n %s", c);		//FIRST VERSION OF READING//
    fclose(file);
     */
   
    /*
    else
	{
		   do
		   {
			c=fgetc(file);
			if(c!='$')n++;   
		   }while(c !=EOF);						//SECOND VERSION OF READING//	
	}
    fclose(file);
    printf("File contains %d characters!" , n);
    */
    
    /*
    else{
		if(fgets (teststring, 200, file)!=NULL)		//THIRD VERSION OF READING//
			puts(teststring);
		fclose(file);
	}
    */
    
    return 0;
}