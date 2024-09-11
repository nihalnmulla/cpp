#include <iostream>    
using namespace std;    
class Box    
{    
    private:    
        int length=5;    
	public:
        int printLength(){
		length+=10;
		return length;
		}
};    
   
int main()    
{    
    Box b;    
    cout<<"Length of box: "<< b.printLength()<<endl;    
    return 0;    
}
