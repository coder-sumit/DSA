/* Topic Covered
    * constructor
    * this keyword
 */


#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    int age;
    // default constructor
    // no return type
    // same name as class
    // no arguments
    Student(){
        cout<<"contructor called\n";
        roll = 0;
        age = 0;
    }

    // parameterized constructor
    Student(int r){
       cout<<"Constructor 2 is called"<<endl;
       roll = r;
       age = 0;
    }

    // parameterized constructor with this keyword
    Student(int age, int roll){
        cout<<"Constructor 3 is Called"<<endl;
        this->age = age;
        this->roll = roll;
    }
};




int main(){

  Student s;
  cout<<s.age<<" "<<s.roll<<endl;
  Student s1(4);
  cout<<s1.age<<" "<<s1.roll<<endl;
  Student s2(14,66);
  cout<<s2.age<<" "<<s2.roll<<endl;


   
   return 0;
}