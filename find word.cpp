
#include"string"
#include<iostream>
#include<vector>
#include<string.h>
#include<typeinfo>

using namespace std;

int count_word(string s1, string s2)
{

	int j = 0;
	int s = 0;
	int t;

	if (s1.size()<s2.size())
		s = 0;
	else
	{
		for (int i = 0; i <= (s1.size() - s2.size()); i++)
		{
			t = i;
			for (j = 0; j<s2.size();)
			{

				if (s1[t] == s2[j])
				{

					t++;
					j++;
					if (j == s2.size())
					{
						s++;
					}
				}
				else
				{
					break;
				}

			}

		}
	}
	//	cout<<s<<endl;
	return s;
}

int  find_max(vector<int> v)
{
	int t;
	t=0;
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v.size();j++)
		{
			if(v[i]<=v[j])
				t=j;
		}
	}
	return t;
}

int main(void)
{

	vector<string> v1;
	vector<string> v2;
	vector<int> v3;


	int M, N;
	cout << "input M,N:";
	cin >> M >> N;
	cin.get();

	while (M)
	{
		string s;
		//	cout<<"M="<<M<<endl;
		getline(cin, s);
		v1.push_back(s);
		M--;
	}
	while (N)
	{
		string s;
		//	cout<<"N="<<N<<endl;
		getline(cin, s);
		v2.push_back(s);
		N--;
	}

//	cout << "output v1 and v2:" << endl;
//	for (int i = 0; i<v1.size(); i++)
//		cout << v1[i] << " ";
//	for (int i = 0; i<v2.size(); i++)
//		cout << v2[i] << " ";

//	cout << endl;
	cout << "***********************************************" << endl;
//	cout << count_word(v2[0], v1[0]) << endl;
//	cout << v1.size() << " " << v2.size() << endl;
	
	
	
	for (int i = 0; i<v2.size(); i++)
	{
		int s = 0;
		for (int j = 0; j<v1.size(); j++)
		{
	//		cout << "test" << endl;
			int m;
			m = count_word(v2[i], v1[j]);
			s = s + m;
		//	cout << s << endl;
		}
		v3.push_back(s);
	}

	int max;
	vector<int> v4;
	max=find_max(v3);
	for(int i=0;i<v3.size();i++)
	{
		if(v3[max]==v3[i])
			v4.push_back(i);
	}
	for(int i=0;i<v4.size();i++)
	{
		cout<<v2[i]<<" ";
	}
//	cout<<v2[max];

}
