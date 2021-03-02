#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int deposit=0,withdrawal=0,amount=1000,balance=1000,choice,pin;
	cout<<"enter pin code:";
	cin>>pin;
	if(pin!=1525)
	{
		cout<<"invalid pin";
	}
	else{
		
	cout<<"********************welcome to mpesa services*********************"<<endl;
	cout<<"1.check mpesa balance"<<endl;
	cout<<"2.withdrawals"<<endl;
	cout<<"3.deposit amount"<<endl;
	cout<<"4.balance enquiry"<<endl;
	cout<<"0.back"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"your mpesa balance is"<<balance<<endl;
			break;
			case 2:
			cout<<"enter the amount to withdraw"<<endl;
			cin>>choice;
			break;
			case 3:
			cout<<"enter deposit amount"<<balance<<endl;
			break;
			case 4:
			cout<<"your mpesa balance is:"<<balance<<endl;
			break;
			case 5:
			cout<<"thank you for using our services"<<balance<<endl;
			break;
			default:
			cout<<"wrong choice";	
	}
}
	return 0;
	
}
