#include<bits/stdc++.h>
using namespace std;

void Merge(int a[], int s, int m, int e)
{
    int n1 = m - s + 1;
    int n2 = e - m;

    int L[n1], R[n2];
    for(int i=0; i<n1; i++)
        L[i] = a[s + i];
    for(int i=0; i<n2; i++)
        R[i] = a[m + 1 + i];

    int k=s, i=0, j=0;
    while(i<n1 && j<n2)
    {
        if(L[i] < R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }

    while(i < n1)
        a[k++] = L[i++];
    while(j < n2)
        a[k++] = R[j++];
}

void merge_sort(int a[],int start,int last)
{
    if(start >= last) return;
    int mid = (last + start - 1) / 2;
    merge_sort(a,start,mid);
    merge_sort(a,mid+1,last);
    Merge(a,start,mid,last);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    merge_sort(a,0,n-1);

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
