// faction class


#include<iostream>
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
    Fraction(int numerator, int denomerator){
       this->numerator = numerator;
       (*this).denomerator = denomerator;
    }

    void print(){
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
   Fraction f1(5,11);
   Fraction f2(7,10);
   f1.multiply(f2);
   f1.print();

   return 0;
}