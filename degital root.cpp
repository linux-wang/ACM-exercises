#include<iostream>
#include<vector>

using namespace std;

vector<int> hi(int n)
{
	vector<int> v;
	
	while(n)
	{
		v.push_back(n%10);
		n=n/10;
	}
	
	//v.push_back(n);
	return v;
}

int digital_root(int n,int m)
{
	vector<int> v;
	v=hi(m);
	int s;
	s=0;
	for(int i=0;i<v.size();i++)
	{
		s=s+v[i];
	}
	if(s<10)
	{
		/*
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		*/
		cout<<s<<endl;
	}
	else
	{
		digital_root(n,s);
	}
}

int main(void)
{
	//vector<int> v;
	//v=hi(1234);
	
	int a;
	cout<<"input a:";
	cin>>a;
	digital_root(a,a);
	
	/*
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	*/
	cout<<endl; 
	//cout<<v[0];
}
