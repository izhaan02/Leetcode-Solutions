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
    void reorderList(ListNode* head) {
        ListNode* fast=head->next;
        ListNode* slow=head;

        while(fast){
            fast=fast->next;
            if(fast){
                fast=fast->next;
                slow=slow->next;


            }
        }

        ListNode* secHead=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;

        while(secHead){
            ListNode* next=secHead->next;
            secHead->next=prev;
            prev=secHead;
            secHead=next;
        }
        secHead=prev;
        ListNode* curr=head;

        while(prev){
            secHead=prev->next;
            prev->next=curr->next;
            ListNode* currNext=curr->next;
            curr->next=prev;
            curr=currNext;
            prev=secHead;
            
        }
    }
};