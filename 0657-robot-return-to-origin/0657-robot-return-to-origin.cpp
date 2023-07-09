class Solution {
public:
    bool judgeCircle(string moves) {
       
        int i, x=0, y=0;
        for(i=0 ; i<moves.length() ; i++)
        {
            if(moves[i]=='U')
                x++;
            else if(moves[i]=='D')
                x--;
            else if(moves[i]=='R')
                y++;
            else if(moves[i]=='L')
                y--;
        }
        if(x==0 && y==0)
            return true;
        return false;
    }
};