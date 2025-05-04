#include<iostream>
using namespace std;

class Base{
    
  public:
   
   
   virtual void show()
   {
       cout<<"Namaste Duniyaaa!"<<endl;
   }
    
    
};


class Child:public Base{
  
  public:
  
    void show() override
    {
        cout<<"Namaste India"<<endl;
    }
    
    
};

int main()
{
    Child c;

    
    Base* b;
    
    b=&c;
    
    b->show();   // this will print the child class function
    
    c.Base::show();  // to print the base class function or virtual function
    
    return 0;
}