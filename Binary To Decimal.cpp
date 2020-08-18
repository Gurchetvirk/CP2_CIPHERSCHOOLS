#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,myCount=0,sum=0;
    cin>>num;
    while(num>0)
    {
        sum+=num%10*pow(2,myCount);
        num=num/10;
        myCount++;
    }
    cout<<sum;
}
