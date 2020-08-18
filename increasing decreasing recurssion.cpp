#include<bits/stdc++.h>
using namespace std;
void increasingdecreasing(int n)
{
    if(n==1)
    {
        cout<<endl<<n;
        cout<<endl<<--n;
    }
    else{
        cout<<endl<<n;
        increasingdecreasing(n-2);
        cout<<endl<<--n;

    }
}
int main()
{
    increasingdecreasing(7);
}
