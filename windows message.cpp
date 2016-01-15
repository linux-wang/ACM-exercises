#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

struct message
{
	string name;
	int num;
	int rand;
	int time;
};

bool mycomp(const struct message &m1,const struct message &m2)
{
	if(m1.rand!=m2.rand)
		return m1.rand>m2.rand;
	else
		return m1.time>m2.time;
}

int main(void)
{
	queue<struct message> q;
	struct message m;
	string order;
	cout<<"input your order:";
	
	while(1)
	{
		cin>>order;
		if(strcmp(order,"PUT"))
		{
			cin>>m.name>>m.num>>m.rand>>m.time;
			q.push(m);
			sort(q.front(),q.back(),mycomp);
		}
		else
		{
			if(!q.empty())
				q.pop();
			else
				cout<<"EMPTY QUEUE"<<endl;
		}
	}
	
//	q.push()
	
}
