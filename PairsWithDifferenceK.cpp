int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> mp;
        for(int i: arr) mp[i]++;
        
        int count = 0;
        for(int i: arr){
            if(mp.count(k+i)) count += mp[k+i];
        }
        
        return count;
    }
