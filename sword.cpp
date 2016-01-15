// ConsoleApplication1.cpp : ??????????????
//


#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cout << "input n:";
	cin >> n;
	//cout << endl;
	//	while(n!=0)
	//	{
	int s;
	
	
	while (n != 0)
	{
		s = 0;
		while (n != 1)
		{
			if (n % 3 == 0)
			{
				s = s + n / 3;
				n = n / 3;
			}
			else
			{
				if (n % 3 == 1)
				{
					s = s + n / 3 ;
					n = n / 3 + 1;
				}
				else
				{
					s = s + n / 3 + 1;
					n = n / 3 + 1;
				}
				
			}
		}
		cout << s << endl;
		cout << "input n:";
		cin >> n;
	}
}

