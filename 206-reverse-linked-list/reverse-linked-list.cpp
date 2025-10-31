/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;list
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rec (ListNode* head,ListNode* now){
       if (head==nullptr){return now;}
       ListNode*temp = head->next;
       head->next=now;
       return rec(temp,head);
    }

    ListNode* reverseList(ListNode* head) {
        ListNode *now=nullptr;
        return rec(head,now);
    }
};