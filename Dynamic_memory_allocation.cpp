#include <iostream>
using namespace std;


void func1()
{
    int* var=new int;
    
    *var=17;
    
    cout<<var<<endl;
    cout<<*var<<endl;
    
    delete(var);
    
}


void func2()
{
    int* var=new int(19);
    
    cout<<var<<endl;
    cout<<*var<<endl;
    
    delete(var);
}


void func3()
{
    int* arr=new int[5];
    
    for(int i=0;i<5;i++) arr[i]=i+1;
    
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    cout<<endl;
    
    delete[] arr;
}


int main()
{
   // func1();
    //func2();
    func3();

    return 0;
}