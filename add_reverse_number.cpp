#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int reverse_int(int n)
{
	vector<int> v;
	while(n)
	{
		v.push_back(n%10);
		n=n/10;
	}
	int m;
	m=1;
	n=0;
	for(int i=v.size()-1;i>-1;i--)
	{
	//	cout<<v[i]<<" ";
		n=n+v[i]*m;
		m=m*10;
	}
	return n;
	
	
}

int main(int argc,char *argv[])
{
	int n=1234;
	//cout<<reverse_int(n);
	int m=1200;
	cout<<reverse_int(n)+reverse_int(m);
}
