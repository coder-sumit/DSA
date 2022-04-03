#include<bits/stdc++.h>
using namespace std;

int main(){
    // int using heap memory
   int *p = new int;
   *p = 4;
   cout<<*p<<endl;
   delete p;

   // arr using heap memory
   int *a = new int[10];
   for(int i =0; i<10; i++){
       a[i] = (i+1)*5;
   }
   for(int i = 0; i<10; i++){
       cout<<a[i]<<" ";
   }
   cout<<endl;
   delete [] a;

   // char arr using dynamic memory
   char *c = new char[5];
   cin>>c;
   cout<<c<<endl;
   delete [] c;

   
   return 0;
}