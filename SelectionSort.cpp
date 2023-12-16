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
     int n=10;
     int a[10];
     for(int i=10;i>=0;i--)
     {
        a[i] = i+1;
     }
    clock_t start,end;
    start = clock();
    selectionsort(a,n);
    end = clock();
    double time1 = double(end-start);
    cout<<"Time : "<<time1<<endl;
    for(int j =0;j<10;j++)
    {
         cout<<a[j];
         cout<<endl;
    }
    //cout<<"HEllo";
}