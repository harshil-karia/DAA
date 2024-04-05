#include<bits/stdc++.h>
using namespace std;
int split(int arr[], int lb, int ub) {
    int pivot = arr[lb];
    int i = lb + 1;
    int j = ub;

    while (i <= j) {
        while (i <= j && arr[i] <= pivot) {
            i++;
        }

        while (i <= j && arr[j] > pivot) {
            j--;
        }

        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    int temp = arr[lb];
    arr[lb] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(int arr[],int lb,int ub){
    if(lb>ub){
        return;
    }
    else{
        int pos =split(arr,lb,ub);
        quickSort(arr,lb,pos-1);
        quickSort(arr,pos+1,ub);
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
    int arr[n];
    quickSort(arr,0,n-1);
    print(arr,n);
    
}