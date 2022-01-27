class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        
        for(char ch : moves)
        {
            switch(ch)
            {
                case 'U':
                    y++;break;
                case 'D':
                    y--;break;
                case 'L':
                    x--;break;
                case 'R':
                    x++;break;
            }
        }
        if(x == 0 && y == 0)
            return true;
        else
            return false;
    }
};