// Topic Covered
// Shallow Copy & Deep Copy
#include<bits/stdc++.h>
using namespace std;

class Student{
    int age;
    char *name;

    public:
    Student(char *name, int age){
        this->age = age;
        // shallow copy
        // this->name = name;
        // Deep Copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);        
    }

    void display(){
        cout<<"Name: "<<name<<" Age: "<<age<<endl;
    }
};

int main(){
    char name[] = "abcd";

    Student s(name, 18);
    s.display();
    name[3] = 'e';
    Student s1(name, 19);
    s1.display();
    s.display();
   
   return 0;
}

