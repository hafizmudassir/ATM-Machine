#include<iostream>
using namespace std;
void showMenu()
{
	cout<<"******MENU*******\n";
	cout<<"Press 1 for check balance..\n";
	cout<<"Press 2 for deposit balance..\n";
	cout<<"Press 3 for withdraw balance..\n";
	cout<<"Press 4 for close Application..\n";
	cout<<"***********************\n";
	cout<<"Select Option : ";
}
int main()
{
	int optionSelection;
	int balance=0;
    do
    {
	showMenu();
	cin>>optionSelection;
	system("cls");
	switch(optionSelection)
	{
		case 1: cout<<"Your balance is : "<<balance<<"\n"; 
		break;
		case 2: cout<<"Enter amount for adding in balance : ";
		int addBalance;
		cin>>addBalance;
		balance +=addBalance;
		cout<<"Your new balance is : "<<balance<<" $\n";
		break;
		case 3:cout<<"Enter amount for with draw : ";
		int removeBalance;
		if(balance>=0)
		{
		cin>>removeBalance;
		
		if((balance-removeBalance)<0)
		{
			cout<<"Amount Withdraw fail due to low balance..\n";
		}else
		{
		balance = balance - removeBalance;
		cout<<"Your new balance after withdraw is : "<<balance<<" $\n";	
		}
	    }else
	    {
	    	cout<<"Your balance is less then 0..\n";
		}
		
		
		break;
		case 4: cout<<"Application Closes..";
		break;
		default:cout<<"Wrong value..\n Enter Value between 1 to 4...\n";
		break;
	}
}while(optionSelection!=4);
}
