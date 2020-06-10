/*
Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

Its length is at 6 least .
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+
She typed a random string of length n in the password field but wasn't sure if it was strong.
 Given the string she typed, can you find the minimum number of characters she must add to make
  her password strong?

Note: Here's the set of types of characters in a form you can paste in your solution:

numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"

Input Format

The first line contains an integer n  denoting the length of the string.

The second line contains a string consisting of n characters, the password typed by Louise. Each character is either a lowercase/uppercase English alphabet, a digit, or a special character.

Constraints

Output Format

Print a single line containing a single integer denoting the answer to the problem.
*/



#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  int n;
  cout <<"Enter The Length Of Your Password  : ";
  cin >>n;
  char s[n];
  int cnum=0,clow=0,cupp=0,cspec=0;
  cout <<"Enter Your Password : ";
  for(int i=0;i<n;i++)
  {
      cin >>s[i];
  }

    int temp = 6-n;
    for(int i=0;i<n;i++)
    {
      if(s[i]>=65 && s[i]<=90)
      {
        clow ++;
      }
      else if(s[i]>=97 && s[i]<=122)
      {
        cupp ++;
      }
      else if(s[i]>=48 && s[i]<=57)
      {
        cnum++;
      }
      else{
        cspec++;
      }
    }
    int count =0;
    if(cnum==0)
    {
      count++;
    }
    if(cupp==0)
    {
      count++;
    }
    if(clow==0)
    {
      count++;
    }
    if(cspec==0)
    {
      count++;
    }

    cout <<"The password will be strong,if we add ";
    if(temp<count){
    cout<<count;
    }
    else{
        cout <<temp;
    }
    cout <<" digits/character/special character into our password.";

}
