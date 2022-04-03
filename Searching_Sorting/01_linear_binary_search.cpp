#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int x){
  for(int i =0; i<n; i++){
      if(arr[i] == x){
          return i;
      }
  }
  return -1;
}

int binary_search(int arr[], int n, int x){
  int s = 0;
  int e = n-1;
  while(s<=e){
    int mid = (s+e)/2;
    if(arr[mid] == x){
      return mid;
    }else
    if(arr[mid] > x){
      e = mid-1;
    }else{
      s = mid+1;
    }
  }
  return -1;
}


int main(){
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};

   cout<<linear_search(arr,10,6)<<endl;
   cout<<binary_search(arr,10,6)<<endl;
   return 0;
}