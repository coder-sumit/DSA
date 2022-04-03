#include<bits/stdc++.h>
using namespace std;

int count_digit(int n){
    // base case
    if(n <10){
        return 1;
    }

    return 1 + count_digit(n/10);
}

int main(){
   int n;
   cin>>n;
   cout<<count_digit(n);
   return 0;
}