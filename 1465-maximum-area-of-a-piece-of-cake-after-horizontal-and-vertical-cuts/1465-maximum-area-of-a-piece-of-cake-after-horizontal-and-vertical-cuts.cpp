class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        
        int mod = 1e9+7;
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        
        int hm = hc[0]-0;
        int vm = vc[0]-0;
        
        for(int i=0;i<hc.size()-1;i++)
        {
            hm = max(hm,hc[i+1]-hc[i]);
        }
        
        for(int i=0;i<vc.size()-1;i++)
        {
            vm = max(vm,vc[i+1]-vc[i]);
        }
        
        hm = max(hm,h-hc[hc.size()-1]);
        vm = max(vm,w-vc[vc.size()-1]);
        
        return ((long long)(hm%mod)*(vm%mod))%mod;
    }
};