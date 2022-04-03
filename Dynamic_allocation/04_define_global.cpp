#include<bits/stdc++.h>
using namespace std;
#define PI 3.14 // recommended

int a; // global variable - not recommended


int b(){
 a += 10;
 cout<<a<<endl;
}

int main(){
   int r;
   cin>>r;
   cout<<r*r*PI<<endl;
   a++;
   b();
   cout<<a<<endl;
   return 0;
}