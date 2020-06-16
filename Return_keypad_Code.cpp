/*
Return Keypad Code

Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.

Note : 1. The order of strings are not important.
      2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.

Input Format :
Integer n

Output Format :
All possible strings in different lines

Constraints :
1 <= n <= 10^6

Sample Input:
23

Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
*/

#include<iostream>
using namespace std;
#include<cstring>
string dial(int n)
{
    string m[100];
    m[0]= "";
    m[1]= "";
    m[2]= "abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";
    return m[n];
}
int keypad(int num,string output[])
{
  if(num==0 || num==1)
  {
    output[0]="";
    return 1;
  }
  string temp_string[1000];
  string temp = dial(num%10);
  int temp2 = keypad(num/10,output);
  for(int j=0;j<temp2;j++)
  {
    temp_string[j]=output[j];
  }
  int k=0;
  while(k<temp2*temp.size())
  {
    for(int i=0;i<temp2;i++)
    {
      for(int j=0;j<temp.size();j++)
      {
        output[k]= temp_string[i] + temp[j];
        k++;
      }
    }
  }
  return temp2 * temp.size();

}
int main(){
    int num;
    cout <<"Enter The Number From Your Keypad : ";
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    cout <<"Here Are The Outcomes : "<<endl;
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
