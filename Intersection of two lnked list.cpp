#include<bits/stdc++.h>
using namespace std;
struct linkedList{
    int data;
    linkedList* next;
}*head1,*head2;

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

linkedList *getIntersectionNode(linkedList *headA, linkedList *headB) {
        linkedList *list1=headA,*list2=headB,*result=NULL;
        while(headA){
            while(headB)
            {
                if(headA->data==headB->data){
                    if(headA->next->data==headB->next->data){
                        result=headA;
                        return result;
                    }
                }
                headB=headB->next;
            }
            headB=list2;
            headA=headA->next;
        }
        return result;
    }

void show(linkedList *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    int n;
    cin>>n;
    head1=insert(n);

    cin>>n;
    head2=insert(n);

    show(getIntersectionNode(head1,head2));
}
