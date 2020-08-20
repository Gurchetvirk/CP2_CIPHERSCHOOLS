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

void removeElements(linkedList* head, int data) {
        linkedList *temp=head;
        linkedList *prev=head;
        if(head==NULL)
            return;
        else if(head->data == data){
            head=head->next;
        }
        else
        {
            while(temp!=NULL)
            {
            if(temp->data==data)
            {
                prev->next=temp->next;
            }
            else
               prev=temp;
                temp=temp->next;
            }
        }
        return;
}

int main(){
    int n,item;
    cin>>n;
    head=insert(n);
    cout<<"Enter item to delete=";
    cin>>item;
    removeElements(head,item);
    show(head);
}
