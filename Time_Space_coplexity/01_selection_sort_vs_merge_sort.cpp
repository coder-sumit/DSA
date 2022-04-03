#include<bits/stdc++.h>
#include<sys/time.h>
using namespace std;

// function to get time in microsecond
long getTimeInMicroSec(){
    struct timeval start;
    gettimeofday(&start, NULL);
    return start.tv_sec*1000000 + start.tv_usec;
}


// merge sort function
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

// selection sort
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

for(int n = 10; n<=1000000; n*=10){
    int *arr = new int[n];
    long start,end;
    for(int i = 0; i<n; i++){
        arr[i] = n-i;
    }

    start = getTimeInMicroSec();
    mergeSort(arr,n);
    end = getTimeInMicroSec();

    cout<<"merge sort: for n = "<<n<<" "<<end-start<<endl;
    delete [] arr;
}
for(int n = 10; n<=1000000; n*=10){
    int *arr = new int[n];
    long start,end;
    for(int i = 0; i<n; i++){
        arr[i] = n-i;
    }

    start = getTimeInMicroSec();
    selection_sort(arr,n);
    end = getTimeInMicroSec();

    cout<<"selection sort: for n = "<<n<<" "<<end-start<<endl;

    delete [] arr;
}


    
   
   return 0;
}