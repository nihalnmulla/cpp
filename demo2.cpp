#include<iostream>
using namespace std;

class demo{
	static int x;
	public:
	static void display(){
	cout<<x<<endl;
}
};
//void demo::display()
int main(){
	demo::display();	
}
