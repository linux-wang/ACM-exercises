#include"header_file.h"
using namespace std;

void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
}

void quick_sort(int a[],int low,int high)
{
	
	if(low>=high)
		return;
		
	int first;
	int last;
	first=low;
	last=high;
	
	int x;
	x=a[low];
	

	while(low<high)
	{
		while(low<high&&a[high]>=x)
		{
			high--;
		}	
		a[low]=a[high];
		
	//	cout<<i<<"      "<<low<<" low"<<"  "<<high<<endl;
		
		while(low<high&&a[low]<=x)
		{
			low++;
		}
		a[high]=a[low];
	//	swap(a[high],a[low]);
	//	cout<<i<<"      "<<low<<" high"<<"  "<<high<<endl;
	}
	a[low]=x;
	
	if(first<low-1)
		quick_sort(a,first,low-1);
	if(last>low+1)
		quick_sort(a,low+1,last);
}

int main(void)
{
	int a[7]={4,3,6,7,2,1,5};
	quick_sort(a,0, sizeof(a) / sizeof(a[0]) - 1);
	
//	cout<<"test"<<endl;
	for(int i=0;i<7;i++)
		cout<<a[i]<<" ";
}
