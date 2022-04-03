// order of calling constructor & destructor


#include<bits/stdc++.h>
using namespace std;

class Vehicle{
     private:
     int maxSpeed;
     protected:
     int numTyres;
     public:
     string color;

    //  Vehicle(){
    //      cout<<"Vehicle's constructor called\n";
    //  }

    Vehicle(int n){
        maxSpeed = n;
        cout<<"vehicle's parameterized constructor called"<<endl;
    }



     ~Vehicle(){
         cout<<"Vehicle's destructor called\n";
     }
};

class car : public Vehicle{

  public:
//   car(){
//       cout<<"car's constructor calld"<<endl;
//   }

// using initialization list
     car(int n) : Vehicle(n){
         cout<<"car's constructor called"<<endl;
     }

  ~car(){
      cout<<"car's destructor called\n";
  }

};

// order of calling constructor
// parent calls -> child class -> child class
// order of calling destructor
// child class <- parent class <- parent class

int main(){
   Vehicle v(4);
   car c(5);
   return 0;
}