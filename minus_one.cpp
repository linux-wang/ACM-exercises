#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void)
{
	//string s;
	vector<char> v;
	char c;
	
	while(cin>>c)
	{
		if(c=='#')
			break;
		else
			v.push_back(c);
	}
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<v.size();i++)
	{
		if(v[i]=='Z')
			v[i]='A';
		else
			v[i]=v[i]+1;
	}
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
		
		
	}
}
