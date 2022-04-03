// Types of Inheritence
// Single inheritange - a ->b one base class and one derived class
// Multilevel Inheritance - a->b->c 
// Hirarchical Inheritance - a->b, a->c, a->d one base class multiple derived class
// Multiple Inheritance - a->d, b->d, c->d multiple base class of a single derived class


#include<bits/stdc++.h>
using namespace std;

// single inheritance
// here car class inheriting vehicle class
class vehicle{
    protected:
    int numTyres;
    string color;    
};

class car : public vehicle{
    public:
    int numGears;

};

// multilevel inhertance
// car1 class inhriting vehicle class & car2 class inhriting car1 class
class vehicle1{
    protected:
    int numTyres;
    string color;
};

class car1 : public vehicle1{
    public:
    int numGears;
};

class car2 : public car1{
    public:
   int speed;
};

// Hirarichal inheritance
// school, college and university class are inheriting from class sumit

// here oriental class inhriting from class ankit, sachin & piyush

class sumit{

    protected:
    int age;

};

class college : public sumit{
    public:
    string name;
};

class school : public sumit{
    public:
    string name;
};

class university : public sumit{
    public:
    string name;
};

// multiple inheritance

class ankit{
   protected:
   int roll;
};
class sachin{
    protected:
    int age;
};
class piyush{
    protected:
    string city;

};

class oriental : public ankit, protected sachin, public piyush{
    public:
    int marks;

};
