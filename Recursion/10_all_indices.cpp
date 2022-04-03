#include<iostream>
using namespace std;


int allIndexes(int input[], int size, int x, int output[]) {

if(size == 0){
    return 0;
}

int smallOutput = allIndexes(input+1, size-1, x, output);

// increment
for(int i =0; i<smallOutput; i++){
    output[i]++;
}

if(input[0] == x){
    // right shift
    for(int i = smallOutput; i>0; i--){
        output[i] = output[i-1];
    }

    output[0] = 0;
    smallOutput++;
}

    return smallOutput;

}



int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}


