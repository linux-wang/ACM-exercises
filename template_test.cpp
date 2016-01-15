#include<iostream>

using namespace std;

template<typename T>
T mymax(T a,T b)
{
	if(a>b)
		return a;
	else
		return b;
}

class student
{
	private:
		int num;
	public:
		void get_num(int a)
		{
			num=a;
		}
		void print_num()
		{
			cout<<num<<endl;
		}
};

int main(void)
{
	student stu_a;
	stu_a.get_num(1);
	stu_a.print_num();
}
