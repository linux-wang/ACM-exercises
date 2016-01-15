#include"header_file.h"
using namespace std;

int vec_max(vector<int> v)
{
	int t;
	t=0;
	for(int i=1;i<v.size();i++)
	{
		if(v[t]<v[i])
		{
			t=i;
		}
	}
	return v[t];
}

int get_max(vector<int> v)
{
	vector<int> v1;
	if(v.size()==1)
		return 1;
	else
	{
		if(v.size()==2)
		{
			if(v[1]>v[0])
				return 2;
			else
				return 1;
		}
		else
		{
			for(int i=0;i<(v.size()-2);i++)
			{
				for(int j=i+1;j<(v.size()-1);j++)
				{	int t;
					t=1;
					
					if(v[j]>v[i])
					{
						t++;
						int k;
						k=j+1;
						for(;k<v.size();)
						{
							
							if((v[k]>v[j])&&(v[k]>v[k-1]))
							{
								t++;
								k++;
							}	
						}	
						if(k==v.size())
						{
							v1.push_back(t);
							break;
						}	//v1.push_back(t);	
					}
				
				}
			}
			
			vec_max(v1);
		}
	}
}

int main(void)
{
	vector<int> v;
	v.push_back(2);
	v.push_back(1);
	v.push_back(3);
	cout<<get_max(v);
	
}
