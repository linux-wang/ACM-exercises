#include<vector>
#include<iostream>

using namespace std;

int main(void)
{
	int a;
	cin>>a;
	vector<int> v;
	
	do
	{
		
		v.push_back(a%2);
		a=a/2;
	}
	while(a);	
	
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==1)
			cout<<i<<" ";
		//cout<<v[i]<<" ";
	}
	
}
