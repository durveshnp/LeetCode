class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0,y = 0;
        int dir = 0;
        
        for(char ch : instructions)
        {
            if(ch == 'G')
            {
                switch(dir)
                {
                    case 0:
                        y++;
                        break;
                    case 1:
                        x--;
                        break;
                    case 2:
                        y--;
                        break;
                    case 3:
                        x++;
                        break;
                }
            }
            else
            {
                if(ch == 'L')
                {
                    dir = (dir+1)%4;
                }
                else
                {
                    dir = (dir+3)%4;
                }
            }
        }
        
        if((x == 0 && y == 0)|| dir > 0)
            return true;
        else
            return false;
    }
};