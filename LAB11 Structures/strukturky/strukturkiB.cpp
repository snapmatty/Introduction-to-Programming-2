#include <iostream>

using namespace std;

using namespace std;

struct calendardate{int day; int month; int year;};
struct footballteam {double players; char teamname[30]; calendardate footballteamdate;}
const int x=5;

void themenu(){
	cout << "////////////////////////////////\n";
	cout << "MENU\nSelect the option:\n1.Create a new array\n2.Increase the array\n3.Delete selected element\n4.Calculate statistics\n";
	cout << "////////////////////////////////\n";
	cout<<"Select any of the given options:  "; 
	
}


int main()
{

	int menu = 0, menuopt=0;
	
	while(menu!=-1)
	{
		menu=0;
		themenu();
		cin>>menuopt;
		cout << string(50, '\n');
		
	if(menuopt==1)
	{
		cout<<"\n\n";
		cout<<"Enter the data of your football team:"<<endl;
		for(int i=0; i<x;i++)
		{
			cout<<"Football Team #"<<i<<":"<<endl;
			cout<<"name: ";cin>>footballteam.teamname>>endl;
			cout<<"amount of players: ";cin>>footballteam.players>>endl;
			cout<<"team established in (DD/MM/YYYY): "<<endl;
			cout<<"day: ";cin>>calendardate.day<<endl;
			cout<<"month: ";cin>>calendardate.month<<endl;
			cout<<"year: ";cin>>calendardate.year<<endl;
		}
		
	if(menuopt==2)	
	{
		cout<<"The information about entered football teams:"<<endl;
		
		
	}
		
	}	
	
	char choice;
    while(true)
    {
        cout<<"Would you like to perform other calculation?(Y/N)"<<endl;
        cin >> choice;
        if(choice == 'Y'|| choice =='y')
		{
			cout << string(50, '\n');
         	 break;
        }
		else if(choice =='N'||choice =='n'){
        return 0;
        }
		
		
		
		
		
		
     }	
		
		
		return 0;
	}
}
		
		
		
		
		
		
		