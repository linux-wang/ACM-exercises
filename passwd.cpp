#include"stdafx.h"
#include<vector>
#include<iostream>
#include<string>

using namespace std;

int main(void)
{


	while (1)
	{
		string s;
		vector<char> v1;
		vector<int> v2;

		cout << "input s:";
		cin >> s;

		for (int i = 0; i<s.size(); i++)
		{
			v1.push_back(s[i]);
		}

		//	cout<<"******************************************"<<endl;
		//	for(int i=0;i<v1.size();i++)
		//		cout<<v1[i]<<" ";
		//	cout<<endl;
		//	cout<<"******************************************"<<endl;



		if (v1.size() == 1)
		{

			if (v1[0] != 'a'&&v1[0] != 'e'&&v1[0] != 'i'&&v1[0] != 'o'&&v1[0] != 'u')
				cout << s << " is not acceptable" << endl;
			else
				cout << s << " is acceptable" << endl;
		}
		if (v1.size() == 2)
		{
			int i = 0;
			for (; i<v1.size();)
			{
				if (v1[i] != 'a'&&v1[i] != 'e'&&v1[i] != 'i'&&v1[i] != 'o'&&v1[i] != 'u')
					i++;
				else
					break;
			}
			if (i == 2)
				cout << s << " is not acceptable" << endl;
			else
			{
				if (v1[0] == v1[1] && v1[0] != 'e'&&v1[0] != 'o')
					cout << s << " is not acceptable" << endl;
				else
					cout << s << " is acceptable" << endl;
			}

		}
		if (v1.size()>2)
		{

			int i = 0;
			for (; i<v1.size();)
			{
				if (v1[i] != 'a'&&v1[i] != 'e'&&v1[i] != 'i'&&v1[i] != 'o'&&v1[i] != 'u')
					i++;
				else
					break;
			}
			if (i == v1.size())
				cout << s << " is not acceptable" << endl;
			else
			{
				for (i = 0; i<v1.size(); i++)
				{
					if (v1[i] == 'a' || v1[i] == 'e' || v1[i] == 'i' || v1[i] == 'o' || v1[i] == 'u')
						v2.push_back(1);
					else
						v2.push_back(0);
				}

			//	cout << "******************************************" << endl;
			//	for (int i = 0; i<v1.size(); i++)
			//		cout << v2[i] << " ";
			//	cout << endl;
			//	cout << "******************************************" << endl;

				for (i = 0; i<(v2.size()-2);)
				{
					if (v2[i] == v2[i + 1] && v2[i + 1] == v2[i + 2])
					{
						cout << s << " is not acceptable" << endl;
						break;
					}
					else
					{
						i++;
					}

				}
				if (i ==( v1.size() - 2))
				{
					for (i = 0; i<(v1.size() - 1);)
					{
						if (v1[i] == v1[i + 1] && v1[i] != 'e'&&v1[i] != 'o')
						{
							cout << s << " is not acceptable" << endl;
							break;
						}
						else
							i++;
					}
					if (i = (v1.size() - 1))
						cout << s << " is acceptable" << endl;
				}

			}


		}

		//for(int i=0;i<v1.size();i++)
		//	cout<<v1[i]<<" ";
	}
	//for(int i=0;)

}
