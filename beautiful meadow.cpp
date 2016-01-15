#include<iostream>
#include<string>
#include<vector>
#define MAX 10
using namespace std;


int alp_to_num(char a)
{
	if(a=='0')
		return 0;
	else
		return 1;
}

int main(int argc,char *argv[])
{
	vector<string> v;
	//string s;
	
	
	char c[MAX];
	
	int N,M;
	cout<<"input N and M:";
	cin>>N>>M;
	cin.get();
	//cout<<N<<" "<<M<<endl;
	for(int i=0;i<N;i++)
	{
		string s;
		getline(cin,s);
		v.push_back(s);
	//	s="";
	}
	
	int sum;
	sum=0;
	
	for(int i=0;i<v.size();i++)
	{
		
		for(int j=0;j<M;j++)
		{
		//	cout<<v[i][j]<<" ";
			sum=sum+alp_to_num(v[i][j]);
		//	cout<<sum<<endl;
		}
	}
 	cout<<sum<<endl;
	
	if(sum==N*M)
	{
		cout<<"not beautiful"<<endl;
	}
	else
	{
		for(int i=0,j=0;i<v.size();)
	{
		
		for(;j<M;)
		{
		//	sum=sum+v[i][j];
		if(v[i][j]==0)
		{
		//考虑的也真是。。。。。。。。。醉了 
			}
		}
		}
		if((i==(N-1))&&j==(M-1))
	{
		cout<<"b"<<endl;
	}
		
	}
	}
	
}
