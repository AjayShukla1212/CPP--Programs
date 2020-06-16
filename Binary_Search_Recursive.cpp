#include <iostream>
using namespace std;

int bs(int a[],int start,int end,int x)
{
  if(start>=end)
  {
    return -1;
  }
  int t;
  int mid = (start+end)/2;
  if(a[mid]>x)
  {
    t=bs(a,start,mid-1,x);
  }
  else if(a[mid]<x)
  {
    t=bs(a,mid+1,end,x);
  }
  else if(a[mid]==x)
  {
    return mid;
  }
}
int binarySearch(int a[],int n,int x)
{
  int start = 0,end = n-1;
  int call = bs(a,start,end,x);
  return call;
}

int main() {
    int input[100000],length,element, ans;
    cout <<"Enter The Length of array : ";
    cin >> length;
    cout <<"Enter The Elements : ";
    for(int i =0;i<length;i++)
    {
        cin >> input[i];;
    }
    cout <<"Enter The Element You Want To Search : ";
    cin>>element;
    ans = binarySearch(input, length, element);
    cout <<"So, The Searched Element is in ";
    cout<< ans <<"th position." <<endl;
}
