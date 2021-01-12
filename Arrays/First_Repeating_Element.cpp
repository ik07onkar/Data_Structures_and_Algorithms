#include<bits/stdc++.h>
using namespace std;

int First_repeating(int a[],int n)
{
    int Max = INT_MIN;
    for(int i=0;i<n;i++)
        Max = max(a[i],Max);
    int h[Max+1] = {0};
    for(int i=0;i<n;i++)
        h[a[i]]++;
    for(int i=0;i<n;i++)
        if(h[a[i]] > 1)
            return i+1;
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Index = "<<First_repeating(a,n);
    return 0;
}
