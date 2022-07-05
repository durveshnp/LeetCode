class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> set;
        
        for(int i=0; i<nums.size(); i++)
            set.insert(nums[i]);
            
        int result = 0;
        
        while(set.size()>0)
        {
            int number = *set.begin();
            int count = 1;
            
            set.erase(number);
            
            int smaller = number-1;
            int bigger = number+1;
            
            while(set.count(smaller)>0)
            {
                set.erase(smaller);
                smaller--;
                count++;
            }
            
            while(set.count(bigger)>0)
            {
                set.erase(bigger);
                bigger++;
                count++;
            }
            
            result = max(result, count);
        }
        
        return result;
    }
};