#include<bits/stdc++.h>
using namespace std;

int valid_pair_sum(int a[],int n)
{
    sort(a,a+n);
    int cnt = 0;

    int start = 0,last = n-1;
    while(start < last)
    {
        if(a[start] + a[last] > 0)
        {
            cnt += last-start;
            last--;
        }
        else
            start++;
    }
    return cnt;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        cout<<valid_pair_sum(a,n)<<"\n";
    }
}

