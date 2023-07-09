class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans;
        int i = 1;
        int j = -1;
        if(n%2==0)
        {
            n = n/2;
            while(n--)
            {
                ans.push_back(i);
                ans.push_back(j);
                i++;
                j=j-1;
            }
        }
         else
        {   n=n/2;
            while(n--){
                ans.push_back(i);
                ans.push_back(j);
                i++;
                j=j-1;

            }
            ans.push_back(0);
        }
        return ans;
    }
};