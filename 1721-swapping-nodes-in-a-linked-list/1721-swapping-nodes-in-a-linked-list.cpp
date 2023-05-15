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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*begin=head;
        ListNode*end=head;

        int count=0;
        while(temp)
        {
            temp=temp->next;
            count++;
        }

        int x=k-1;
        while(x--)
        {
            begin=begin->next;
        }
        count=count-k;
        while(count--)
        {
            end=end->next;
        }
        swap(begin->val,end->val);
        return head;
    }
};