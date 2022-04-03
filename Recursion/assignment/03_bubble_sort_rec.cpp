#include <iostream>
using namespace std;


int helper(int *arr, int si, int  ei, int ele){
    if(si>ei){
        return -1;
    }
    int mid = (si+ei)/2;
    if(arr[mid] == ele){
        return mid;
    }

    if(arr[mid] > ele){
        ei = mid-1;
        return helper(arr,si,ei,ele);
    }else{
        si = mid+1;
        return helper(arr,si,ei,ele);
    }
}

int binarySearch(int input[], int size, int element) {
   int si = 0;
   int ei = size-1;

   return helper(input, si, ei, element);

}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
