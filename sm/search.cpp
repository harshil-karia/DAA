#include <iostream>
#include <array>

using namespace std;

int linear_search(int arr[], int n, int size)
{

	for (int i = 0; i < size; i++)
	{
		//cout<<arr[i]<<endl;
		if (arr[i] == n)
		{
			return i;
		}
	}
	return -1;
}

int binary_search(int arr[], int n, int size)
{
	int start = 0;
	int end = size;
	int mid;

	while (start < end)
	{
		mid = (start + end) / 2;
		if (arr[mid] == n)
		{
			return mid;
		}
		else if (arr[mid] > n)
		{
			end = mid;
		}
		else if (arr[mid] < n)
		{
			start = mid + 1;
		}
	}
	if (arr[mid] == n)
	{
		return mid;
	}
	return -1;
}

int linear_search_recursive(int arr[], int n, int size)
{
	if (size == 0)
	{
		return -1;
	}
	if (arr[size - 1] == n)
	{
		return size - 1;
	}
	linear_search_recursive(arr, n, size - 1);
}

int binary_search_recursive(int arr[], int n, int start, int end)
{
	if (start >= end)
	{
		return -1;
	}
	int mid = (start + end) / 2;
	if (arr[mid] == n)
	{
		return mid;
	}
	else if (arr[mid] > n)
	{
		binary_search_recursive(arr, n, start, mid);
	}
	else if (arr[mid] < n)
	{
		binary_search_recursive(arr, n, mid + 1, end);
	}
}

int main()
{
	int arr[10000];
	for (int i = 0; i < 10000; i++)
	{
		arr[i] = i;
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
	int n = 9999;
	int size = 10000;
	int ans;
	ans = linear_search(arr, n, size);
	ans = binary_search(arr, n, size);
	//ans = linear_search_recursive(arr,n,size);
	//ans = binary_search_recursive(arr,n,0,size-1);
	cout << ans << endl;
