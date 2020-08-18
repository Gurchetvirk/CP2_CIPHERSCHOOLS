#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ar;
    ar.push_back(-7);
    ar.push_back(1);
    ar.push_back(5);
    ar.push_back(2);
    ar.push_back(-4);
    ar.push_back(3);
    ar.push_back(0);
    int i,j,lsum=0,rsum=0;
    for(i=0;i<ar.size();i++)
    {
        lsum=0,rsum=0;
        for(j=0;j<i;j++)
            lsum+=ar[j];
        for(j=i+1;j<ar.size();j++)
            rsum+=ar[j];
        if(lsum == rsum)
        {
            cout<<i;
            break;
        }
    }


}
