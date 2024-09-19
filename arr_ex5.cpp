#include<iostream>
using namespace std;
class item
{
public:
	static int x;
	int number;
public:
	void getdata(int a)
	{
		number=a; //100
		number++;  //101
		x++; //11
	}
	void getcount()
	{
		x=10;
		cout<<"value is "<<x<<endl;
	}
	void getcount_1()
	{
		x++; //12
		cout<<"value is  "<<number<<endl;
		cout<<"value is "<<x<<endl;
	}
};
int number=9;
int item::x;
int main()
{
	item a;
	a.getcount(); //10
	a.getdata(100);
	a.getcount_1();
	cout<<number<<endl;
	cout<<a.number;
}
