#include<iostream>
using namespace std;
class Demo;
//class Demo{
//	private:
//		int a = 10;
//	protected:
//		int b = 20;
////	public:
////		void display(){
////			cout<< a <<" "<< b;
////		}
//
//
//
//	friend void Demo1::display(Demo& d2);
//};
class Demo1{
	public:
	void display(Demo& d2);
};
class Demo{
	private:
		int a = 10;
	protected:
		int b = 20;
//	public:
//		void display(){
//			cout<< a <<" "<< b;
//		}

	friend void Demo1::display(Demo& d2);
};


void Demo1::display(Demo& d2){
	cout<<d2.a<<" "<<d2.b<<endl;
}

int main(){
	Demo1 d1;
	Demo d; 
	d1.display(d);
}
