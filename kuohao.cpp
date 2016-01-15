#include"header_file.h"
#include<stack>
using namespace std;

int main(void)
{
	stack<char> v;
	string s;
	cout<<"input s:";
	cin>>s;
	
	if(s.size()%2!=0)
	{
		cout<<"no"<<endl;
	}
	else
	{
		for(string::iterator it=s.begin();it!=s.end();it++)
		{
			if(v.size()==0)
			{
				if(*it==']'||*it==')')
				{
					cout<<"no"<<endl;
					break;
				}
				else
					v.push(*it);	
			}
			else
			{
				if((*it)=='[')
				{
					if(v.top()=='(')
					{
						cout<<"no"<<endl;
						break;
					}
					else
					{
						v.push(*it);
					}
				}
				
				if((*it)==']')
				{
					if(v.top()=='(')
					{
						cout<<"no"<<endl;
						break;
					}
					else
					{
						if(v.top()=='[')
						{
							v.pop();
						}
						
					}
				}
				
				if((*it)=='(')
				{
					v.push(*it);
				}
				
				if((*it)==')')
				{
					if(v.top()=='(')
					{
						v.pop();
					}
					else if(v.top()=='[')
					{
						cout<<"no"<<endl;
						break;
					}
				}
			}
		}
		if(v.size()==0)
			cout<<"yes"<<endl;
	}
}
