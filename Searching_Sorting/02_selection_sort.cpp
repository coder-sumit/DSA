#include<bits/stdc++.h>
using namespace std;

int find_min(int *arr, int n){
   int ans = 0;
   int ans_val = arr[0];
   for(int i = 1; i<n; i++){
      if(ans_val > arr[i]){
         ans = i;
         ans_val = arr[i];
      }
   }

   return ans;
}

void selection_sort(int *arr, int n){
    for(int i = 0; i<n; i++){
        int min_index = find_min(arr+i, n-i) + i;
        // swapping
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

}

int main(){
   int n;
   cin>>n;
   int *arr = new int[n];

   for(int i =0; i<n; i++){
      cin>>arr[i];
   }

   selection_sort(arr,n);
    
   for(int i =0; i<n; i++){
      cout<<arr[i]<<" ";
   }
   
   return 0;
}