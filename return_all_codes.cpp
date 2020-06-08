#include<iostream>
#include<cstring>

using namespace std;//



int getCodes(string input, string output[10000]) {
    if(input.length() == 0)
    {
      output[0] = "";
      return 1;
    }
    string result1[10000] ,result2[10000];
    int s1 = getCodes(input.substr(1),result1);
    int s2 = 0;
    if(input.length()>1)
    {
      if((10*(input[0]-'0')+(input[1]-'0')) > 9 && (10*(input[0]-'0')+(input[1]-'0'))< 27 )
      {
        s2 = getCodes(input.substr(2),result2);
      }
    }
    int k=0;
    for(int i=0;i<s1;i++)
    {
      output[k++] = char((input[0]-'0') + 'a' - 1) + result1[i];

    }
    for(int i=0;i<s2;i++)
    {
      output[k++] = char((10*(input[0]-'0')+(input[1]-'0'))+'a' - 1) + result2[i];

    }
    return k++;
}

int main()
{
  string input,output[10000];
  cout <<"Enter The Code : ";
  cin >> input;
  int count = getCodes(input,output);
  cout <<"The Possible outcomes that come out from code is as Follows : "<<endl;
  for(int i=0;i<count && i<10000;i++)
  {
    cout <<output[i]<<endl;
  }

}
