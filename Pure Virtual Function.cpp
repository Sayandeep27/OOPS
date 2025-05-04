#include<iostream>
using namespace std;

class Base{
    
  public:
   
   
   virtual void show()=0;
    
    
    
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
    
    b->show();
    
    return 0;
}