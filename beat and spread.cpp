#include"header_file.h"
using namespace std;

int main(void)
{
	int a,b;
	int x,y;
	
	cout<<"input a b:";
	cin>>a>>b;
	
	if(a>=b)
	{
		x=(a+b)/2;
		y=(a-b)/2;
		cout<<x<<" "<<y<<endl;
	}
	else
	{
		cout<<"error"<<endl;
	}
}
