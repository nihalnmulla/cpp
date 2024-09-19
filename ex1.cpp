#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:static const int cnt =5;
	private:static const int cnt1=10;
	public:
		complex()
		{
			cout<<"default is invoked\n";
			real=5;
			img=5;
		//	cnt++;//not allowed
		}
		static int getcnt()
		{
			return cnt1;
		}
};
//const int complex::cnt=5;//memory alloaction takes place // compile time error
//const int complex::cnt1=10;//compile time error
int main()
{
	complex c1;
	cout<<"no of obj created is   "<<complex::getcnt();
	cout<<"sizeoof obj is     "<<sizeof(c1)<<endl;
	cout<<complex::cnt;
	//cout<<complex::cnt1; // not allowed

}
