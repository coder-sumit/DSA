#include <iostream>
using namespace std;

bool checkAB(char input[]) {
	// base case
    if(input[0] == '\0'){
        return true;
    }

    if(input[0] == 'a'){
        if(input[1] == 'b' && input[2] == 'b'){
            return checkAB(input + 3);
        }else{
            return checkAB(input+1);
        }
    }

    return false;


}

int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
