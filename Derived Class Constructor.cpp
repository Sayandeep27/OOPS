#include<iostream>
using namespace std;

class Base{
    
  public:
    
    Base()
    {
        cout<<"Base class constructor!"<<endl;
    }
    
};


class Child:public Base{
  
  public:
  
   Child()
   {
       cout<<"Child class constructor"<<endl;
   }
    
    
};

int main()
{
    Child c;  // Base class constructor will be called first;
   
   
   
    return 0;
}