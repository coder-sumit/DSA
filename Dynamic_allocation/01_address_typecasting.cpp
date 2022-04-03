// Address TypeCasting

#include<bits/stdc++.h>
using namespace std;

int main(){

    // implicit typecasting
   int a = 65;
   char b = a;
   cout<<b<<endl;

   // explicit typecasting
   int *c = &a;
   char *d = (char*)c;
   cout<<*d<<endl;
   return 0;
}