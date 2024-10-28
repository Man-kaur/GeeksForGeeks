vector<int> removeDuplicate(vector<int>& arr) {
        // code here
       unordered_map<int, int> mp;
       vector<int> res;
       for(int i: arr){
           mp[i]++;
       }
       
       for(auto i: arr){
            if(mp[i]>0){
                res.push_back(i);
                mp[i] = 0;
            }
       }
        return res;    
    }
