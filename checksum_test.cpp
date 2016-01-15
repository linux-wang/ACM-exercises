#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(int argc,char* argv[])
{
	char a[10];
	cin.getline(a,10);
	int sum=0;
	
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
		sum+=a[i]*i;
	}
	cout<<endl;
	cout<<sum<<endl;
	
	
	
	return 0;
}
