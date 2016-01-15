#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int main(void)
{
	vector<string> v;
	v.push_back("1234");
	reverse(v[0].begin(),v[0].end());
	
	for(string::iterator it=v[0].begin();it!=v[0].end();it++)
	{
		cout<<(*it);
	}
	//cout<<v[0];
} 
