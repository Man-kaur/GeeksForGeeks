int minRemoval(vector<vector<int>> &inter) {
        // code here
        
        sort(inter.begin(), inter.end(), [](vector<int>&a, vector<int>&b){
            return a[1] < b[1];
        });
        
        int count = 0, prev = inter[0][1], n= inter.size();
        
        for(int i=1;i<n;i++){
            if(inter[i][0] < prev) count++;
            else prev = inter[i][1];
        }
        
        return count;
    }
    
