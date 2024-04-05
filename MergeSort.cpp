#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int begin,int mid,int end)
{
    int i,j,k;
    int n1 = mid - begin + 1;
    int n2 = end - mid;

    int leftArray[n1],rightArray[n2];

    for(int i =0;i<n1;i++)
    {
        leftArray[i] = a[begin+i];
    }
    for(int j=0;j<n2;j++)
    {
        rightArray[j] = a[mid+j+1];
    }

    i=j=0;
    k = begin;

    while(i<n1 && j<n2)
    {
        if(leftArray[i]<=rightArray[j])
        {
            a[k] = leftArray[i];
            i++;
        }
        else
        {
            a[k] = rightArray[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k] = leftArray[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        a[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int a[],int begin,int end)
{
    if(begin<end)
    {
        int mid = (begin+end)/2;
        mergeSort(a,begin,mid);
        mergeSort(a,mid+1,end);
        merge(a,begin,mid,end);
    }
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int n=5;
    int arr[n]={3,5,1,2,8};
    mergeSort(arr,0,n-1);
    cout<<endl;
    print(arr,n);
}