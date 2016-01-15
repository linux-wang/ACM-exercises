#include"header_file.h"
#define MAX 1000
using namespace std;

void find_t(int a[MAX][MAX],int m,int n,int t)
{		
	vector<int> v;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			v.push_back(a[i][j]);
		}
	}
	int i=0;
	for(;i<v.size();i++)
	{
		if(t==v[i])	
		{
			cout<<"yes"<<endl;
			break;
		}	
	}
	if(i==v.size())
	{
		cout<<"no"<<endl;
	}

}

int main(void)
{
	int m,n,t;
	//static int a[MAX][MAX];
	cin>>m>>n;
	cin>>t;
	int  (*p)[MAX] = new int[MAX][MAX]; 
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>p[i][j];
		}
	}
	//cout<<m<<n;
	
	
	find_t(p,m,n,t);
}
