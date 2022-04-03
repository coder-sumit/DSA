#include<bits/stdc++.h>
using namespace std;

class Vehicle{
     private:
     int maxSpeed;
     protected:
     int numTyres;
     public:
     string color;
};

// public specifier
// parent's private -> child's private
// parent's protected -> child's protected
// parent's public -> child's public

class Car : public Vehicle{
   public:
   int numGears;

   void print(){
       cout<<"NumTyres : "<<numTyres<<endl;
       cout<<"Color : "<<color<<endl;
       cout<<"NumGears : "<<numGears<<endl;
   }
};


// class Car : private Vehicle{
// private specifier
// all parent's properties private in child class

// class Car : protected Vehicle{
// protescted specifier
// parent's private - child's private
// parent's protected - child's protected
// parent's public - child's protected    



int main(){

    Vehicle v;
    // v.maxSpeed = 3; -> private property
    // v.numTyres = 4; -> protected property
    v.color = "red"; // public property
    cout<<v.color<<endl;

    Car audi;
    audi.color = "white";
    audi.numGears = 5;
    // audi.numTyres = 4; -> protected property
    cout<<audi.color<<endl;
    cout<<audi.numGears<<endl;
    audi.print();
   
   return 0;
}