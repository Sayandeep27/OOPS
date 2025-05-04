#include <iostream>
using namespace std;


class Mech{
  
  private:
  
      int password;
  
  public:
  
  
    Mech()
    {
        password=99;
    }
     
    
    friend void myfunc(Mech &obj);
    
    
};


void myfunc(Mech &obj)
{
    cout<<obj.password<<endl;
}

int main()
{
    Mech m;
    
    myfunc(m);

    return 0;
}