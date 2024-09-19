#include<iostream>
#include<string.h>
using namespace std;
class Account{
	int accNo;
	char name[10];
	static int roi;
	public:
	Account(int ac, char* nm){
		this->accNo = ac;
		strcpy(name,nm);
	}
	static void display();
};

int Account::roi = 7;

void Account::display(){
	cout<<"  "<<roi<<endl;
}



int main(){
	Account a1(101,"Nihal");
	Account a2(102,"Nikhil");
	//a1.display();
	
	//a2.display();
	cout<<Account::display()<<" "<<endl;
}
