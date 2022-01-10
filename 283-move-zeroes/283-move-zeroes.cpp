class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0,next=0;i<nums.size();i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[i],nums[next]);
                next++;
            }
        }
    }
};