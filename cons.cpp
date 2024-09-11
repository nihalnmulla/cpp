#include <iostream>
using namespace std;
class A;
class B;
class C{
	public:
	void display(A&,B&);


};
class B{
	int c,d;
	public:
		B(int c1,int d1){
			c = c1;
			d = d1;
		}
		friend void C::display(A&,B&);
		friend class A; 
};
class A {
    int a,b;
    public:
    	A(){
    		
		}
    	A(int a1,int b1){
    		a = a1;
    		b = b1;
		}
		A operator+(B& bbb){
			A temp;
			temp.a = this->a + bbb.c;
			temp.b = this->b + bbb.d;
			return temp;
		}
		friend void C :: display(A&,B&);   

				void display1(){
					cout<<a<<" "<<b<<endl;
				}
};

void C::display(A& a2,B& b2){
	cout<<a2.a+b2.c<<" "<<a2.b+b2.d<<endl;
	cout<<a2.a<<" "<<a2.b<<" "<<b2.c<<" "<<b2.d<<endl;
}

int main(){
	C cc;
	A aa(2,3);
	B bb(4,5);
	cc.display(aa,bb);
	A cc1 = aa + bb;
	cc1.display1();

	
}
