#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,myCount,i,j;
    cin>>n;
    myCount=n-1;
    cout<<"Solid Rhombus:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=myCount+n;j++)
        {
            if(j<myCount)
                cout<<" ";
            else
                cout<<"*";
        }
        myCount--;
        cout<<endl;
    }

    myCount=n-1;
    cout<<"Hollow Rhombus:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=myCount+n;j++)
        {
            if(j<myCount)
                cout<<" ";
            else
                if(i==0 || i==n-1)
                    cout<<"*";
                else if(j==myCount || j==myCount+n)
                {
                    cout<<"*";
                }
                else
                    cout<<" ";
        }
        myCount--;
        cout<<endl;
    }

    return 0;
}
