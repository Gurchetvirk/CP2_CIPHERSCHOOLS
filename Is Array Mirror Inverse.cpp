#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,len;
    int arr[]={1, 2, 3, 0},arr2[20]={0};
    len=sizeof(arr)/sizeof(int);
    for(i=0;i<len;i++)
    {
        arr2[arr[i]]=i;
    }
    for(i=0;i<len;i++)
    {
        if(arr[i]!=arr2[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
