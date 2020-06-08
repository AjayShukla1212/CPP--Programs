#include<iostream>
using namespace std;
bool prime(int n)
{
	int d=2;
	while(d<n)
	{
		if(n%d==0)
		{
			return false;
             	}
		d++;
	}
	return true;
}
int main()
{
	int p;
	cout <<"Enter The Number You Want To Check For prime number : ";
	cin>>p;
	if(prime(p)==1)
	{
		cout <<"False";
	}
	else{
		cout <<"True";
	}
}
