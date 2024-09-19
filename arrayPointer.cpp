#include<iostream>
using namespace std;
int main(){
	char* arr[3] = {"Nikhil","Nihal","Lalit"};
	cout<<arr<<endl;
	cout<<*arr<<endl;
	cout<<&arr<<endl;
	cout<<arr[0]<<endl;
	cout<<*(arr+0)<<endl;
	for(int i = 0; i<3; i++){
		for(int j=0; j<12; j++){
			cout<<*(*(arr+i)+j);
		}
	}
}
