#include<iostream>
#include"header_file.h"
#include<fstream>
#include<stdlib.h>
#define MAXSIZE 200
using namespace std;

int str_cmp(string s1,string s2)
{
	string s21, s22;
	int s=0;
	int i = 0;
	for (; i<s2.size();)
	{
		//	cout<<i<<endl;
		if (s2[i] == '*')
			break;
		else
		{
			s21.push_back(s2[i]);
			//cout << s21[i] << endl;
			i++;
		}

	}
//	cout <<"s21.size=" <<s21.size() << endl;
	cout << s21 << endl;


	for (int j = i + 1, i = 0; j<s2.size(); j++)
	{
		s22.push_back(s2[j]);
	//	cout << s22[i];
	}
	cout << s22 << endl;
	
//	for (int m = 0; m<s22.size(); m++)
//	{
//		cout << s22[m] << " ";
//	}
	int m=0;
	for(;m<s21.size();)
	{
		if(s1[m]==s21[m])
			m++;
		else
		{
			s=0;
			break;
		}
			
	}
	if(m==s21.size())
		s=1;
	if(s==1)
	{
		int j;
		for(int n=s1.size()-1,j=s22.size()-1;j>-1;)
		{
			if(s1[n]==s22[j])
			{
				n--;
				j--;
			}
			else
			{
				s=0;
				break;
			}
			
		}
		if(j==-1)
		{
			s=1;
		}
	}
	return s;
}


int main(int argc,char *argv[])
{
	string s1="abc.xyz";
	string s2="a*c.xyzd";

//	cout<<s1<<endl;
	cout<<str_cmp(s1,s2);
	
}
