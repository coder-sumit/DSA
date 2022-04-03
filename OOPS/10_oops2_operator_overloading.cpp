// Topics 
// operator overloading - (+ *)
// preincrement oprator - (++a)
// post-increment operator - (a++)
// overloading += operator 

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
    Fraction(int numerator, int denomerator){
       this->numerator = numerator;
       (*this).denomerator = denomerator;
    }

    void print() const{
        cout<<numerator<<"/"<<denomerator<<endl;
    }


    Fraction add(Fraction const &f2){
       int LCM = denomerator * f2.denomerator;
       int x = LCM/denomerator;
       int y = LCM/f2.denomerator;

       int new_numerator = numerator*x + f2.numerator*y;
       int new_denomerator = LCM;
       Fraction ans(new_numerator, new_denomerator);
       ans.simplify();
       return ans;
    }

    // overloading + operator

    Fraction operator+(Fraction const &f2){
       int LCM = denomerator * f2.denomerator;
       int x = LCM/denomerator;
       int y = LCM/f2.denomerator;

       int new_numerator = numerator*x + f2.numerator*y;
       int new_denomerator = LCM;
       Fraction ans(new_numerator, new_denomerator);
       ans.simplify();
       return ans;
    }

    Fraction multiply(Fraction const &f2){
        int new_numerator = numerator * f2.numerator;
        int new_denomerator = denomerator * f2.denomerator;
        Fraction ans(new_numerator, new_denomerator);
        ans.simplify();
        return ans;
    }
    // overloading * operator
    Fraction operator*(Fraction const &f2){
        int new_numerator = numerator * f2.numerator;
        int new_denomerator = denomerator * f2.denomerator;
        Fraction ans(new_numerator, new_denomerator);
        ans.simplify();
        return ans;
    }

    // overloading preincrement operator (++p)
    Fraction& operator++(){
        numerator = numerator + denomerator;
        simplify();
        return *this;
    }
    // overloading post increment operator (p++)
    // nesting is not allowed in post incremnt operator

    Fraction operator++(int){
        Fraction fnew(numerator, denomerator);
        numerator = numerator + denomerator;
        simplify();
        fnew.simplify();
        return fnew;
    }

    // overloading of += operator
    // nesting of += operator is allowed
    Fraction& operator+=(Fraction const &f2){
        int LCM = denomerator * f2.denomerator;
        int x = LCM/denomerator;
        int y = LCM/f2.denomerator;

        int num = numerator*x + (f2.numerator * y);
        numerator = num;
        denomerator = LCM;
        simplify();
    }

};

int main(){

    Fraction f1(1,2);
    Fraction f2(1,3);

    Fraction f3 = f1 + f2;
    Fraction f4 = f1 * f2;

    f1.print();
    f2.print();
    f3.print();
    f4.print();

    cout<<"Now Check for pre increment"<<endl;
    
    f1.print();
    ++f1;
    f1.print();

    Fraction f5 = ++f1;
    f5.print();

    Fraction f6(1,2);

    Fraction f7 = ++(++f6);

    cout<<"Now check for nesting"<<endl;

    f6.print();
    f7.print();

    cout<<"Check for post increment operator\n";
    Fraction f8(1,2);
    Fraction f9 = f8++;
    f8.print();
    f9.print();

    cout<<"Check for += operator\n";
    Fraction f10(5,2);
    Fraction f11(1,3);

    Fraction f12 = f10 + f11;
    f11 += f10;
    f11.print();
    f12.print();


   
   return 0;
}