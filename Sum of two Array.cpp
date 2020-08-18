#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,sum1=0,sum2=0;
    cin>>n>>m;
    int arr[100],arr2[100];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum1=sum1*10+arr[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>arr2[i];
        sum2=sum2*10+arr2[i];
    }
    cout<<sum1+sum2;
    return 0;
}
