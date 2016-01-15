#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	vector<int> v;
	int m,n;
	cout<<"input m and n:";
	cin>>m>>n;
	
	//test
	cout<<m<<" "<<n;
	
	for(int i=0;i<m*n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	
	for(int i=0;i<m*n;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
