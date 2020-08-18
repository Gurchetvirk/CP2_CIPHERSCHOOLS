#include<bits/stdc++.h>
using namespace std;
int main()
{
        int N;
        cin>>N;
        if(N==0 || N==1)
            return 0;
        else if(N==2)
            return 1;
        else
        {
            unsigned long long int a=0,b=1,c=a+b,i=2,sum=1;
            while(i<N)
            {
                sum+=c;
                a=b;
                b=c;
                c=a+b;
            }
            return sum;
        }
}
