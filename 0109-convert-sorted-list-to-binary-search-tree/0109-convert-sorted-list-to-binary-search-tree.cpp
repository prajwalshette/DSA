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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
     TreeNode* check(int i, int j, vector<int>& temp){
        
        if(i > j){
            return NULL;
        }
        int mid = i +(j-i)/2;
            
        TreeNode *root = new TreeNode(temp[mid]);
        root->left = check(i, mid-1, temp);
        root->right = check(mid+1, j, temp);
        
        return root;
        
    }
    
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        vector<int> temp;
        while(head != NULL)
        {
            temp.push_back(head->val);
            head = head->next;
        }
        
        int i = 0, j = temp.size();
        
        return check(i, j-1, temp);
        
        
    }
};