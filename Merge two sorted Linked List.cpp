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

void show(linkedList *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}

linkedList* mergeTwoLists(linkedList* l1, linkedList* l2) {
        vector<int> v;
        while(l1){
            v.push_back(l1->data);
            l1=l1->next;
        }
        while(l2){
            v.push_back(l2->data);
            l2=l2->next;
        }
        sort(v.begin(),v.end());
        linkedList *prev=NULL,*curr=new linkedList(),*resultNode=NULL;
        resultNode=curr;
        for(int i=0;i<v.size();i++)
        {
            curr->data=v[i];
            curr->next=NULL;
            if(prev == NULL){
                prev=curr;
            }
            else{
                prev->next=curr;
                prev=curr;
            }
            curr=new linkedList();
        }
        return resultNode;
}

int main(){
    int n1,n2;
    cin>>n1;
    head1=insert(n1);
    cin>>n2;
    head2=insert(n2);
    show(mergeTwoLists(head1,head2));
}
