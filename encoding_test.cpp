#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int find_x(vector<char> v,char x)
{
	vector<char>::iterator it=v.begin();
	for(;it!=v.end();)
	{
		if((*it)==x)
		{
			return 1;
			break;
		}
		else
		{
			it++;
		}	
	}
	if(it==v.end())
		return 0;
}

int main(void)
{
	string s;
	s="aaabbbbccccdddefffeeee";
	//cout<<s;
	//cout<<count(s.begin(),s.end(),'1');
	
	vector<char> v;
	for(string::iterator it=s.begin();it!=s.end();it++)
	{
		if(v.empty())
			v.push_back(*it);
		else
		{
			if(find_x(v,(*it)))
				;
			else
			{
				v.push_back(*it);
			}
		}
	}
	for(vector<char>::iterator it=v.begin();it!=v.end();it++)
	{
		cout<<count(s.begin(),s.end(),(*it))<<(*it);
	}
	
	//use for test
/*	vector<char> v;
	v.push_back('a');
	v.push_back('b');
	cout<<find_x(v,'c')<<endl;
*/

	

}
