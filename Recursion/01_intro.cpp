#include<bits/stdc++.h>
using namespace std;

int fac(int n){
    // base case
    if(n == 0){
        return 1;
    }
    // induction hypothesis
    int ans = fac(n-1);

    // small calculation
    return n*ans;
    }

int main(){
   int n;
   cin>>n;
   cout<<fac(n);
   return 0;
}