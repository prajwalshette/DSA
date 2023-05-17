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
    int pairSum(ListNode* head) {
        
        int n = 0;
        int res = 0;
        ListNode* i = head;
        ListNode* j = head;
        stack<ListNode*> s;
        
        while(j){
            n++;
            s.push(j);
            j = j->next;
        }
        while(s.size() > n / 2){
            j = s.top();
            res = max(res, i->val + j->val);
            s.pop();
            i = i->next;
        }
        return res;
    }
};