#include<bits/stdc++.h>
using namespace std;

void rev(int a[],int s,int l)
{
    int temp;
    while(s < l)
    {
        temp = a[l-1];
        a[l-1] = a[s];
        a[s] = temp;
        l--;
        s++;
    }
}
void array_rotation(int n,int a[],int d)
{
    rev(a,0,d);
    rev(a,d,n);
    rev(a,0,n);
}
int main()
{
    int n,d;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>d;
    array_rotation(n,a,d);
    for(int i=0;i<n;i++)
        cout<<a[i]<<"  ";
    return 0;
}
