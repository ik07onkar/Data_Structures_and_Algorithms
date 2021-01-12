#include<bits/stdc++.h>
using namespace std;

void Sort(int a[],int n)
{
    int h[3]={0};
    for(int i=0;i<n;i++)
        h[a[i]]++;
    for(int i=0;i<h[0];i++)
        a[i] = 0;
    for(int i=h[0];i<h[0]+h[1];i++)
        a[i] = 1;
    for(int i=h[0]+h[1];i<n;i++)
        a[i] = 2;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    Sort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
