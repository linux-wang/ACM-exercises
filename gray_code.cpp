#include"header_file.h"
using namespace std;

vector<string> gray_code(int n)
{
	if(n==1)
	{
		vector<string> v;
		v.push_back("0");
		v.push_back("1");
		return v;
	}
	else
	{
		vector<string> v;
		vector<string> v1;
		v1=gray_code(n-1);
		
		for(int i=0;i<v1.size();i++)
		{
			v.push_back("0"+v1[i]);
		}
		for(int i=(v1.size()-1);i>-1;i--)
		{
			v.push_back("1"+v1[i]);
		}
		
		return v;
	}
}

int main(int argc,char *argv[])
{
	int n;
	cout<<"input n:";
	cin>>n;
	
	vector<string> v;
	v=gray_code(n);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
}
