class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<int> temp;
        int first=0;
        for(auto x:gifts)
        {
            temp.push(x);
        }
        while(k--)
        {
            first=temp.top();
            temp.pop();
            temp.push(sqrt(first));
        }
        long long int count=0;
        while(!temp.empty())
        {
            count+=temp.top();
            temp.pop();
        }
        return count;
        
    }
};