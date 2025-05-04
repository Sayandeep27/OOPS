#include<iostream>
using namespace std;


class A{
    
  public:
  
    int i;
    
    
};

class B:virtual public A{   // If we donot use virtual here, it will show error!
    
  public:
  
    int j;
    
};


class C:virtual public A{   // same for this
    
    public:
       
      int k; 
    
};


class D:public B,public C{
  
  public:
     
     int sum;
    
    
};

int main()
{
    D obj;
    
    obj.i=3;
    obj.j=5;
    obj.k=8;
    
    obj.sum=obj.i+obj.j+obj.k;
    
    cout<<obj.sum<<endl;
    
}