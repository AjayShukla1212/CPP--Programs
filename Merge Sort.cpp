/*
Merge Sort Code

Sort an array A using Merge Sort.
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

Sample Input 2 :
5
2 1 5 2 3


*/




#include <iostream>
using namespace std;

void merge_sort(int a[],int l,int r)
{
  if(l>=r)
  {
    return ;
  }
  int mid = (l+r)/2;
  merge_sort(a,l,mid);
  merge_sort(a,mid+1,r);
  int n1=mid-l+1;
  int n2=r-mid;
  int L[n1],R[n2];
  for(int i=0;i<n1;i++)
  {
    L[i]=a[l+i];
  }
  for(int i=0;i<n2;i++)
  {
    R[i]=a[mid+1+i];
  }
  int i=0;
  int j=0;
  int k=l;
  while(i<n1 && j<n2)
  {
    if(L[i]<R[j])
    {
      a[k]=L[i];
      i++;
    }
    else
    {
      a[k] = R[j];
      j++;
    }
    k++;
  }
  while(i<n1)
  {
    a[k]=L[i];
    i++;
    k++;
  }
  while(j<n2)
  {
    a[k]=R[j];
    j++;
    k++;
  }
}

void mergeSort(int a[], int n)
{
  if (n==0 || n==1)
  {
    return ;
  }
  merge_sort(a,0,n-1);
}


int main() {
  int length;
  cout <<"Enter The Length Of Array : ";
  cin >> length;
  int* input = new int[length];
  cout <<"Before Sorting : ";
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  cout <<"After Sorting : ";
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
