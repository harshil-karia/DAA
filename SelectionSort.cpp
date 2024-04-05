 #include<bits/stdc++.h>
 using namespace std;
 void selectionsort(int a[],int n)
 {
    int i=0,j=0,temp;
    for(i =0;i<n-1;i++)
    {
        temp =i;
        for(j=i +1 ;j<n;j++)
        {
            if(a[temp]>a[j])
            {
                temp = j;
            }
        }
        if(temp !=i)
        {
            swap(a[temp],a[i]);
        }
    }
}
int main()
{
    int n=5;
    int arr[n]={4,6,1,7,2};
    
    selectionsort(arr,n);
    
    for(int j =0;j<n;j++)
    {
        cout<<arr[j];
        cout<<" ";
    }
}