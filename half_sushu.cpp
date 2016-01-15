#include<map>
#include<iostream>
#include<cmath>

using namespace std;

int sushu(int n)
{
	if(n==1)
		return 0;
	else
	{
		if(n==2)
			return 1;
		else
		{
			int i=2;
			for(;i<=(int)sqrt(n);i++)
			{
				if((n%i)==0)
				{
//					return 1;
					break;
				}
				
			}
			if(i>(int)sqrt(n))
				return 1;	
			else
				return 0;
		}
	}
	
}

int main(void)
{
	map<int,int> map_;
	//map_.insert(pair<int,int>(1,1));
	
	cout<<sushu(6)<<endl;
	int n;
	cin>>n;
	
	
	if(!sushu(n))
	{
		cout<<"no"<<endl;
	}
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
				map_.insert(pair<int,int>(i,n/i));
			
		}
	}
	for(map<int,int>::iterator it=map_.begin();it!=map_.end();it++)
	{
	//	cout<<it->first<<" "<<it->second<<endl;
		if(sushu(it->first)&&sushu(it->second))
		{
			cout<<it->first<<" "<<it->second<<endl;
		}
		
	}
}
