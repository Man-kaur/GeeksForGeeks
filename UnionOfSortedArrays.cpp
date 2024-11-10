vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        set<int> st;
        for(int i : a){
            st.insert({i});
        }
        
        for(int i: b){
            st.insert({i});
        }
        
        vector<int> res;
        for(auto i: st){
            res.push_back(i);
        }
        
        return res;
    }
