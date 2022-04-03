// constant functions
// constant object can only call on constant function
#include<bits/stdc++.h>
using namespace std;


class Fraction{
    private:
    int numerator;
    int denomerator;
    void simplify(){
        int hcf = 1;
        for(int i = 2; i<min(numerator, denomerator); i++){
            if(numerator%i == 0 && denomerator%i == 0){
                if(i > hcf){
                    hcf = i;
                }
            }
        }
        this->numerator = numerator/hcf;
        this->denomerator = denomerator/hcf;
    }

    public:

    int getnumerator() const{
        return this->numerator;
    }
    int getdenomerator() const{
        return this->denomerator;
    }
    int setnumerator(int n){
        this->numerator = n;
    }
    int setdenomerator(int n){
        this->denomerator = n;
    }

    Fraction(int numerator, int denomerator){
       this->numerator = numerator;
       (*this).denomerator = denomerator;
    }

    void print() const{
        cout<<numerator<<"/"<<denomerator<<endl;
    }


    void add(Fraction const &f2){
       int LCM = denomerator * f2.denomerator;
       int x = LCM/denomerator;
       int y = LCM/f2.denomerator;

       this->numerator = numerator*x + f2.numerator*y;
       this->denomerator = LCM;
       simplify();
    }

    void multiply(Fraction const &f2){
        this->numerator = numerator * f2.numerator;
        this->denomerator = denomerator * f2.denomerator;
        simplify();
    }

};

int main(){
   // constant objects can be created
   Fraction f1(2,5);
   const Fraction f2(1,3);

   f1.print();
   
   // f2.print(); -> this is not allowed because print is not constant function constant object can only call on constant function

   // after marking print as constant function
   f2.print();
   
   return 0;
}