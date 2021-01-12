#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : "; //Enter Sorted Array.
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter sum you want to find in Array : ";
    cin>>sum;
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==sum)
        {
            cout<<"Yes"<<"\n"<<"1st element is on "<<i<<" index"<<"\n"<<"2nd element is on "<<j<<" index";
            return 0;
        }
        else if(a[i]+a[j]>sum)
            j--;
        else
            i++;
    }
    cout<<"!!Sum not Found!!";

    return 0;
}
