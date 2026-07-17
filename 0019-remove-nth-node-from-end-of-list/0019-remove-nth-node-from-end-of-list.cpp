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
    ListNode* solve(ListNode* head, int& n){
        if(head==NULL) return NULL;
        ListNode* node=solve(head->next,n);

        n=n-1;
        if(n==0){
            head->next=NULL;
            return node;
        }
        head->next=node;
        return head;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ans=solve(head,n);
        return ans;


    }
};