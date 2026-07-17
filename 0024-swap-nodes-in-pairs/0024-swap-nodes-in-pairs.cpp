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
    ListNode* solve(ListNode* first,ListNode* sec){

        if(first==NULL) return NULL;
        if(sec==NULL ) return first;

        if(sec->next!=NULL)
        sec->next=solve(sec->next,sec->next->next);

        first->next=sec->next;
        sec->next=first;
        return sec;

    }
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* ans=solve(head,head->next);
        return ans;
    }
};