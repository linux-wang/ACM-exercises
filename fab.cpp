#include"header_file.h"
using namespace std;

int fab(int n)
{
	if(n==0)
		return 7;
	else
	{
		if(n==1)
			return 11;
		else
		{
			return fab(n-1)+fab(n-2);
		}
	}
}

void three(int n)
{
	if(n%3==0)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}

int main(void)
{
	int n;
	//cout<<fab(2)<<" "<<fab(3)<<" "<<fab(1)<<endl;
	cin>>n;
	
	while(n!=-1)
	{
		three(fab(n));
		cin>>n;
	}
	
}

