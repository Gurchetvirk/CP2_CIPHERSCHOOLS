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

linkedList* middleNode(linkedList* head) {
        linkedList* myNode=head;
        int i=0,j=0;
        while(myNode)
        {
            i++;
            myNode=myNode->next;
        }
        i=i/2+1;
        myNode=head;
        while(myNode)
        {
            j++;
            if(i==j)
            {
                head=myNode;
            }
            myNode=myNode->next;
        }
        return head;
}

int main()
{
    int n;
    cin>>n;
    head=insert(n);
    head=middleNode(head);
    show(head);
}
