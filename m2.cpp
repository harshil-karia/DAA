#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int LB,int mid,int UB){
    int i=LB,j=mid+1;
    int temp[UB-LB+1];
    int k=1;
    while (i<=mid&&j<=UB)
    {
        if(a[i]<a[j]){
            temp[k]=a[i];
            i++;
        }
        else{
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
            temp[k]=a[i];
            i++,k++;
    }
    while(j<=UB){
            temp[k]=a[j];
            j++,k++;
    }
    for(int i=0;i<=UB;i++){
        a[i]=temp[i];
    }
    
}

void mergeSort(int a[],int LB,int UB){
    if(LB>=UB){
        return;
    }
    int mid = (LB+UB)/2;
    mergeSort(a,LB,mid);
    mergeSort(a,mid+1,UB);
    merge(a,LB,mid,UB);
}

int main(){
    int a[5]={2,1,5,4,3};
    mergeSort(a,0,4);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}