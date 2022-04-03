#include <bits/stdc++.h>
using namespace std;

int subsequences(string input, string output[])
{
    // base case
    if(input.size() == 0){
        output[0] = "";
        return 1;
    }
    
    // recursive call
    int smallOutput = subsequences(input.substr(1), output);

    // small calculation
    for(int i =0; i<smallOutput; i++){
        int destIndex = smallOutput +i;
        output[destIndex] = input[0] + output[i];
    }

    return 2*smallOutput;
}

int main()
{

    string input;
    cin >> input;

    int size = input.length();

    // calculating size of output array
    int outSize = 1;
    for (int i = 0; i < size; i++)
    {
        outSize *= 2;
    }

    string *output = new string[outSize];

    subsequences(input, output);

    // printing all subsequences
    for (int i = 0; i < outSize; i++)
    {
        cout << output[i] << endl;
    }

    delete[] output;

    return 0;
}