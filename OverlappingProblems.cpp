vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        
        for(auto& inter: arr){
            if(res.empty() || res.back()[1] < inter[0]) res.push_back(inter);
            else res.back()[1] = max(inter[1], res.back()[1]);
        }
        
        return res;
    }
