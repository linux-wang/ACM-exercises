#include<iostream>
#include<string>
#include<vector>

using namespace std;

int start_with(string s1,string s2)
{
	if(s2.size()<=s1.size())

	{	
		string::iterator it1=s1.begin();
		string::iterator it2=s2.begin();
	
		for(;it2!=s2.end();)
		{
			if((*it1)==(*it2))
			{
				it1++;
				it2++;
			}
			else
				return 0;
		}
		if(it2==s2.end())
			return 1;
	}
	
	else
		return 0;
}

int main(int argc,char *argv[])
{
	cout<<"*******************************"<<endl;
	int n;
	cout<<"cin n:";
	cin>>n;
	
	vector<string> v;
	string s;
	cout<<"cin string s:";
	cin>>s;
	
	while(n!=0)
	{
		v.push_back(s);
		
		if(n!=1)
		{
			cout<<"input string s:";
			cin>>s;
			n--;
		}
		else
			break;
	}
	
	cout<<"**************************************"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	
	cout<<"**************************************"<<endl;
	int m=1;
	for(int i=0;i<v.size()-1;i++)
	{
		int j=i+1;
		for(;j<v.size();j++)
		{
			if(start_with(v[j],v[i])==1)
			{
				m=m&&0;	
			}
			
		}	
		//if(j==n)
		//	cout<<"right"<<endl;
	}
	if(m==1)
		cout<<"right"<<endl;
	else
		cout<<"wrong"<<endl;
}
