#include<bits/stdc++.h>
using namespace std;

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // base case
    if(n==0){
        if(k == 0){
            output[0][0] = 0;
            return 1;
        }else{
            return 0;
        }
    }
    
    int output1[10000][50], output2[10000][50];
    
    // excluding 0th index
    int size1 = subsetSumToK(input+1, n-1, output1, k);
    int size2 = subsetSumToK(input+1, n-1, output2, k -input[0]);
    
    // copying output1 to output
    for(int i =0;i<size1; i++){
        for(int j = 0; j<=output1[i][0]; j++){
            output[i][j] = output1[i][j];
        }
    }
    
    // generating right output 2
    for(int j = 0; j<size2; j++){
        
        output2[j][0] = output2[j][0]+1;
        // right shift values
        for(int k =1; k<output[j][0]; k++){
            output2[j][k+1] = output2[j][k];
        }
        
        output2[j][1] = input[0];
        
    }
    
    // copying output 2
    for(int i = 0; i<size2; i++){
        for(int j = 0; j<=output2[i][0]; j++){
        output[i+size1][j] = output[i][j];
    }
        
        return size1+size2;
    

}
