class Solution {
    public int majorityElement(int[] nums) {
        int cnt = 0;
        int res = 0;
        
        for(int i=0;i<nums.length;i++)
        {
            if(cnt == 0)
                res = nums[i];
            if(res == nums[i])
                cnt++;
            else
                cnt--;
        }
        return res;
    }
}