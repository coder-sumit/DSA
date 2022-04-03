#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    for(int i = 1; i<n; i++){
        for(int j = i; j>0; j--){
             if(arr[j] < arr[j-1]){
                 int temp = arr[j];
                 arr[j] = arr[j-1];
                 arr[j-1] = temp;
             }else{
                 break;
             }
        }
    }
    
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}