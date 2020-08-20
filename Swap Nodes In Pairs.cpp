/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 //**********************************Leet Code Problem  24 ********************
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        int arr[1000],i=0,j=0,temp;
        ListNode *result,*curr=NULL,*prev=NULL;
        while(head)
        {
            arr[i]=head->val;
            head=head->next;
            i++;
        }
        for(j=1;j<i;j=j+2){
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
        for(j=0;j<i;j++){
            curr=new ListNode;
            curr->val=arr[j];
            if(prev==NULL){
                prev=curr;
                result=curr;
            }
            else
            {
                prev->next=curr;
                prev=curr;
            }
        }
        return result;
    }
};
