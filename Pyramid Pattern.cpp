#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(int j=0;j<i;j++)
            cout<<"*";
        cout<<endl;
    }
}
