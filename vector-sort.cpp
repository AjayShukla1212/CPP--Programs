#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
  vector <int>v;
  int n;
  cout <<"Enter The No.Of Elements : ";
  cin >>n;
  int temp[n];
  cout <<"The Given Numbers Before Sorting : ";
  for(int i=0;i<n;i++)
  {
    cin >>temp[i];
    v.push_back(temp[i]);
  }
  cout <<"The Given Numbers After Sorting : ";
   sort(v.begin(), v.end());
   for(int i=0;i<n;i++)
   {
     cout <<v[i]<<" ";
   }
}
