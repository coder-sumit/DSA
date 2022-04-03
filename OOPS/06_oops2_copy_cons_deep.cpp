// Topic
// Copy Constructor with Deep Copy

#include<bits/stdc++.h>
using namespace std;


class student{
    int age;
    public:
    char *name;
    // constructor
    student(char *name, int age){
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    // copy constructor
    student(student const &s){
        this->age = s.age;
        // deep copy
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){
   char name[] = "xyza";
   student s1(name, 21);
   student s2(s1);
   s1.name[3] = 's';
   student s3(s1);
   s1.display();
   s2.display();
   s3.display();
   
   return 0;
}