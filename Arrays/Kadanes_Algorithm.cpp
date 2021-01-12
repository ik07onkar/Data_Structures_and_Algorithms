#include<bits/stdc++.h>
using namespace std;

int Max_sub_array(int a[],int n)
{
    int Max_sum=0,Max_ending_here=0;
    for(int i=0;i<n;i++)
    {
        Max_ending_here += a[i];
        if(Max_sum < Max_ending_here)
            Max_sum = Max_ending_here;
        if(Max_ending_here < 0)
            Max_ending_here = 0;
    }
    return Max_sum;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<Max_sub_array(a,n);
    return 0;
}

