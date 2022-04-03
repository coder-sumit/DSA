#include<bits/stdc++.h>
using namespace std;

bool checkNumber(int input[], int size, int x) {

if(size==0){
    return false;
}

if(input[0] == x){
    return true;
}

return checkNumber(input+1, size-1, x);

}

int main(){
   int n,x;
   cin>>n;
   int *arr = new int[n];
   for(int i =0; i<n; i++){
       cin>>arr[i];
   }
   cin>>x;
   checkNumber(arr,n,x)?cout<<"true":cout<<"false"<<endl;
   return 0;
}