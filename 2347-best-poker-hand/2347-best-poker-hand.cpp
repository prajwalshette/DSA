class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        
        unordered_map<char, int> m1;
        for(int i=0; i<suits.size(); i++)
        {
            m1[suits[i]]++;
        }
        
        for(auto x : m1)
        {
            if(x.second == 5) return "Flush";
        }
        
        unordered_map<int, int> m2;
        for(int i=0; i<ranks.size(); i++)
        {
            m2[ranks[i]]++;
        }
        
        for(auto x : m2)
        {
           if(x.second >= 3)
           {
               return "Three of a Kind";
           }
        } 
            
         for(auto x : m2)
         {  
           if(x.second >= 2)
           {
               return "Pair";
           }
        }
        
       return "High Card"; 
    }
};