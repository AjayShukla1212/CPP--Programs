// #include<iostream>
// #include<sstream>
// using namespace std;
// int main(){
//   stringstream ss("23,4,56");
//   char ch ;
//   int a,b,c;
//   ss >>a >>ch >>b >>ch >>c;
//   cout <<a <<" "<<b<<" "<<c <<" "<<ch;
// }

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector <int>v;
    char ch;
        int count =0;
        for(int i=0;i<str.length();i++)
        {
           if(str[i]==',')
           {
                count++;
           }
        }
        int a[count+1];

        for(int i=0;i<count+1;i++)
        {
           ss >>a[i]>>ch;
        }
        for(int i=0;i<count+1;i++)
        {
            v.push_back(a[i]);
        }


    return v;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
