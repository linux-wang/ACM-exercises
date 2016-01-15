#include"header_file.h"

using namespace std;

int main(void)
{
	int N;
	int x,y,z;
	
	cout<<"input N:";
	cin>>N;
	
	cout<<"input x,y,z:";
	cin>>x>>y>>z;
	
	int s0;
	s0=x*1000+y*100+z*10;
	
	vector<int> v;
	int i=9;
	int s;
	for(;i>0;i--)
	{
		for(int j=9;j>=0;j--)
		{
			s=s0+i*10000+j;
			if(s%N==0)
			{
				v.push_back(s);
				
			}
		}
	}
	if(v.size()==0)
		cout<<"no"<<endl;
	else
	{
		cout<<v[0]/10000<<" "<<v[0]%10000%1000%100%10<<" "<<v[0]/N<<endl;
	}
}
