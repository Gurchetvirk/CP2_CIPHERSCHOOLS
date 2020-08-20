#include<bits/stdc++.h>
using namespace std;
struct linkedList{
    int data;
    linkedList* next;
}*head;

linkedList *insert(int n)
{
    linkedList* prev=NULL,*myNode,*head;
    int item;
    for(int i=0;i<n;i++){
        cin>>item;
        myNode=new linkedList;
        myNode->data=item;
        myNode->next=NULL;
        if(prev==NULL){
            prev=myNode;
            head=prev;
        }
        else
        {
            prev->next=myNode;
            prev=myNode;
        }
    }
    return head;
}

void show(linkedList *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}

bool isPalindrome(linkedList* head) {
    vector<int> v1,v2;
    while(head){
        v1.push_back(head->data);
        head=head->next;
    }
    v2=v1;
    reverse(v2.begin(),v2.end());
    if(v1==v2)
        return true;
    else
        return false;
}

int main(){
    int n;
    cin>>n;
    head=insert(n);
    cout<<isPalindrome(head);
}
