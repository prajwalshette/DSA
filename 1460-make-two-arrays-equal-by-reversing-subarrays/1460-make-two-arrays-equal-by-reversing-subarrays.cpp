class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        int n = target.size();
        
        sort(target.begin(),target.end());
        sort(arr.begin(), arr.end());
        
        bool ans = true;
        for(int i=0; i<n; i++)
        {
            if(target[i] == arr[i])
            {
                continue;
            }
            else{
                ans = false;
            }
        }
         
       
        return ans;
    }
};