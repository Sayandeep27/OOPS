#include <iostream>
using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;
    
    try
    {
        if(b==0)
        {
            throw "Divided by 0";
        }
        
        cout<<(a/b)<<endl;
        
    }
    
    
    catch(const char *e)
    {
        cout<<"Error!"<<" "<<e<<endl;
    }
    

    return 0;
}