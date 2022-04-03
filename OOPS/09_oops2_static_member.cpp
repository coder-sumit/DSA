// static properties & static functions

#include<bits/stdc++.h>
using namespace std;

class student{
  public:
  int roll;
  int age;
  static int total_student; // now it belongs to class not to object

  // static functions
  // does not have this keyword
  // only works on static properties
  static int getTotal(){
      return total_student;
  }

  student(){
      total_student++;
  }

};

// intialization of static prope
int student:: total_student = 0;


int main(){
   student s1,s2,s3,s4,s5;
   cout<<student:: total_student<<endl;
   cout<<student :: getTotal()<<endl;
   return 0;
}