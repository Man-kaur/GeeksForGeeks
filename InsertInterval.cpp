vector<vector<int>> insertInterval(vector<vector<int>> &inter,
                                       vector<int> &newInter) {
        // code here
        int n = inter.size();
        
        vector<vector<int>> res;
        int i = 0;
        while(i<n && inter[i][1] < newInter[0]) res.push_back(inter[i]), i++;
        
        while(i<n && inter[i][0] <= newInter[1]){
            newInter[0] = min(newInter[0], inter[i][0]);
            newInter[1] = max(newInter[1], inter[i][1]);
            i++;
        }
        
        res.push_back(newInter);
        
        while(i<n) res.push_back(inter[i]), i++;
        
        return res;
        
    }
