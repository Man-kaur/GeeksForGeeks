vector<int> findMajority(vector<int>& nums) {
        
       vector<int> res;
       int n = nums.size();
       map<int, int> mp;
       
       for(int i: nums){
           mp[i]++;
       }
       
       for(auto i: mp){
           if(i.second > n/3){
               res.push_back(i.first);
           }
       }
       if(res.empty()) res.push_back(-1);
       return res;
    }
