#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
// base case
if(n == 0){
 return 1;
}

// recursive call
int smallAns = power(x, n-1);

// small 
return x*smallAns;
}

int main(){
   int x,n;
   cin>>x>>n;
   cout<<power(x,n)<<endl;
   return 0;
}