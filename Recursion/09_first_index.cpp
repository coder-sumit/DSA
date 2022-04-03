#include<bits/stdc++.h>
using namespace std;


int firstIndex(int input[], int size, int x) {
 if(size == 0){
     return -1;
 }

if(input[0] == x){
    return 0;
}


int smallOutput = firstIndex(input + 1, size-1, x);

if(smallOutput == -1){
    return -1;
}else{
return 1 + smallOutput;

}
}

int lastIndex(int arr[], int n, int x){
     if(n == 0){
     return -1;
     }
     
     int smallAns = lastIndex(arr+1, n-1, x);

     if(smallAns == -1){
          if(arr[0] == x){
              return 0;
          }else{
              return -1;
          }
     }else{
         return 1 + smallAns;
     }


}

int main(){
      int n,x;
   cin>>n;
   int *arr = new int[n];
   for(int i =0; i<n; i++){
       cin>>arr[i];
   }
   cin>>x;

   cout<<firstIndex(arr,n,x)<<endl;
   cout<<lastIndex(arr,n,x)<<endl;
   return 0;
}