#include<bits/stdc++.h>
using namespace std;

string key[10] = {"","","abc", "def", "ghi","jkl","mno","pqrs","tuv","wxyz"}; 

void helper(int n, string outpusofar){
  // base case
  if(n<=1){ 
      cout<<outpusofar<<endl;
      return;
  }

  int lastDigit = n%10;
  string getStr = key[lastDigit];
  int str_size = getStr.size();

  for(int i =0; i<str_size; i++){
       helper(n/10, getStr[i] + outpusofar);
  }
}

void printKeypad(int n){
   helper(n,"");


}

int main(){
   int n; cin>>n;
   printKeypad(n);
   return 0;
}