class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
       int n=arr.size();
        
        /*
        // Two Pionter Approch
        if(n == 0)
        {
            return 0;
        }
        
        int i=0;
        for(int j=1;j<n;j++){
            if(arr[j] != arr[i])
            {
                i++;
                arr[i] = arr[j];
            }
               
        }
        return i+1;
        */
        
        // Using set
        set<int> s;
        for(auto i:arr)
        {
            s.insert({i});
        }
        
        int j=0;
        for(auto i:s){
            arr[j]=i;
            j++;
        }
        return j;
    }
};