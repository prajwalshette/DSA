class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        int l = -1;
	     for(int i=n-1; i>=0; i--)
	     {
	         int temp = arr[i];
	         arr[i] = l;
	         l = max(l,temp);
	     }
        
        return arr;
    }
};