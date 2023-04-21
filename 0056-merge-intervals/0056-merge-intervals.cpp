class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        int n=intervals.size();

        sort(intervals.begin(), intervals.end());
        vector<int> temp = intervals[0];

     if (n<=1)  return intervals; 

        for(int i=1;i<n;i++){

             if (temp[1]>=intervals[i][0]){
                temp[1]=max(intervals[i][1],temp[1]);
          }else{
              ans.push_back(temp);
              temp=intervals[i];

          }

       }          
        ans.push_back(temp);

       return ans;
        
    }
};