#include<iostream>
using namespace std;


class Student{
    
  public:
  
     string name;
     int roll;
     
     
     void addinfo()
     {
         name="NULL";
         roll=0;
     }
     
     void addinfo(string n,int r)
     {
         name=n;
         roll=r;
     }
     
     
     void display()
     {
         cout<<name<<" "<<roll<<endl;
     }
    
    
};


int main()
{
   Student s1;
   s1.addinfo();
   s1.display();
   
   
   Student s2;
   s2.addinfo("Sayandeep",209);
   s2.display();
    return 0;
}