#include <iostream>
using namespace std;

int subset(int input[], int n, int output[][20]) {
    // base case
    if(n == 0){
        output[0][0] = 0;
        return 1;
    }

    // recursive call
    int smallAns = subset(input+1, n-1, output);

    // copying from previous ans

    for(int i =0; i<smallAns; i++){
      output[i+smallAns][0] = output[i][0] + 1;
      output[i+smallAns][1] = input[0];
    }

    // copying remaining part of array
    for(int i = smallAns; i<2*smallAns; i++){
      for(int j =0; j<output[i-smallAns][0]; j++){
        output[i][j+2] = output[i-smallAns][j+1];
      }
    }

    return 2*smallAns;

}


