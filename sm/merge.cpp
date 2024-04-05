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

void merge(int arr[], int start, int mid, int end)
{
	int subarrayone = mid-start+1;
	int subarraytwo = end-mid;

	int arrayone[subarrayone] = {};
	int arraytwo[subarraytwo] = {};
	
	for(int i=0;i<subarrayone;i++)
  		arrayone[i]=arr[start+i];	
	
	for(int i=0;i<subarraytwo;i++)
  		arraytwo[i]=arr[mid+i+1];	

	int indexofarrayone=0,indexofarraytwo=0;
	int indexofarraymain=start;
	
	while(indexofarrayone<subarrayone && indexofarraytwo<subarraytwo)
	{
		if(arrayone[indexofarrayone]<arraytwo[indexofarraytwo])
			arr[indexofarraymain++]=arrayone[indexofarrayone++];

		else if(arrayone[indexofarrayone]>arraytwo[indexofarraytwo])	
			arr[indexofarraymain++]=arraytwo[indexofarraytwo++];
	
		else
		{
			arr[indexofarraymain++]=arrayone[indexofarrayone++];
			arr[indexofarraymain++]=arraytwo[indexofarraytwo++];
		}

	}
	while(indexofarrayone<subarrayone)
		arr[indexofarraymain++]=arrayone[indexofarrayone++];
	while(indexofarraytwo<subarraytwo)
		arr[indexofarraymain++]=arraytwo[indexofarraytwo++];
}

void mergesort( int arr[],int start, int end)
{
	if(start>=end)
		return;

	int mid=start+((end-start))/2;
	mergesort(arr, start, mid);
	mergesort(arr, mid+1, end);
	merge(arr, start, mid, end);
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

	mergesort(a,0,n+1);

	print_array(a,n);
	time_req=clock()-time_req;
	cout<<(float)time_req/CLOCKS_PER_SEC<<endl;
}



























