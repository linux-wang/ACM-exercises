#include<iostream>
#include<vector>
#include<string>

#define maxline 255
using namespace std;

int main(void)
{
	vector<string> v;
	char c[maxline];
	
	/*
	cin.getline(c,255);
	
	v.push_back(c);
	cout<<v[0][0];
	*/
	string s1,s2,s3;
	s1="213";
	s2="312";
	s3="123";
	
	cout<<s1.compare(s2)<<endl;
	
	cout<<s1.compare(s3);
	
}
