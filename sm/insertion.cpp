#include<iostream>
#include<time.h>
using namespace std;

void print_array(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{
	//int a[]={10,23,18,34,56,11,2,90,45,78,};
	clock_t time_req;
	time_req=clock();
	int n=1000000;
	int a[n];
	for(int u=0;u<n;u++)
	{
		a[u]=rand()%n;
	}

	int current;
	for(int i=1;i<n;i++)
	{
		int j=i-1;		
		current=a[i];		
		while(j>=0&&a[j]>current)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=current;
	}
	//print_array(a,n);
	time_req=clock()-time_req;
	cout<<(float)time_req/CLOCKS_PER_SEC<<endl;
}
