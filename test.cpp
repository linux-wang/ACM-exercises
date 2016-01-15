#include <iostream>
#include <fstream>
#include<stdlib.h>
#define MAXNUM 200
int Isood(int n);

using namespace std;


int main(void)
{
	int n;
	cout<<"input n:";
	cin>>n;
	
	int *p;
	p=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		p[i]=i;
	}
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	
	free(p);
}
