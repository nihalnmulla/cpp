
#include<iostream>
using namespace std;
class temp
{
	int z;  
	static int y; 
public:
	temp();
	void show();
	void display();
};
int x;
int temp::y; //0
void temp::show()
{
	y++;   // y = y+1; //1 then 2
}
temp::temp()
{
	int z=200;
	x=100;
	cout<<"value of z is "<<z<<endl; //200
}
void temp::display()
{
	cout<<"value of x is "<<x<<endl; //100
	cout<<"value of y is  "<<y<<endl; //2
}
int main()
{
	temp t;
	t.show();
	t.show();
	t.display();
	cout<<sizeof(t);
}
