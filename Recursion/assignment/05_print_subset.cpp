#include<bits/stdc++.h>
using namespace std;

void helper(int *input, int n, vector<int> output){
    // base case
    if(n == 0){
        for(int i =0; i<output.size(); i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    
    // recursive call including 0th index value
    output.push_back(input[0]);
    helper(input+1, n-1, output);
    // excluding 0th index value
    output.pop_back();
    helper(input+1, n-1, output);
}