#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> change(string s1)
{
	vector<int> v1;
	for (string::reverse_iterator it = s1.rbegin(); it != s1.rend(); it++)
	{
		switch (*it)
		{

		case 'a':
			v1.push_back(10);
			break;
		case 'b':
			v1.push_back(11);
			break;
		case '1':
			v1.push_back(1);
			break;
		case '2':
			v1.push_back(2);
			break;
		case '3':
			v1.push_back(3);
			break;
		}
	}

	//for (int i = v1.size(); i<100; i++)
	//{
	//	v1[i] = 0;
	//}
	return v1;
}

vector<int> add_20(vector<int> v1, vector<int> v2)
{
	int size1;
	int size2;
	size1 = v1.size();
	size2 = v2.size();

	int size;
	if (size1>size2)
		size = size1;
	else
		size = size2;

	vector<int> v;
	for (int i = 0; i<100; i++)
	{
		v.push_back(0);
	}

	for (int i = 0; i<size; i++)
	{
		if ((v1[i] + v2[i])<20)
			v[i] = v1[i] + v2[i];
		else
		{
			v[i] =  v[i]+v1[i] + v2[i] - 20;
			v[i + 1] =  v[i+1]+1;
		}
	}
	return v;
}

int main(int argc, char *argv[])
{
	string s1, s2;
	cout << "cin s1,s2:";
	getline(cin, s1);
	//cout << s1 << endl;
	getline(cin, s2);
	//cout << s2 << endl;


	/*
	for(string::reverse_iterator it=s1.rbegin();it!=s1.rend();it++)
	{
	cout<<(*it)<<endl;
	}
	*/


	vector<int> v1, v2;

	v1 = change(s1);
	v2 = change(s2);
	
	vector<int> sum;
	for (int i = 0; i < 100; i++)
	{
		sum.push_back(0);
	}
	sum = add_20(v1, v2);

	for (int i = sum.size()-1; i >= 0; i--)
	{
		if (sum[i] == 0)
			;
		else
		{
			cout << sum[i] << " ";
		}
		
	}
	/*

	for (int i = 0; i<v1.size(); i++)
	{
		cout << v1[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i<v1.size(); i++)
	{
		cout << v1[i]<<" ";
	}
	
	for(int i=0;i<v1.size();i++)
	{
	cout<<v1[i];
	}
	*/

}
