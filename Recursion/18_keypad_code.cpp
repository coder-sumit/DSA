#include <iostream>
#include <string>
using namespace std;

string key[10] = {"","","abc", "def", "ghi","jkl","mno","pqrs","tuv","wxyz"}; 

int keypad(int num, string output[]){


    // base case
   if(num == 0 || num == 1){
       output[0] = "";
       return 1;
   }

   // recursive call
   int myNum = num%10;
   int smallOutput = keypad(num/10, output);
   int copyNum = key[myNum].size();
   
   // creating copy of output according to need
   for(int i = 1; i<copyNum; i++){
       for(int j =0; j<smallOutput; j++){
           int index = (j+smallOutput*i);
           output[index] = output[j];
       }
   }

   // setting right ans
   for(int i =0; i<copyNum; i++){
       for(int j = 0; j<smallOutput; j++){
           int index = (j+smallOutput*i);
           output[index] = output[index] + key[myNum][i];
       }
   }

   return copyNum*smallOutput;

   
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
