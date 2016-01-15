#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;



int main(void)
{
	vector<string> v;
	string s;
	getline(cin,s);
	v.push_back(s);
	int n=0;
	
	for(int i=0;i<v[0].size();i++)
	{
		for(int j=i;j<v[0].size();j++)
		{
			if(v[0][i]>v[0][j])
				n++;
		}
	}
	
	cout<<n<<endl;
}
	
 
