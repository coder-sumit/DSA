#include<bits/stdc++.h>
using namespace std;

int sum(int input[], int n) {
    // base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return input[0];
    }
    // recursive call
    int smallOutput = sum(input+1, n-1);

    return smallOutput + input[0];



}

int main(){
   int n;
   cin>>n;
   int *arr = new int[n];
   for(int i =0; i<n; i++){
       cin>>arr[i];
   }

   cout<<sum(arr,n);
   return 0;
}