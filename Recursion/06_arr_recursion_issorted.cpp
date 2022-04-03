#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    // base case
    if(n <= 1){
        return true;
    }

    // small calculation
    if(arr[0] > arr[1]){
        return false;
    }

    return isSorted(arr+1, n-1);
}

int main(){
   int arr[10];
   for(int i = 0; i<10; i++){
       cin>>arr[i];
   }
   isSorted(arr, 10)?cout<<"true":cout<<"false"<<endl;

   return 0;
}