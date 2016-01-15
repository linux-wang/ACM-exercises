#include"header_file.h"
using namespace std;

int get_low(int n)
{
	vector<int> v;
	while(n)
	{
		v.push_back(n%2);
		n=n/2;
	}
	
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<v[i]<<endl;
//	}
	int t;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]!=0)
		{
		//	cout<<i;
			t=pow(2,i);
		//	cout<<t;
			break;
		}
	}
	return t;
}

int main(void)
{
	int N;
	cout<<"input N:";
	cin>>N;
	//cout<<pow(2,4)<<endl;
	cout<<get_low(N);
	//cout<<get_low(N)<<endl;
	
}
