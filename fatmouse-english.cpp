#include<iostream>
#include<cstring>
#include<vector>
#include<string>
using namespace std;

struct mouse
{
	string fatmouse;
	string english;
};

int main(int argc,char *argv[])
{
	vector<struct mouse> v;
	struct mouse m1;
	m1.english="wang";
	m1.fatmouse="king";
	v.push_back(m1);
	
	string s;
	s="wang";
	
	vector<struct mouse>::iterator it=v.begin();
	for(;it!=v.end();)
	{
		if(strcmp(s.c_str(),(*it).english.c_str())==0)
		{
			cout<<(*it).fatmouse<<" ";
			break;
		}
		else
		{
			it++;
		}
	}
	if(it==v.end())
		cout<<"eh"<<endl;
	
}
