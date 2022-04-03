#include<bits/stdc++.h>
using namespace std;

// length of string
int len(char *arr){
    if(arr[0] == '\0'){
        return 0;
    }
    return 1 + len(arr+1);
}

// remove x
void removeX(char *str){
    if(str[0] == '\0'){
        return;
    }
    removeX(str+1);
    if(str[0] == 'x'){
        int i = 0;
       while(str[i] != '\0'){
           str[i] = str[i+1];
           i++;
       }
    }
}

int main(){
    int n; cin>>n;
    char* arr = new char[n];

   cin>>arr;
//    cout<<len(arr);

  removeX(arr);
  cout<<arr;
   delete [] arr;
   return 0;
}