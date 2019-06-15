#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to program of LAB09y!!\n");
    
    char *str;
    
    str = (char *) malloc(15);
    strcpy(str, "testforLAB09");
    printf("String : &s,  with the Address being : %u\n" str, str);
    
    
    
    
    
    
    return 0;
}