#include<vector>
#include<iostream>
#define MAXLINE 10

using namespace std;

int ou(int n)
{
	if((n%2)==0)
		return 1;
	else
		return 0;
}

int panduan(int a[MAXLINE][MAXLINE],int m)
{
	int s;
	s=0;
	for(int i=0;i<m;i++)
	{
		int sum;
		sum=0;
		for(int j=0;j<m;j++)
		{
			sum=sum+a[i][j];
		}
		if(ou(sum))
			s=s+0;
		else
		{
			//cout<<"no"<<endl;
			return 0;
			
		}
			//return 0;
	}
	for(int i=0;i<m;i++)
	{
		int sum=0;
		for(int j=0;j<m;j++)
		{
			sum=a[j][i]+sum;
		}
		if(ou(sum))
			s=s+0;
		else
		{
			//cout<<"no"<<endl;
			return 0;
		}
	}
	if(s==0)
	{
		//cout<<"yes"<<endl;
		return 1;
					
	}
}


int correct(int a[MAXLINE][MAXLINE],int m)
{
	int j=0;
	int i=0;
	for(;i<m;i++)
	{
		for(;j<m;)
		{
			if(a[i][j]==0)
			{
				a[i][j]=1;
				int n=panduan(a,m);
				if(n==1)
				{
					cout<<i<<" "<<j<<endl;
					goto gobreak;
				}
				else
					j++;
			}
			else
			{
				a[i][j]=0;
				int n=panduan(a,m);
				if(n==1)
				{
					cout<<i<<" "<<j<<endl;
					goto gobreak;
				}
				else
					j++;
			}
		}
		gobreak:
			break;
	}
	if((i==m)&&(j==m))
	{
		cout<<"no way"<<endl;
	}
}


int main(int argc,char* argv[])
{
	int a[MAXLINE][MAXLINE];
	int n;
	cout<<"input n:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			
		}
	}
	
	if(panduan(a,n))
		cout<<"right"<<endl;
	else
	{
		cout<<"wrong"<<endl;
		correct(a,n);
	}
}
