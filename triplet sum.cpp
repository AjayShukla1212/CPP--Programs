/*
Triplet sum

Given a random integer array and a number x. Find and print the triplets of elements in the array which sum to x.
While printing a triplet, print the smallest element first.
That is, if a valid triplet is (6, 5, 10) print "5 6 10". There is no constraint that out of 5 triplets which have to be printed on 1st line. You can print triplets in any order, just be careful about the order of elements in a triplet.

Input format :
Line 1 : Integer N (Array Size)
Line 2 : Array elements (separated by space)
Line 3 : Integer x

Output format :
Line 1 : Triplet 1 elements (separated by space)
Line 2 : Triplet 3 elements (separated by space)
Line 3 : and so on

Constraints :
1 <= N <= 1000
1 <= x <= 100

Sample Input:
7
1 2 3 4 5 6 7
12

Sample Output ;
1 4 7
1 5 6
2 3 7
2 4 6
3 4 5
*/

#include <iostream>
using namespace std;

// arr - input array
// size - size of array
// x - sum of triplets

void FindTriplet(int a[], int n, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */

    for (int i =0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((a[i]+a[j]+a[k])==x)
                {
                    if(a[i]>=a[j] &&a[i]>=a[k])
                    {
                        if(a[j]<=a[k])
                        {
                            cout <<a[j] <<" " <<a[k] <<" " <<a[i] <<endl;
                        }
                        else{
                            cout <<a[k] <<" " <<a[j] <<" " <<a[i] <<endl;
                        }
                    }
                    else if(a[j]>=a[i] &&a[j]>=a[k])
                    {
                        if(a[k]>=a[i]){
                             cout <<a[i] <<" " <<a[k] <<" " <<a[j] <<endl;
                        }
                        else{
                             cout <<a[k] <<" " <<a[i] <<" " <<a[j] <<endl;
                        }
                    }
                    else if(a[k]>=a[i]&&a[k]>=a[j]){
                        if(a[i]>=a[j]){
                             cout <<a[j] <<" " <<a[i] <<" " <<a[k] <<endl;
                        }
                        else{
                             cout <<a[i] <<" " <<a[j] <<" " <<a[k] <<endl;
                        }
                    }

                }
            }
        }
    }
}


int main() {

	int size;

	int x;
	cin>>size;

	int *input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];
	cin>>x;

	FindTriplet(input,size,x);

	return 0;
}
