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
class cmp{
public:
    bool operator() (ListNode* a,ListNode* b)
    {
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<ListNode*, vector<ListNode*>,cmp> pq;
        
        // (dummy(-1)->1->1->2(tail)
        // (dummy(-1)->1->1->2->3(tail)
        // (dummy(-1)->1->1->2->3->4(tail)
        // .........
        // (dummy(-1)->1->1->2->3->4->4->5->6(tail)
        
        ListNode* dummy = new ListNode(-1);
        // initial tail pionter with dummy node 
        ListNode* tail = dummy;
        
        for(int i = 0; i < lists.size(); i++)
        {
            if(lists[i] != NULL)
            {
                pq.push(lists[i]);
            }
        }
        
        while(pq.size())
        {
            ListNode* temp = pq.top();
            //insert temp into tail ke age
            tail->next = temp;
            tail = temp;
            //after inserting pop kar do wahi node ko
            pq.pop();
            if(temp->next != NULL)pq.push(temp->next);
        }
        return dummy->next;
    }
};