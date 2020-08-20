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


void deleteNode(linkedList* node) {
        int item;
        cin>>item;
        linkedList* head=node;
        while(node->next !=NULL){
           if(node->next->data==item){
                node->next=node->next->next;
            }
            node=node->next;
        }
        node=head;
        while(node)
        {
            node=node->next;
        }
}

int main(){
    int n;
    cin>>n;
    head=insert(n);
    deleteNode(head);
    show(head);
}
