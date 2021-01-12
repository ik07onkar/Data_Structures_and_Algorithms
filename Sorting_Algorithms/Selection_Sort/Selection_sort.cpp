#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        int Min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j] < a[Min])
                Min = j;
        }
        if(Min != i)
        {
            temp = a[i];
            a[i] = a[Min];
            a[Min] = temp;
        }
    }
    cout<<"Sorted Array :- "<<"\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
