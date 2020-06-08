// Cleaning the Room
// Send Feedback
// Akansha keeps her room untidy. She has thrown pencils all over the floor. Her mother came and gave her a box to put her pencils in.
// She found some of the pencils cannot be put in the box. To put them away from the sight of her mother, she threw them in the backyard.
// Can you help Akansha in determining which pencil will fit in the box and which pencils have to be thrown in the backyard.
// Input format:
// The first line of input of contains an integer N (1 <= N <= 50), where N denotes number of pencils on the floor. It also contains 2 integers: A and B (1 <= A, B <= 100), where A represents width of the box and B represents height of the box.
// The following N lines contains length of each pencil.
// Time Limit: 1 second
// Output format:
// For each pencil, print “DA” if it can fit in the box and “NE” otherwise.



 #include<iostream>
 using namespace std;
#include<cmath>
int triplet(int width,int height)
{
  int c;
  float v = pow(width,2)+pow(height,2);
  c = int(pow(v,0.5));
  return c;
}

 int main() {

	// Write your code here
    int n,width,height;
    cout <<"Enter The Number Of Pencils do You Have : ";
    cin >>n >>width >>height;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    int max_size = triplet(width,height);
    // cout<<max_size;
    for(int i=0;i<n;i++)
    {
      if(a[i]<=max_size)
      {
        cout <<"DA"<<endl;
      }
      else{
        cout <<"NE" <<endl;
      }
    }
}
