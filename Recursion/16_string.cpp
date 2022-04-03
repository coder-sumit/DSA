#include<bits/stdc++.h>
using namespace std;

int main(){
   string s = "sumit";
   cout<<s<<endl;
//    cin>>s;
//    cout<<s<<endl;
   //cin>>s;
   
   getline(cin, s); // takes input with space
   cout<<s<<endl;

   // length of string
   cout<<s.size()<<endl;
   cout<<s.length()<<endl;

   // can be used same as arr
   cout<<s[0]<<endl;

   //substr function
   cout<<s.substr(3)<<endl; // first arg - index
   cout<<s.substr(3,3)<<endl; // substr(index, length);
    

   return 0;
}