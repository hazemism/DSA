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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
           map<int,int> mp; 
           for (int i=0; i<nums.size();i++){
               mp[nums[i]]++;
           }
           

           ListNode *is;
           ListNode *now=nullptr;
           while (head!=nullptr){
                 if (now==nullptr&&mp[head->val]==0){
                    now= new ListNode(head->val);
                    is=now;
                 }
                
                 else if (mp[head->val]==0){
                    now->next= new ListNode(head->val);
                    now=now->next;
                 }
                 head=head->next;
           }
           return is;
    }
};