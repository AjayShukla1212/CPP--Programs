#include<iostream>
using namespace std;
void merge(int a[],int m,int b[],int n,int c[])
{
    int i=0,j=0,k=0;
    while(i<m+n && j<m && k<n)
    {

           if(a[j]<=b[k])
            {
                c[i]=a[j];
                j++;
            }
            else
           {
                c[i]=b[k];
                k++;
            }
           i++;
    }
    while(i<m+n && j<m)
    {
        c[i]=a[j];
        j++;
        i++;
    }
    while(i<m+n && k<n)
    {
        c[i]=b[k];
        k++;
        i++;
    }

}

int main()
{
  int a[100],b[100],c[100];
  int m ,n;
  cout <<"Enter The Length of 1st Sorted Array : ";
  cin >> m ;
  cout <<"Enter The Length of 2nd Sorted Array : ";
  cin >>n;
  cout <<"1st Array : ";
  for(int i=0;i<m;i++)
  {
    cin >>a[i];
  }
  cout <<"2nd Array : ";
  for(int i=0;i<n;i++)
  {
    cin >>b[i];
  }
   merge(a,m,b,n,c);
   cout <<"The new Array after merging is : ";
   for(int i=0;i<m+n;i++)
   {
     cout <<c[i] <<" ";
   }
   cout <<endl;

}
