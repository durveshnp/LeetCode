class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int res = 0;
        int s = 0;
        int e = people.size()-1;
        
        while(s <= e)
        {
            if(people[s]+people[e] <= limit)
            {
                s++;
                e--;
                res++;
            }
            else
            {
                e--;
                res++;
            }
        }
        return res;
    }
};