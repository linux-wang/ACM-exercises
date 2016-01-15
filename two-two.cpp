#include<iostream>

using namespace std;

int two_two(int N)
{
	int i=0;
	while(N!=1)
	{
	
		if((N%2)==1)
		{
			N=N/2+1;
			i++;
		}
		else
		{
			N=N/2;
			i++;
		}
	}
	return i;
}

int main(void)
{
	int N;
	cout<<"input N:";
	cin>>N;
	while(N!=0)
	{
		cout<<two_two(N)<<" ";
		cout<<endl;
		cout<<"input N:";
		cin>>N;
	}
}
