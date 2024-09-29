int totalCount(int k, vector<int>& arr) {
        int count = 0;
        
        for(int i: arr){
            int extra = 0;
            int num = (i/k);
            if(i%k!=0) extra = 1;
            count += num + extra;
        }
        
        return count;
    }
