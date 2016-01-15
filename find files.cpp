#include"header_file.h"
#include<string.h>
using namespace std;



int main(void)
{
	vector<string> v;
	int N;
	cout<<"input N:";
	cin>>N;
	string s;
	
	while(N)
	{
		cin>>s;
		v.push_back(s);
		N--;
	}
	
	for(int i;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	
	
	cout<<"*********************************************"<<endl;
	
}
