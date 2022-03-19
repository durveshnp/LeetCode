class FreqStack {
public:
    unordered_map<int,stack<int>> pq;
    unordered_map<int, int> cnt;
    int level = 0;
    
    FreqStack() {
        
    }
    
    void push(int val) {
        level = max(level,++cnt[val]) ;
        pq[cnt[val]].push(val) ;
    }
    
    int pop() {
        int tmp = pq[level].top() ;
        pq[level].pop() ;
        
        if( !pq[cnt[tmp]--].size() )
            level-- ;
        
        return tmp;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */