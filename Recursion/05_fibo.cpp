#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    // IH
    int smallOutput1 = fibo(n-1);
    int smallOutput2 = fibo(n-2);

    // small calculation
    return smallOutput1 + smallOutput2;
}

int main(){
   int n;
   cin>>n;
   cout<<fibo(n);
   return 0;
}