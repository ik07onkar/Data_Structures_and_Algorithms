#include<bits/stdc++.h>
using namespace std;
#define ll long long

void count_freq(int a[],int n,int place)
{
    int output[n], freq[10];
    memset(freq,0,sizeof(freq));
    for(int i=0; i<n; i++)
        freq[(a[i]/place)%10]++;

    freq[0] -= 1;
    for(int i=1; i<10; i++)
        freq[i] += freq[i-1];

    for(int i=n-1; i>=0; i--)
    {
        output[freq[(a[i]/place)%10]] = a[i];
        freq[(a[i]/place)%10]--;
    }

    for(int i=0; i<n; i++)
        a[i] = output[i];
}

void radix_sort(int a[],int n,int max1)
{
    int place = 1;
    while(max1)
    {
        count_freq(a,n,place);
        place *= 10;
        max1/= 10;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n,max1 = INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        max1 = max(max1,a[i]);
    }

    radix_sort(a,n,max1);

	return 0;
}

