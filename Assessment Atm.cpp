#include<iostream>
#include<ctime>
using namespace std;

class bank
{
	int balance=20000;
	public:
	bank()
	{
    char ch;
	do
	{
		
	cout<<"********************************************************************"<<endl;
	cout<<"                         WELCOME TO ATM"<<endl;
	cout<<"\t\t   ---------------------------"<<endl;
	// for current date and time
	time_t tt;
	struct tm *ti;
	time(&tt);
	ti=localtime(&tt);
	cout<<endl<<"\t  current date and time : "<< asctime(ti)<<endl;
	cout<<"\t\t   ---------------------------"<<endl<<endl;
	cout<<"********************************************************************"<<endl;

    cout<<endl<<"press 1 and then press enter to access your account via pin number."<<endl;
	cout<<"\t\t\t\tor"<<endl;
	cout<<"\t\tpress 0 and press enter to get help.";
	
	int choice;
	cin>>choice;
	// here choice 1 for atmpin access
	if(choice==1)
	{
	cout<<endl<<"-------------------------ATM ACCOUNT ACCESS-------------------------"<<endl;
	cout<<endl<<"enter correct pin to access your account![only one attempt is allowed]"<<endl<<endl;
	int atmpin;
	cin>>atmpin;
	
	// here atmpin is 12345
	if(atmpin==12345)
	{
		cout<<endl<<"---------------------------Account Details--------------------------"<<endl<<endl;
		cout<<"\t\tNames of the account holders : kevil kalathiya"<<endl;
		cout<<"\t\tAccount holders' address : botad"<<endl;
		cout<<"\t\tBranch location : tower road"<<endl;
		cout<<"\t\tAccount number : 123456789"<<endl;
		cout<<endl<<"------------------------ATM Main Menu Screen------------------------"<<endl<<endl;
		
		cout<<"\t\t\tEnter [1] To Deposit Cash"<<endl;
		cout<<"\t\t\tEnter [2] To Withdraw Cash"<<endl;
		cout<<"\t\t\tEnter [3] To Balance Enquiry"<<endl;
		cout<<"\t\t\tEnter [0] To Exit ATM"<<endl;
		cout<<endl<<"\t\t\tPlease Enter A Selection : ";
		
		int select;
		cin>>select;
		
		switch(select)
		{
		case 1:
		int deposited_amount;
		cout<<endl<<"-----------------------ATM Account Deposit System-------------------"<<endl<<endl;
		cout<<"\t\t   Enter the amount to be deposited Rs. : ";
		cin>>deposited_amount;
		balance=balance+deposited_amount;
		cout<<"\t\t   After depositing the balance : "<<balance<<endl;
		break;
		
		case 2:
		int withdraw_amount;
		cout<<endl<<"------------------------ATM Account Withdrawal----------------------"<<endl<<endl;
		cout<<"\t\t  Enter the amount to be withdrawal Rs. : ";
		cin>>withdraw_amount;
		if(withdraw_amount<=balance)
		{
		cout<<"\t\t  After withdrawing the balance  : "<<balance-withdraw_amount<<endl;
		}
	    else
	    {
	    	cout<<"\t\t  Insufficient available balance in your account."<<endl;
		}
	    break;
	    
	    case 3:
	    cout<<endl<<"--------------------------Balance Enquiry--------------------------"<<endl;
	    cout<<"Available Balance : "<<balance<<endl;
	    break;
	    
	    case 0:exit(0);
		break;
	    
	    default:cout<<"\t\t\tPleace enter correct choice...";
	    
		}
		
	}
	// if user enter incorrect atmpin,show this statement
	else 
	{
	  cout<<"--------------------------------------------------------------------"<<endl<<endl;
	  cout<<"you had made your attempt which failed ! no more attempts allowed ! SORRY !"<<endl;	
	}
	}
    // here choice 0 for help
	else if(choice==0)
	{
		cout<<endl<<"-------------------------ATM ACCOUNT STATUS-------------------------"<<endl<<endl;
	cout<<"     You Must Have The Correct Pin Number To  Access This Account."<<endl;
	cout<<"See Your Bank Representative For Assistance During Bank Opening Hours."<<endl;
	cout<<"\t\t\tThanks For, Visiting."<<endl;
	}
     
    // in case user enter incorrect choice, show this statement
	else
	{
	cout<<endl<<"\t\t     pleace enter correct choice "<<endl;
	}
	
	// to go back into the main menu
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<endl<<"\t\tPress any key to return to the main menu : ";
	cin>>ch;
	cout<<endl<<endl;
	}
	while(ch>='a'&&ch<='z');
	}
};

int main()
{
    bank obj;
}