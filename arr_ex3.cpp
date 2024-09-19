#include<iostream> 
using namespace std; 
#include<stdlib.h> 
 class Test 
{ 
public: 
   Test() 
   { cout << "Constructor called"; } 
}; 
 int main() 
{ 

    Test *t = (Test *) malloc(sizeof(Test));

    return 0; 
} 
