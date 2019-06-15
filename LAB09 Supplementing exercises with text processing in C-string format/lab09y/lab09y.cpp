#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    cout << "Welcome to program of LAB09y!"<<endl;
    
    char *pointr;
    
    
    pointr = (char *) malloc(20);
    
    if(pointr=NULL)
	{
		strcpy(pointr, "testoflab09y");
		cout <<"The string is: " <<pointr<< " and the address of it is: " << &pointr<<endl;
		
	}
    else cout<< " An error has occurred while allocating the memory! "<<endl;
    
    
    
    
    return 0;       
}