class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int maxsum=0,altitude=0;
        for(int i=0; i<gain.size();i++)
        {
            altitude = altitude + gain[i];
        
        
        if(maxsum < altitude)
        {
            maxsum = altitude;
        }
            
        }
        return maxsum;
        
    }
};