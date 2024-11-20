vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        
        vector<int> res;
        int n = arr.size();
        
        map<int, int> mp;
        
    
        for(int i: arr){
            mp[i]++;
        }
        
        for(auto i: mp){
            if(i.second > n/3) res.push_back(i.first);
        }
        
        return res;
        
    }
