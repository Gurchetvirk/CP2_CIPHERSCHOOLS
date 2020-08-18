#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int k,temp,endv;
    cin>>k;
    for(int i=0;i<=k;i++)
    {
        v.push_back(v[0]);
        v.erase(v.begin());
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
