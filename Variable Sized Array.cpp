#include <iostream>
#include<cstdint>
#include<vector>
using namespace std;



int main() {

    int array_number, query;
    int size;
    int number;
    vector<vector<int>>memArray;
    vector<int>array;

    //read the number of arrays and number of querys
    cin >> array_number >> query;
    while (array_number)
    {
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> number;
            array.push_back(number);
        }
        memArray.push_back(array);
        array.clear(); //clear array for a new one
        array_number--;
    }

    //perfom task
    int index, position;
    vector<int>list;
    while (query)
    {
        cin >> index >> position; // read index of array and the # at the position to be displayed
        number = memArray[index][position];
        list.push_back(number);
        query--;
    }
    for (int i = 0; i < list.size(); i++)
        cout << list[i] << endl;
    system("pause");
    return 0;
}
