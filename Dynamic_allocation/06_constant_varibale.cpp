#include<bits/stdc++.h>
using namespace std;

int main(){
   int i = 0;
   const int &j = i;
   // j++ - not allowed 
   
   int const k = 9;
   const int &l = k; // allowed
   //int &a = k; - not allowed
   
   // int* p = &k; - not allowed
    const int *p = &k; // allowed address is constant
    // int * const q = &k; - pointer is constant
    const int * const q = &k; // both pointer & address constant

   return 0;
}