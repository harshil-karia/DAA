#include<iostream>
#include<time.h>
#include<vector>
using namespace std;

int knap(int W,int wt[], int val[], int n)
{
     int i,w;
     vector<vector<int>> K(n+1,vector<int>(W+1));

     for(i=0;i<=n;i++)
     {
         for(w=0;w<=W;w++)
         {
             if(i==0 || w==0)
             {
                K[i][w]=0;
             }
             else if(wt[i-1]<=w)
             {
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
             }
             else
             {
                 K[i][w]=K[i-1][w];
             }
         }
     }
     cout<<n<<endl;
     cout<<W<<endl;
     return K[n][W];
}

int main()
{
    int profit[] = {60,100,120};
    int weight[] = {10,20,30};
    int W=50;
    int n=3;
    cout<<knap(W,weight,profit,n)<<endl;
    return 0;
}