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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* secondHead=NULL;
        ListNode* secondTail=NULL;
        // ListNode* dummy=new ListNode(0);
        ListNode* firstHead=NULL;
        ListNode* firstTail=NULL;

        ListNode* temp=head;
        while(temp){
            if(temp->val<x){
                if(!firstHead){
                    firstHead=temp;
                    firstTail=temp;
                }
                else{
                    firstTail->next=temp;

                    firstTail=temp;

                }

                
                
                // if(secondHead){
                //     secondTail->next=temp->next;
                //     secondTail=temp->next;
                // }
            }
            else{
                if(!secondHead){
                    secondHead=temp;

                    //first->next=temp;
                    secondTail=temp;
                }
                else{
                    secondTail->next=temp;
                    secondTail=temp;

                }
            }
            temp=temp->next;
        }
        if(secondHead)secondTail->next=NULL;
        if(firstHead) firstTail->next=secondHead;
        return firstHead? firstHead: secondHead;

    }
};