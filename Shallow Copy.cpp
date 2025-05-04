#include<iostream>
using namespace std;

class Student{
    
  public:
  
     string name;
     int roll;
     
     
     Student(string name,int roll)   
     {
         this->name=name;
         this->roll=roll;
     }
     
     
     Student(Student &obj)   
     {
         this->name=obj.name;
         this->roll=obj.roll;
     }
     
    
     
     void display()
     {
         cout<<"name: "<<name<<endl;
         cout<<"roll: "<<roll<<endl;
     }
     
    
};


int main()
{

     Student s1("Sayandeep",23);
     Student s2(s1); 
     
     s1.display();
     s2.display();
     
     
     cout<<"------------------------"<<endl;
     
     s2.name="Shanta";
     s2.roll=26;
     
     s1.display();
     s2.display();
     
     
    
    return 0;
}