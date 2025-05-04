#include<iostream>
using namespace std;

class Student{
    
  public:
  
     string name;
     int* rollptr;
     
     
     Student(string name,int roll)   
     {
         this->name=name;
         
         rollptr=new int;
         
         *rollptr=roll;
     }
     
     
     Student(Student &obj)   
     {
         this->name=obj.name;
         this->rollptr=obj.rollptr;
     }
     
    
     
     void display()
     {
         cout<<"name: "<<name<<endl;
         cout<<"roll: "<<*rollptr<<endl;
     }
     
    
};


int main()
{   
    
    // shallow copy is problematic in case of dynamic memory allocation.That prolem is shown here - 

     Student s1("Sayandeep",23);
     Student s2(s1); 
     
     s1.display();
     s2.display();
     
     
     cout<<"------------------------"<<endl;
     
     s2.name="Shanta";
     *(s2.rollptr)=26;
     
     s1.display();
     s2.display();
     
     
    
    return 0;
}