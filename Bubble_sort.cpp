// arr - input array
// n - size of array

#include <iostream>
using namespace std;

void bubbleSort(int *a, int n){
	// Write your code here

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}


int main()
{

	int t;
  cout <<"Enter The Number Of Test Cases : ";
	cin >> t;

	while (t--)
	{
		int size;
    cout <<"Enter The Size Of Array : ";
		cin >> size;

		int *input = new int[size];
    cout <<"Arrays Before Bubble Sort : ";
		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		bubbleSort(input, size);
    cout <<"Arrays After Bubble Sort : ";
		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}
