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
    bool isCompleteTree(TreeNode* root) {
        
         if(!root) return true;
        bool flag=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            auto curr= q.front();
            q.pop();
            if(curr==NULL)
            {
                flag=false;
            }
            else
            {
                if(flag==false)
                {
                    return false;
                }
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return true;
        
    }
};