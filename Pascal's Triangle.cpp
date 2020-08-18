#include<bits/stdc++.h>
using namespace std;
int main()
{
        int numRows;
        cin>>numRows;
        vector<vector<int> > t;
        vector<int>row;
        for(int i=1;i<=numRows;i++)
        {
            row.clear();
            for(int j=0;j<i;j++)
            {
                if(j==0||j==i-1)
                    row.push_back(1);
                else{
                    row.push_back(t[i-2][j-1]+t[i-2][j]);
                }
            }
            t.push_back(row);
        }
        for(int i=0;i<t.size();i++)
        {
            for(int j=0;j<t[i].size();j++)
                cout<<t[i][j]<<" ";
            cout<<endl;
        }
}
