#include"header_file.h"
using namespace std;

void str_sort(string s)
{
	if(s[0]>=s[1])
	{
		char t;
		t=s[0];
		s[0]=s[1];
		
	}
	
	if(s[2]>=s[1])
		cout<<s<<endl;
	else
	{
		if(s[2]<=s[0])
			cout<<s[2]<<s[0]<<s[1]<<endl;
		else
		{
			cout<<s[0]<<s[2]<<s[1]<<endl;
		}
	}
}


int main(void)
{
	string s;
	vector<string> v;
	int n;
	cin>>n;
	
	while(n)
	{
		cin>>s;
		v.push_back(s);
		n--;
	}
	
	for(int i=0;i<v.size();i++)
	{
	//	str_sort(v[i]);
		cout<<v[i]<<endl;
	}
	
	for(int i=0;i<v.size();i++)
	{
		str_sort(v[i]);
	//	cout<<v[i]<<endl;
	}
		
}
