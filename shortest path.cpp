#include"header_file.h"
using namespace std;

int get_max(vector<int> v)
{
	int max;
	max=v[0];
	for(int i=0;i<v.size();i++)
	{
		if(max<v[i])
		{
			max=v[i];
		}
	}
	return max;
}

int get_min(vector<int> v)
{
	int min;
	min=v[0];
	for(int i=0;i<v.size();i++)
	{
		if(min>v[i])
		{
			min=v[i];
		}
	}
	return min;
}

int get_sum(vector<int> vx,vector<int> vy,int x,int y)
{
	int sum=0;
	for(int i=0;i<vx.size();i++)
	{
		if((x-vx[i])>=0)
		{
			sum=sum+x-vx[i];
		}
		else
		{
			sum=sum+vx[i]-x;
		}
	}
	for(int i=0;i<vy.size();i++)
	{
		if((y-vy[i])>=0)
		{
			sum=sum+y-vy[i];
		}
		else
		{
			sum=sum+vy[i]-y;
		}
	}
	return sum;
}

int get_short_path(vector<int> vx,vector<int> vy,int m)
{
	int vx_max,vx_min;
	int vy_max,vy_min;
	vx_max=get_max(vx);
	vx_min=get_min(vx);
	vy_max=get_max(vy);
	vy_min=get_min(vy);
	
	vector<int> v;
	for(int i=vx_min;i<=vx_max;i++)
	{
		for(int j=vy_min;j<=vy_max;j++)
		{
			int sum;
			sum=get_sum(vx,vy,i,j);
			v.push_back(sum);
		}
	}
	
	return get_min(v);
}

int main(void)
{
	int m;
	cout<<"input m:";
	cin>>m;
	
	vector<int> vx,vy;
	
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		vx.push_back(x);
		vy.push_back(y);
	}
	
	cout<<get_short_path(vx,vy,m);
}
