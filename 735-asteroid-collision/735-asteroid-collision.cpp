class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        for (int num : asteroids) 
        {
            while (!res.empty() && res.back() > 0 && res.back() < -num)
                res.pop_back();
            if (res.empty() || num > 0 || res.back() < 0)
                res.push_back(num);
            else if (num < 0 && res.back() == -num)
                res.pop_back();
        }
        return res;
    }
};