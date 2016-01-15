#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string s;
	getline(cin,s);
	//cout<<s;
	
	for(string::iterator it=s.begin();it!=s.end();it++)
	{
		if((*it)==' ')
		{
			cout<<"%20";
		}
		else
			cout<<(*it);
	}
}
