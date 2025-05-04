#include <iostream>
using namespace std;

int main() {
    
    int x;
    
    cin>>x;
    
    try
    {
        if(x==1)
        {
            throw 1;
        }
        
        if(x==2)
        {
            throw 2;
        }
        
        if(x==3)
        {
            throw "Error";
        }
        
    }
    
    catch(int a)
    {
        cout<<"integer exception: "<<a<<endl;
    }
    
    catch(const char *e)
    {
        cout<<"string exception: "<<e<<endl;
    }
   
    

    return 0;
}