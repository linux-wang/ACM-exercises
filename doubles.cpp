#include"header_file.h"
using namespace std;

int doubles(vector<int> v)
{
	int s;
	s=0;
	for(int i=0;i<v.size();i++)
	{
		for(int j=i;j<v.size();j++)
		{
			if(((v[i]%v[j])==0)&&(v[i]/v[j]==2))
			{
				s=s+1;		
			}
			if(((v[j]%v[i])==0)&&(v[j]/v[i]==2))
			{
				s=s+1;
			}
		}
	}
	return s;
}

int main(void)
{
	int n;
	cin>>n;
	vector<int> v2;
	
	while(n!=-1)
	{
		vector<int> v1;
	
		
		while(n!=0)
		{
			v1.push_back(n);
			cin>>n;
		}
		
		v2.push_back(doubles(v1));
		
		for(int i=0;i<v1.size();i++)
		{
			v1[i]=0;
		}
		
		cin>>n;
		
	
		
	}
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<endl;
	}
	
}
