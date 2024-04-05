#include<iostream>
#include<array>

using namespace std;

int linear_search(int arr[],int n,int size)
{
		
	for(int i=0;i<size;i++)
	{
		//cout<<arr[i]<<endl;
		if(arr[i]==n)
			{return i;}
	}
	return -1;
}


int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int n=9;
	int size=10;
	int ans= linear_search(arr,n,size);	
	cout<<ans<<endl;
}

