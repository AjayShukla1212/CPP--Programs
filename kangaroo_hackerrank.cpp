/*
You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number
line ready to jump in the positive direction (i.e, toward positive infinity).

The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump.
The second kangaroo starts at location x2 and moves at a rate of v2 meters per jump.
You have to figure out a way to get both kangaroos at the same location at the same time as part of the show.
 If it is possible, return YES, otherwise return NO.

For example, kangaroo 1 starts at x1=2 with a jump distance v1=1 and kangaroo 2 starts at x2=1 with a jump
distance of v2=2. After one jump, they are both at x=3, (x1+v1=2+1,x2+v2=1+2), so our answer is YES.

Function Description

Complete the function kangaroo in the editor below. It should return YES if they reach the same position at
the same time, or NO if they don't.

kangaroo has the following parameter(s):

x1, v1: integers, starting position and jump distance for kangaroo 1
x2, v2: integers, starting position and jump distance for kangaroo 2

Input Format

A single line of four space-separated integers denoting the respective values of x1, v1, x2, and v2.

Constraints
* 0<=x1<x2<=10000
* 1<=v1<=10000
* 1<=v2<=10000
Output Format

Print YES if they can land on the same location at the same time; otherwise, print NO.

Note: The two kangaroos must land at the same location after making the same number of jumps.
*/


#include<iostream>
using namespace std;

string kangaroo(int x1,int v1,int x2,int v2)
{
  string s1 ="YES";
  string s2 = "NO";
  for(int i=0;i<10000;i++)
  {
    int k1 = x1+ i*v1;
    int k2 = x2 + i*v2;
    if(k1==k2)
    {
      return s1;
    }
  }
  return s2;
}

int main()
{
  int x1,v1,x2,v2;
  cout <<"Enter The Initial Point And Rate Of Jumps Per Instance Of Kangaroo 1 : ";
  cin >>x1 >>v1;
  cout <<"Enter The Initial Point And Rate Of Jumps Per Instance Of Kangaroo 2 : ";
  cin >>x2 >>v2;
  string s = kangaroo(x1,v1,x2,v2);
  cout <<"Will They Meet At Any Point Or Not : ";
  cout <<s <<endl;
}
