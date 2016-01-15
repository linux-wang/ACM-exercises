#include <iostream>
#include <fstream>
#include<stdlib.h>
#define MAXNUM 200
int Isood(int n);

using namespace std;


int main(void)
{
	int *p=new int;
	
	int a=3;
	p=&a;
	cout<<*p<<endl;
	delete p;
//	cout<<*p;
	int *q=new int [3];
	q[0]=0;
	q[1]=1;
	*(q+2)=3;
	cout<<q[0]<<endl;
	cout<<*(q+2);
	delete [] q;
}
