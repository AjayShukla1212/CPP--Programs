/*
Quick Sort Code

Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.


Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)

Output format :
Array elements in increasing order (separated by space)

Constraints :
1 <= n <= 10^3

Sample Input 1 :
6
2 6 8 5 4 3

Sample Output 1 :
2 3 4 5 6 8
*/

#include<iostream>
using namespace std;

int partition(int a[],int si , int ei)
{
    int pivot = a[si];
  int count=0;
  for(int i=si+1;i<=ei;i++)
  {
    if(pivot>=a[i])
    {
      count++;
    }
  }
    int pi = si + count;
    int swap =a[si];
    a[si]=a[pi];
    a[pi]=swap;

    int j=ei;
    int i=si;
    while(i<=pi && j>=pi)
    {
        if(a[i]<=a[pi])
    {
      i++;
    }
    else if(a[j]>a[pi]){
      j--;
    }
    else{
      int swap =a[j];
      a[j]=a[i];
      a[i]=swap;
    }
    }

    return pi;

}
void qs(int a[],int si,int ei)
{
  if(si>=ei)
  {
    return ;
  }
  int pi=partition(a,si,ei);
  qs(a,si,pi-1);
  qs(a,pi+1,ei);
}

void quickSort(int a[],int n)
{
  if(n == 0 || n== 1)
  {
    return;
  }
  qs(a,0,n-1);

}


int main(){
    int n;
    cout <<"Enter The Number Of Elements : ";
    cin >> n;

    int *input = new int[n];
    cout <<"Before Sorting : ";
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    quickSort(input, n);
    cout <<"After Sorting : ";
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }

    delete [] input;

}
