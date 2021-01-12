#include<bits/stdc++.h>
using namespace std;

void counting_sort(int a[],int n)
{
    int max1 = INT_MIN;
    for(int i=0; i<n; i++)
        max1 = max(max1,a[i]);

    int h[max1+1];
    memset(h, 0, sizeof(h));
    for(int i=0; i<n; i++)
        h[a[i]]++;

    int j=0;
    for(int i=0; i<=max1; i++)
    {
        int tmp = h[i];
        while(tmp--)
        {
            a[j] = i;
            j++;
        }
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    counting_sort(a,n);

    return 0;
}
