#include"header_file.h"
#include<cstring>
using namespace std;

void ctp(string s)
{
	for(int i=0;i<s.size();i++)
	{
		switch (s[i])
		{
			case 'A':
				s[i]='V';
				break;
			case 'B':
				s[i]='W';
				break;
			case 'C':
				s[i]='X';
				break;
			case 'D':
				s[i]='Y';
				break;
			case 'E':
				s[i]='Z';
				break;
			case 'F':
				s[i]='A';
				break;
			default:
				s[i]=s[i];
				break;
		}
	}
	//for(int i=0;i<s.size();i++)
	//{
		cout<<s<<endl;
	//}
}

int main(void)
{
	vector<string> v;
	string s;
	
	getline(cin,s);
//	cout<<s<<endl;
//	cout<<strcmp(s.c_str(),"END");
	while(strcmp(s.c_str(),"ENDOFINPUT"))
	{
	//	cout<<s<<endl;
		if(!strcmp(s.c_str(),"START"))
			getline(cin,s);
			//cout<<s<<endl;
		else
		{
			if(!strcmp(s.c_str(),"END"))
			{
				getline(cin,s);
			}
			else
			{
				v.push_back(s);
				getline(cin,s);
			}
		}
	}
	
	for(int i=0;i<v.size();i++)
	{
		ctp(v[i]);
	//	cout<<s<<endl;
	//	cout<<v[i]<<" ";
	}
}
