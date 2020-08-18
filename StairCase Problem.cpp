#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][4]={1,2,3,4,11,12,13,14,21,22,23,24,31,32,33,34};
    int key=23,index;
    for(int i=0;i<4;i++)
    {
        if(arr[i][0]<key && arr[i+1][0]>key)
        {
            index=i;
        }
    }
    if(key-arr[index][0]<4)
        cout<<index<<" "<<key-arr[index][0];
        else
            cout<<endl<<"Not found";
}
