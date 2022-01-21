class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int res = 0;
        int sum = 0;
        int totalgas = 0;
        int totalcost = 0;
        
        for(int i=0;i<gas.size();i++)
        {
            totalgas += gas[i];
            totalcost += cost[i];
            sum += (gas[i]-cost[i]);
            if(sum < 0)
            {
                res = i+1;
                sum = 0;
            }
        }
        
        if(totalgas >= totalcost)
            return res;
        else 
            return -1;
    }
};