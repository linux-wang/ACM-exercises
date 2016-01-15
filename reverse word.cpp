#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(void)
{
	string s;
	cout<<"input s:";
	getline(cin,s);
	cout<<"s:"<<s<<endl;
	
	string::iterator it_1=s.begin();
	for(string::iterator it=s.begin();it!=s.end()+1;it++)
	{
		if((*it)==' ')
		{
			reverse(it_1,it);
			it_1=it+1;
			
			
		}
		else
		{
			if(it==s.end())
			{
				reverse(it_1,s.end());
			}
		}
		
		 
	}
	cout<<s<<endl;
}
