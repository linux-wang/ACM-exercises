#include<iostream>
#include<math.h>


using namespace std;

int main(int argc,char* argv[])
{
	while(1)
	{
	
	int B,N;
	cout<<"input B and N:";
	cin>>B>>N;
	cout<<endl;
	
	int A;
	int t;
	
	
	for(int i=1;;)
	{
		A=i;
		t=pow(A,N);
		
		if((t<=B)&&((pow(A+1,N))>=B))
		{
			if((B-t)>=(pow(A+1,N)-B))
			{
				cout<<(A+1)<<endl;
				break;
			}
			else
			
			{
				cout<<(A)<<endl;
				break;
			}
		}
		else
			i++;
	}
	
	
}
}
