#include <iostream>
using namespace std;

void merge(int *input, int si, int ei){
  int n = ei-si+1;
  int mid = (si+ei)/2;

  int *arr = new int[n];
  int i = si;
  int j = mid+1;
  int k =0;

  while(i<=mid && j<=ei){
      if(input[i] <= input[j]){
          arr[k] = input[i];
          k++;
          i++;
      }else{
          arr[k] = input[j];
          j++;
          k++;
      }
  }

  while(i<=mid){
      arr[k] = input[i];
        k++;
        i++;
  }
  while(j<=ei){
      arr[k] = input[j];
        k++;
        j++;
  }

  // copy to orignal array
  for(int i = si, k =0; i<=ei; i++, k++){
      input[i] = arr[k];
  }

  delete [] arr;
}

void helper(int *input, int si, int ei){
       // base case
       if( si >= ei){
           return;
       }

       int mid = (si+ei)/2;
       helper(input, si, mid);
       helper(input, mid+1, ei);

       merge(input, si, ei);



}

void mergeSort(int input[], int size){
  int si = 0;
  int ei = size-1;

  helper(input, si, ei);
        
}



int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}