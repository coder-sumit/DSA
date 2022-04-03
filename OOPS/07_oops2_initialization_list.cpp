// initialization list
// important if constant and refrence variable used in class


#include<iostream>
using namespace std;
class student{
    public:
    int age;
    int const rollNo;
    int &x;

    // constructor with initialization list
    student(int r, int age) : rollNo(r), age(age), x(this->age){

    }

    void display(){
        cout<<rollNo<<" "<<age<<" "<<x<<endl;
    }


};

int main(){
   student s(12, 19);
   s.display();

   
   return 0;
}