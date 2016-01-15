#include"header_file.h"
#include<string.h>
using namespace std;

void add_color(vector<string> v1,vector<int> v2,string s)
{
	if(v1.size()==0)
	{
		v1.push_back(s);
		v2.push_back(1);
	}
	else
	{
		int i=0;
		for(;i<v1.size();)
		{
			if(!strcmp(v1[i].c_str(),s.c_str()))
			{
				v2[i]++;
				//i++;
				break;
			}
			else
			{
				i++;
			}
			
		}
		if(i==v1.size())
		{
			v1.push_back(s);
			v2.push_back(1);
		}
	}
}

int find_max(vector<string> v1,vector<int> v2)
{
	int max;
	max=0;
	for(int i=0;i<v2.size()-1;i++)
	{
		for(int j=i+1;j<v2.size();j++)
		{
			if(v2[i]<=v2[j])
			{
				max=j;	
			}
		}
	}
	return max;
}

int main(void)
{
	int N;
	cout<<"input N:";
	cin>>N;
	
	vector<string> v1;
	vector<int> v2;
	//string s;
		
	while(N)
	{
		string s;
		cin>>s;
		add_color(v1,v2,s);
		N--;	
	}
	
	cout<<endl;
	int max=find_max(v1,v2);
	cout<<v1[max]<<endl;
		
}
