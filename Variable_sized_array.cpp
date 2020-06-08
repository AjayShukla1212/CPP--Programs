// #include<iostream>
// using namespace std ;
// int main()
// {
//   int n,q;
//   int a[100][100],b[100];
//   cin >>n >>q;
//
//   for(int i=0;i<n;i++)
//   {
//
//     cin >>b[i];
//     for(int j=0;j<b[i];j++)
//     {
//       cin >>a[i][j];
//     }
//   }
//   int ask_que[50][50];
//   for(int i=0;i<q;i++)
//   {
//     for(int j=0;j<2;j++)
//     {
//       cin >> ask_que[i][j];
//     }
//   }
//   for(int i=0;i<q;i++)
//   {
//
//     cout <<a[ask_que[i][0]][ask_que[i][1]]<<endl;
//   }
//
//
// }





#include<iostream>
using namespace std;
int main()
{
  int array_size,queries;
  cin >>array_size >>queries;
  int **arrays = new int *[array_size];
  for(int i=0;i<array_size;i++)
  {
    arrays[i] = new int [10000];
  }
  int **ask_que = new int *[queries];
  for(int i=0;i<queries;i++)
  {
    ask_que[i] = new int [2];
  }

  for(int i=0;i<array_size;i++)
  {
    cin >>arrays[i][0];
    for(int j=1;j<arrays[i][0] +1;j++)
    {
      cin >>arrays[i][j];
    }
  }
  for(int i=0;i<queries;i++)
  {
    for(int j=0;j<2;j++)
    {
      cin >> ask_que[i][j];
    }
  }
  for(int i=0;i<queries;i++)
  {

    cout << arrays[ask_que[i][0]][1+ask_que[i][1]] <<endl;
  }


for (int i=0;i<array_size;i++)
{
    delete []arrays[i];
}
delete []arrays;

for (int i=0;i<queries;i++)
{
    delete []ask_que[i];
}
delete []ask_que;
}
