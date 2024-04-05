#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int a[],int n)
{
    int i =0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i] < a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
}
int main()
{
    int n=10;
    int arr[n]={2,5,3,6,7,2,1,6,9,0};
    BubbleSort(arr,n);
    for(int j =0;j<n;j++)
    {
        cout<<arr[j];
        cout<<" ";
    }
}