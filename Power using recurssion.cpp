#include<bits/stdc++.h>
using namespace std;
int result;
int power(int n,int b)
{
    if(b==1)
        return n;
    else{
        b--;
        result=n*power(n,b);
    }
    return result;
}
int main()
{
    cout<<power(10,3);
}
