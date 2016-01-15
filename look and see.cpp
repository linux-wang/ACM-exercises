#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void)
{
	string s;
	s="123233334556789777777";
	// cout<<s<<endl;
	
	vector<char> v1;
	vector<int> v2;
	int i=0;
	
	for(string::iterator it=s.begin();it!=s.end();)
	{
		if(it==s.begin())
		{
			v1.push_back(*it);
			i=0;
			v2.push_back(1);
			it++;
		}
		else
		{
			if((*it)==v1[i])
			{
				v2[i]=v2[i]+1;
				it++;
			}
			else
			{
				v1.push_back(*it);
				v2.push_back(1);
				i++;
				it++;
			}
		}
		
		
	}
	
	for(int i=0;i<v1.size();i++)
	{
		cout<<v2[i]<<v1[i]<<endl;
	}
	
	
}
