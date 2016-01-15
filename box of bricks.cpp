#include<iostream>
#include<vector>

using namespace std;

int main(int argc,char* argv[])
{
	int n;
	cout<<"input n:";
	cin>>n;
	int s;
	
	vector<int> v;

	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		s=s+a;
		v.push_back(a);
	}
	
	if((s%n)==0)
	{
		int m;
		m=s/n;
		int p;
		p=0;
		for(int i=0;i<v.size();i++)
		{
			if(v[i]>m)
			{
				int t;
				t=v[i]-m;
				p=p+t;
						
			}
			
		}
		cout<<p;
		
	}
	else
	{
		cout<<"wrong input"<<endl;
	}
	
}
