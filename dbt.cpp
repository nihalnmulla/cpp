#include<iostream>
using namespace std;

class A{
	int a=20;
	
	public:
		void display(){
			cout<<a<<endl;
		}
};

class B:public A{
	int b=30;
	
	public:
		void display(){
//			A::display();
			cout<<b<<endl;
		}
};
int main(){
	A* a = new B;
	a->display();
}
