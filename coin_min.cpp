#include"header_file.h"
using namespace std;

int coin_num(vector<int> T,int i,int j)
{
	if(i==1)
	{
		if(j%T[0]==0)
		{
			return j/T[0];
		}
		else
		{
			return 9999;
		}
	}
	else
	{
		int min;
		min=coin_num(T,i-1,j);
		int temp;
		temp=j/T[i-1];
		for(int m=0;m<=temp;m++)
		{
			if(min>(m+coin_num(T,i-1,j-m*T[i-1])))
				min=m+coin_num(T,i-1,j-m*T[i-1]);
			
		}
		return min;
	}
}

vector<int> all_num(vector<int> T,int j)
{
	vector<int> v;
	for(int i=0;i<T.size();i++)
		v.push_back(coin_num(T,i+1,j));
//	for(int i=0;i<T.size();i++)    //use for test
//		cout<<v[i]<<" ";
		//v.push_back(coin_num(T,i+1,j));
	return v;
}

int find_min(vector<int> v)
{
	int min=0;
	for(int i=1;i<v.size();i++)
	{
		if(v[min]>v[i])
			min=i;
	}
	return v[min];
}

int main(void)
{
	int n;
	cout<<"input n:";
	cin>>n;
	
	vector<int> T;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		T.push_back(temp);
	}
	
	int j;
	cout<<"input j:";
	cin>>j;
	
	vector<int> v;
	v=all_num(T,j);
	int min;
	min=find_min(v);
	cout<<"min:"<<min<<endl;
}
