class Solution {
public:
    int partitionString(string s) {
        
        int n = s.size();
        int ans = 0, j = 0;
        unordered_map<char, int> mp;

        while (j < n)
        {
            mp[s[j]]++;
            if (mp[s[j]] == 2)
            {
                ans++;
                mp.clear();
                mp[s[j]]++;
            }
            j++;
        }
        return ans + 1; // final partition
    }
};