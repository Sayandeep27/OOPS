#include<iostream>
using namespace std;


class Student{
    
  public:
  
     string name;
     int roll;
     
     Student()
     {
         name="NULL";
         roll=0;
     }
     
     
     Student(string n,int r)
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
    s1.display();
    
    Student s2("sayandeep",209);
    s2.display();
    
    return 0;
}