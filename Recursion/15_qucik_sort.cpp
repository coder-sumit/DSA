#include<bits/stdc++.h>
using namespace std;

int partition(int *arr, int si, int ei){
    int pivot = arr[si];
    // count element less than temp
    int count = 0;
    for(int i =si+1; i<=ei; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    int pivotIndex = si+count;
    // swap element to right position of pivot
    int temp = arr[pivotIndex];
    arr[pivotIndex] = arr[si];
    arr[si] = temp;

    // all small ele on left & all large ele on right
    int i = si;
    int j = ei;
    while(i<=pivotIndex && j>=pivotIndex){
       if(arr[i] <= pivot){
           i++;
       }else if(arr[j] > pivot){
           j--;
       }else{
           int temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
           i++;
           j--;
       }
    }

    return pivotIndex;

}

void helper(int *arr, int si, int ei){
// base case
if(si>=ei){
    return;
}

int n = partition(arr, si, ei);

helper(arr, si, n-1);
helper(arr,n+1, ei);

return;

}

void quickSort(int input[], int size) {
  int si = 0;
  int ei = size-1;

  helper(input, si, ei);

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}
