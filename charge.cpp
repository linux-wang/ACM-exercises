#include"header_file.h"
using namespace std;

int main(void)
{
	int n;
	cout<<"input n:";
	cin>>n;
//	cout<<endl;
	
	int a[4];
	for(int i=0;i<4;i++)
	{
		a[i]=0;
	}
	
	while(n!=0)
	{
		if(n>=50)
		{
			a[0]=a[0]+1;
			n=n-50;
		}
		else
		{
			if(n>=25)
			{
				a[1]=a[1]+1;
				n=n-25;
			}
			else
			{
				if(n>=10)
				{
					a[2]++;
					n=n-10;
				}
				else
				{
					a[3]=n;
					n=n-n;
				}
			}
		}
	}
	
	for(int i=0;i<4;i++)
	{
		cout<<a[i]<<" ";
	}
}
