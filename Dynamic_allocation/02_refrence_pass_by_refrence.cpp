// refrence varibale and pass by refrence
// note - return pointer or refrebce varible of loacal function is not good ptractice

#include<bits/stdc++.h>
using namespace std;

// pass by refrence
int multiply7(int &n){
    n = n*7;
    return n;
}

int main(){

    // refrence variable
   int i =0;
   int &j = i;
   i++;
   cout<<j<<endl;

   int c = 4;
   c = multiply7(c);
   cout<<c<<endl;
   return 0;
}