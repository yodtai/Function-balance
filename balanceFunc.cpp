#include <iostream>
#include<string>
using namespace std;
float update_balance(string ,float,float &balance);

int main () {

    float balance=10000;
    float dollars;
	string command;

	cout<<"Exit with 0 "<<endl;
	cout<<"You balance "<<balance<<endl;

	do {
		cout<<"Input Command (1 or withdraw, 2 deposit): ";
		cin>>command;
    if(command=="1"){
    cout<<"Input Amount : ";
	cin>>dollars;
    }
	else if(command=="2"){
    cout<<"Input Amount : ";
	cin>>dollars;
	}

	update_balance(command,dollars,balance);

	}
	while (command!="0");
	cout<<"Exit Program";
}


float update_balance(string command,float dollars,float &balance)
{
    if(command=="1"){

	 balance = balance-dollars;

	 cout<<"Your balance : "<<balance<<endl;
    }
    else if(command=="2"){

	 balance = balance+dollars;

	 cout<<"Your balance : "<<balance<<endl;

}
return balance;
}
