class RLEIterator {
public:
    vector<int> v;
    int ind;
    
    RLEIterator(vector<int>& encoding) {
        v = encoding;
        ind = 0;
    }
    
    int next(int n) {
        if (ind == v.size()) 
            return -1;
        
        if (n <= v[ind]) 
        {
            v[ind] -= n;
            return v[ind + 1];
        }
        
        n -= v[ind];
        ind += 2;
        return next(n);
    }
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(encoding);
 * int param_1 = obj->next(n);
 */