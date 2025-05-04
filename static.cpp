#include<iostream>
using namespace std;

void func()
{
    static int x=0;  // since it is statc, memory is initialized only once for it
    
    for(int i=0;i<5;i++) x++;
    
    cout<<x<<endl;
}

int main()
{
    func();   // 5
    
    func();  // 10
    
    func();  // 15
    
    
   // return 0;
    
}