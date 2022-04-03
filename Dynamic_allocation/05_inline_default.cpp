#include<bits/stdc++.h>
using namespace std;

// inline function
inline int max(int a, int b){
    return a>b?a:b;
}

// defalut argument
int sum(int a, int b, int c =0, int d = 0){
    return a+b+c+d;
}

int main(){
   int a,b;
   cin>>a>>b;
   
   cout<<max(a,b)<<endl;
   cout<<sum(a,b)<<endl;
   int c,d;
   cin>>c>>d;
   cout<<sum(a,b,c,d)<<endl;


   return 0;
}