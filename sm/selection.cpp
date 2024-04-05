#include<iostream>
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
	//int arr[] = {2,5,7,1,90,3,4};
	clock_t time_req;
	time_req=clock();
	int n=100;
	int a[n];
	for(int u=0;u<n;u++)
	{
		a[u]=rand()%n;
	}
	int min=0;	
	for(int i=0;i<n;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				{min=j;}
		}
		if(min!=i)
		{
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	print_array(a, n);
	time_req=clock()-time_req;
	cout<<(float)time_req/CLOCKS_PER_SEC<<endl;
}
