#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,row,column;
    cin>>row>>column;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i<(row/2))
            {
                if(i==0)
                {
                    if(j==0)
                        cout<<"* ";
                    else if(j<column/2)
                        cout<<"  ";
                    else
                        cout<<"* ";
                }
                else{
                    if(j==0 || j==column/2)
                        cout<<"* ";
                    else
                        cout<<"  ";
                }
            }
            else if(i==row/2)
                cout<<"* ";
            else if(i==row-1)
            {
                if(j<=column/2 || j==column-1)
                    cout<<"* ";
                else
                    cout<<"  ";
            }
            else{
                if(j==column/2 || j==column-1)
                    cout<<"* ";
                else
                    cout<<"  ";
            }
        }
        cout<<endl<<endl;
    }
}
