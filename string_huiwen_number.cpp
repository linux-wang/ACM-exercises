#include<string>
#include<iostream>
#include<vector>

using namespace std;

int huiwen(char a[],int i,int j)
{
	if(i==j)
		return 1;
	else
	{
		int m=i;int n=j;
		for(;m<=n;)
		{
			if(a[m]==a[n])
			{
				m++;
				n--;
			}
			else
			{
				return 0;
				break;
			}
		}
		if(m>n)
			return 1;
	}
}

int main(void)
{
	char a[6]={'1','2','3','2','1','1'};
	cout<<huiwen(a,0,4)<<endl;
	
	int s=0;
	for(int i=0;i<6;i++)
		for(int j=i;j<6;j++)
		{
			if(huiwen(a,i,j))
				s++;
			
		}
	
	cout<<s<<endl;
}
