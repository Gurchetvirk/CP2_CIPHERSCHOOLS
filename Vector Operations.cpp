#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> t;
    vector<char> qu;
    char ch;
    int a,q;
    cin>>a;
    while(a--)
    {
        cin>>q;
        while(q>0)
        {
            cin>>ch;
            if(ch != 'a')
            {
                qu.push_back(ch);
                q--;
            }
            else{
                    qu.push_back(ch);
            }
        }
        for(int i=0;i<qu.size();i++)
        {
            qu.clear();
            t.clear();
            if(qu[i]=='a')
                continue;
            else if(qu[i]=='b')
                sort(t.begin(),t.end());
            else if(qu[i]=='c')
                reverse(t.begin(),t.end());
            else if(qu[i]=='d')
                cout<<t.size();
            else if(qu[i]=='e'){
                for(int j=0;j<t.size();j++)
                    cout<<(char)t[j]<<" ";
                }
                else if(qu[i]=='f')
                    sort(t.begin(),t.end(),greater<char>());
                else
                    t.push_back((qu[i]));
        }
        cout<<endl;
        for(int i=0;i<t.size();i++)
            cout<<(char)t[i]<<" ";
    }
}
