int getSingle(vector<int>& arr) {
        int res = 0;
        for(int i: arr){
            res ^= i;
        }
        return res;
    }
