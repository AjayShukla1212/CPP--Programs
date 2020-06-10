/*Input Format

The first and only line consists of n integers separated by commas.

Output Format

Print the integers after parsing it.

P.S.: I/O will be automatically handled. You need to complete the function only.

Sample Input

23,4,56

Sample Output

23
4
56 */

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	
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
