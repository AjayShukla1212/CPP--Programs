#include<iostream>
using namespace std;
#include<cstring>
string timeConversion(string s)
{
  int first = int(s[0]-'0');
  int sec = int(s[1]-'0');
  int n = first*10 + sec;
  if(s[8]=='P' && s.substr(0,2)!="12")
  {
      n=n+12;
      return to_string(n) + s.substr(2,6);
  }
  else if(int(s[0]-'0')*10 + int(s[1]-'0') == 12 && s.substr(8,2) =="AM")
  {
      return "00" + s.substr(2,6);
  }

  else{
    return s.substr(0,8);
  }



}
int main()
{
  string s;
  cout <<"Enter The Time Here : ";
  cin >> s;
  cout <<"The Time After Getting Converted Is : ";
  // string v = timeConversion(s);
  cout << timeConversion(s)<<endl;
}
