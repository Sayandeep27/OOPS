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
     
    
    friend class Instru;
    
    
};


class Instru{
    
  public:
  
    void display(Mech &obj)
    {
        cout<<obj.password<<endl;
    }
    
    
};



int main()
{
    Mech m;
    Instru i;
    
    i.display(m);
    

    return 0;
}