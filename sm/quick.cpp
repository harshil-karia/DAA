#include<iostream>
#include<time.h>
using namespace std;

void print_array(int arr[],int n)
{
	cout<<"----------array------------"<<endl;	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}

int partition(int arr[], int start, int end)
{
	int pivot=arr[end];
	int j=start-1;

	for(int i=start;i<=end;i++)
	{
		if(arr[i]<pivot)
			{swap(arr[++j], arr[i]);}	
	}
	swap(arr[j+1],arr[end]);
	return j+1;
}

void quicksort(int arr[], int start, int end)
{
	if(start<end)
	{
		int p = partition(arr, start, end);
		quicksort(arr, start, p-1);
		quicksort(arr, p+1, end);
	}
}


int main()
{
	//int a[]={10,23,18,34,56,11,2,90,45,78,};
	clock_t time_req;
	time_req=clock();
	int n=10;
	int a[n];
	for(int u=0;u<n;u++)
	{
		a[u]=rand()%n;
	}

	print_array(a,n);

	quicksort(a,0,n-1);
	
	print_array(a,n);
	time_req=clock()-time_req;
	cout<<(float)time_req/CLOCKS_PER_SEC<<endl;
}



























