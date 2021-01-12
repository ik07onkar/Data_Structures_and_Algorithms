#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        int temp,j;
        temp = a[i];
        j = i;
        while(j>0 &&  a[j-1] > temp)
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = temp;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    insertion_sort(a,n);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
