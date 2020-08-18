#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,l=0,temp,sum=0;
    cin>>n;
    temp=n;
    while(temp>0)
    {
        l++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0)
    {
        sum=ceil(pow(temp%10,l))+sum;
        temp=temp/10;
    }
    if(n==sum)
        cout<<"Armstrong";
    else
        cout<<"Not a Armstrong";
}
