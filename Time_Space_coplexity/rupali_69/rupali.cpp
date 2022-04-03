#include <iostream>
using namespace std;


 int fect(int n){
     if (n==0)
     {
        return 1;
     }
     return n* fect(n-1);
 }


 int main(){
     int n;
     cin>>n;
     cout<<fect(n)<<endl;
     }

