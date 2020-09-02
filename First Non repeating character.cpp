#include<bits/stdc++.h>
using namespace std;
int main(){
    int item,i,j;
    char ch,check;
    queue<char> q;
    cin>>item;
    for(i=0;i<item;i++){
        cin>>ch;
        if(i==0){
            check=ch;
            q.push(ch);
        }
        else if(ch==check){
            q.push(1);
        }
        else{
            check=ch;
            break;
        }
    }
    while(!q.empty()){
            if(q.front()==1)
                cout<<-1<<" ";
    else{
        cout<<q.front()<<" ";
        }
        q.pop();
    }
    for(j=i;i<item;i++)
        cout<<check<<" ";
}
