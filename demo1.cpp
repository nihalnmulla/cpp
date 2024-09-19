#include <iostream>

class MyClass {
private:
    static int privateStaticVar; // Declaration of static member

public:
    void display() const {
        std::cout << "Private Static Variable: " << privateStaticVar << std::endl;
    }
};

// Definition and initialization of static member outside the class
int MyClass::privateStaticVar = 42;

int main() {
    MyClass obj;
    obj.display(); // This will print: Private Static Variable: 42
    return 0;
}

