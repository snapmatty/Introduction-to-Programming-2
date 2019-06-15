#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to program of LAB11!\n";
    
    
    int arraysize;
    int array[arraysize];
    
    cout <<"Please enter the size of the array: ";
    cin>>arraysize;
    
    cout<<"Please specify the content of array below:"<<endl;
   	for(int i=0;i<arraysize;i++)
	   {
	   	cin>>array[i];
	   } 
   cout<<"Content of created array: \n"<<endl;
   
    for(int i=0;i<arraysize;i++)
		{
				  cout<<"Cell ["<<i+1<<"] :"<<array[i]<<endl;		
		}
    
    
    return 0;       
}



