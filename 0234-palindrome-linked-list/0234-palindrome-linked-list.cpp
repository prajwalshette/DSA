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
/* Approch - 01:
 string ans="";
		ListNode * temp = head;
		if(head==NULL)
			return true;
		while(t!=NULL){
			ans += to_string(temp->val);
			temp = temp->next;
		}
		string x=ans;
		reverse(x.begin(),x.end());
		return x==ans;
*/
class Solution {
    private:
    bool checkPalindrome( vector<int> arr)
    {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        while(s<=e)
        {
            if(arr[s] != arr[e])
            {
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }
    
    public:
    bool isPalindrome(ListNode* head) {
        
        vector<int> arr;
        ListNode* temp = head;
        
        while(temp != NULL)
        {
           arr.push_back(temp->val); 
           temp = temp->next;
        }
        
        return checkPalindrome(arr);  
    }
};