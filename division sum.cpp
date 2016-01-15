#include"header_file.h"
using namespace std;

int div_sum(int n)
{
	int sum;
	if(n==1)
		sum=0;
	else
	{
		for(int i=n-1;i>0;i--)
		{
			if(n%i==0)
				sum=sum+i;
		}
	}
	
	return sum;
}

int main(void)
{
	int n;
	cout<<"inpu n:";
	cin>>n;
	
	cout<<div_sum(n)<<endl;
}
