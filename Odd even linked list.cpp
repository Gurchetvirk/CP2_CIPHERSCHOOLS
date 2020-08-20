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

linkedList* oddEvenList(linkedList* head) {
        int i=1;
        linkedList *curr=NULL,*prev=NULL,*myNode=head,*resultNode;
        while(myNode)
        {
            if(i%2!=0){
                    curr=new linkedList;
                    curr->next=NULL;
                    curr->data=myNode->data;
                    if(prev==NULL){
                        prev=curr;
                        resultNode=prev;
                    }
                    else{
                        prev->next=curr;
                        prev=curr;
                    }
            }
            i++;
            myNode=myNode->next;
        }
        i=1;
        myNode=head;
        while(myNode)
        {
            if(i%2==0){
                    curr=new linkedList;
                    curr->next=NULL;
                    curr->data=myNode->data;
                    if(prev==NULL){
                        prev=curr;
                        resultNode=prev;
                    }
                    else{
                        prev->next=curr;
                        prev=curr;
                    }
            }
            i++;
            myNode=myNode->next;
        }
        return resultNode;
}

int main(){
    int n;
    cin>>n;
    head=insert(n);
    show(oddEvenList(head));
}
