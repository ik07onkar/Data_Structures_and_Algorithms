#include<bits/stdc++.h>
using namespace std;

int Remove_duplicate(int a[],int n)
{
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i] != a[i+1])
        {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = a[n-1];
    return j;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
        cin>>a[i];
    n = Remove_duplicate(a,n);
    for(int i=0;i<=n;i++)
        cout<<a[i]<<"  ";
    return 0;
}

