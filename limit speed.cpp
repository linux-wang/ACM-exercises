#include"header_file.h"
using namespace std;

int main(void)
{
	int n;
	cout<<"input n:";
	cin>>n;
	
	while(n!=-1)
	{
		int speed,time;
		vector<int> s,t;
		cout<<"input speed and time:"<<endl;
		
		for(int i=0;i<n;i++)
		{
			cin>>speed>>time;
			s.push_back(speed);
			t.push_back(time);
		}
		
		int sum;
		sum=0;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				sum=sum+s[i]*t[i];
			}
			else
			{
				sum=sum+s[i]*(t[i]-t[i-1]);
			}
		}
		
		cout<<"sum is "<<sum<<endl;
		cout<<"input n:";
		cin>>n;
	}

}
