#include<iostream>
using namespace std;
int findDigits(int a){
  int n=a;
  int count=0;
  while(a!=0)
  {
    int digits = a%10;
    if(digits!=0){
    if(n%digits==0)
    {
      count++;
    }
  }
    a=a/10;
  }
  return count;
}
int main(){
  int n;
  cout <<"Enter The Number Of test cases : ";
  cin >>n;
  int a[n];
  cout <<"Enter The test Cases : ";
  for(int i=0;i<n;i++)
  {
    cin >>a[i];
  }
  cout <<"Here Are The Number Of Digits That Are Divisible By The Element : ";
  for(int i=0;i<n;i++)
  {
    cout <<findDigits(a[i])<<endl;
  }
}
