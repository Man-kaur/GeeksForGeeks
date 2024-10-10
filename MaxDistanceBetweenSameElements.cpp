int maxDistance(vector<int> &arr) {
        int n = arr.size();
        map<int, vector<int>>mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]].push_back(i);
        }
        
        int maxi = INT_MIN;
        for(auto i : mp){
            int size = i.second.size();
            maxi = max(maxi, (i.second[size-1] - i.second[0]));
        }
        
        return maxi;
    }
