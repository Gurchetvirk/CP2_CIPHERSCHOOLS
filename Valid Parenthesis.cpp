#include<bits/stdc++.h>
using namespace std;
int main()
{
        string s("{[}]");
        stack <int> myStack;
        int popItem;
        char ch,ch1;
        for(int i=0;i<s.length();i++)
        {
            ch=s[i];
            if( ch=='(' || ch=='['  || ch=='{')
            {
                myStack.push(s[i]);
            }
            else
            {
                    if(myStack.empty()){
                        cout<<false;
                        return 1;
                    }
                    ch=myStack.top();
                    ch1=s[i];
                    if(ch=='('){
                        if(ch1!=')')
                            cout<<false;
                            return 1;
                    }

                    else if(ch=='[')
                    {
                        if(ch1!=']')
                            cout<<false;
                            return 1;
                    }

                    else if(ch=='{'){
                        if(ch1!='}')
                            cout<<false;
                            return 1;
                    }
               myStack.pop();
            }
        }
        if(myStack.empty())
            cout<<true;
        else
            cout<<false;
}
