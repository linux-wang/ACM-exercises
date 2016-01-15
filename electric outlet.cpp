#include"header_file.h"
using namespace std;

int main(void)
{
	int n;
	cout<<"input n:";
	cin>>n;
	
	vector<int> v;
	int o;
	int s;
	s=0;
	for(int i=0;i<n;i++)
	{
		cin>>o;
		s=s+o;
	}
	s=s-(n-1);
	cout<<s;
}
