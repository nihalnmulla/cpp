#include<iostream>
using namespace std;

class demo{
	private:
		int a = 10;
	
	protected:
		int b = 20;
	
	friend class demo1;
};

class demo1{
	public:
		void display(demo& d){
			cout<<d.a<<" "<<d.b;
		}	
};

int main(){
	demo1 d2;
	demo d1;
	d2.display(d1);
}
