#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

vector<int> beautiful_numbers(int i,int j)
{
	vector<int> v;
	for(int m=i;m<j;m++)
	{
		if((m%3==0)||(m%5==0))
		{
			v.push_back(m);
		}
	}
	return v;
	
}

int main(void)
{
	int i;
	int j;
	vector<int> v;
	
	i=1;j=100000;
	int n;

	v=beautiful_numbers(i,j);
	
	cin>>n;
	while(n!=0)
	{
	
	for(int m=0;m<v.size();m++)
	{
		if(n==v[m])
		{
			cout<<m+1<<endl;
		}
		
	}
	cin>>n;
	}
}
