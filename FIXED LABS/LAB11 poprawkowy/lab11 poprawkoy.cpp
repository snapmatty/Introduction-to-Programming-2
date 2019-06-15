#include <iostream>

/*Sir, I have tried to re-do this program when I saw your comments and still i seem
to be getting a yellow remark when compiling: "extended initializer lists only available
with std=c++0x or std=gnu++0x ; The program works just fine, but i would like to ask,
what does this message mean and how can I get rid of it? Is there something I am missing? */


using namespace std;

struct statsresults
{
	double suma; 
	double min; 
	double max;
};

statsresults  stats(int array[], int size)
{
	statsresults temp;
	
	if(size<=0)
	{
	
		return temp;
	}
	else
	{
		double suma=0, min=array[0], max=array[0];
		for(int i=0;i<size;i++)
		{
			if(max<array[i])max=array[i];
			if(min>array[i])min=array[i];
			suma+=array[i];
		}
		
	 temp={suma,max,min};  
		
	}
	return temp;
}

int main()
{
    cout << "Welcome to the program of LAB11!\n\n\n";
    
    int size;
    int i;
    
    cout <<"Please enter the size of the array: ";
	cin >>size;
	int array[size];
	
	cout<<"Enter the elements of your array below:"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<"ELEMENT["<<(i+1)<<"]=";
		cin>>array[i];	
	}
	 
    cout<<"The content of array:"<<endl;
    for(i=0;i<size;i++)
	{
		cout<<"Element #"<<i+1<<": "<<array[i]<<endl;
	}
    
    
    statsresults returnedvalue;
    returnedvalue=stats(array, size);
   
    
    cout<<"FINAL RESULTS:"<<endl;
    cout<<returnedvalue.suma<<endl;
    cout<<returnedvalue.min<<endl;
    cout<<returnedvalue.max<<endl;

    
    
    return 0;       
}