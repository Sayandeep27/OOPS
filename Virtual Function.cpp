#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Child : public Base {
public:
    void show() {  // no override keyword - in c++, the override keyword is optional
        cout << "Child class" << endl;
    }
};

int main() {
    Base* b;
    Child c;
    b = &c;
    b->show();  // ✅ Still calls Child's version due to virtual function
    return 0;
}
