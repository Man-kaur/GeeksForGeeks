vector<int> rearrange(const vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n, -1);
        
        for(int i: arr){
            if(i>=0){
                res[i] =  i;
            }
        }
        
        return res;
    }
