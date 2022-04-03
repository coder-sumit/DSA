/* Topic Covered
 * copy construcotor
 * copy assignment operator
 * Destructor

*/


#include<iostream>
using namespace std;

class Student
{
public:
    int roll;
    int age;
    Student(int age, int roll){
        // cout<<"Constructor 3 is Called"<<endl;
        this->age = age;
        this->roll = roll;
    }

    // Destructor
    // same name no return type
    ~Student(){
       cout<<"Destructor called\n";
    }    
};


int main(){
    Student s(12,4);
    Student *s1 = new Student(13,3);
    // copy constructor
    Student s2(s);
    cout<<s2.age<<" "<<s2.roll<<endl;
    Student s3(*s1);

    // copy assignment operator (=)
    s2 = s3;
    cout<<s2.age<<" "<<s2.roll<<endl;

    // copy constructor 
    Student s4 = s3; // Student s4(s3);

    delete s1;

   
   return 0;
}