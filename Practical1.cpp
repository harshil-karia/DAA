#include<bits/stdc++.h>
using namespace std;
double fibb(double n)
{
    if((n==1) || (n==0))
    {
        return n;
    }
    else{
        return(fibb(n-1) + fibb(n-2));
    }
}
int main()
{
    clock_t start,end;
    start = clock();
    fibb(40);
    end = clock();
    double t1 = double(end-start);
    cout<<t1;
    return 0;
}