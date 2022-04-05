class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0;
        int e = height.size()-1;
        
        int ans = INT_MIN;
        
        while(s <= e)
        {
            if(height[s] < height[e])
            {
                ans = max(ans,height[s]*(e-s));
                s++;
            }
            else
            {
                ans = max(ans,height[e]*(e-s));
                e--;
            }
        }
        return ans;
    }
};