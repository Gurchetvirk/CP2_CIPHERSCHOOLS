#include<bits/stdc++.h>
using namespace std;
void decreasing(int n)
{
    if(n==1)
        cout<<1;
    else{
        cout<<n<<" ";
        decreasing(--n);
    }
}
void increasing(int n)
{
    if(n==1)
        cout<<1<<" ";
    else{
        increasing(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    decreasing(5);
    cout<<endl;
    increasing(5);
}
