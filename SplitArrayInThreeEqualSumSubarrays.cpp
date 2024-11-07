vector<int> findSplit(vector<int>& arr) {
        // code here
        int sum = 0;
        vector<int> ans;
        
        for(int i: arr) sum += i;
        
        if(sum%3) return {-1, -1};
        
        int i = 0, temp = 0;
        
        while(i<arr.size() && ans.size()<2){
            temp += arr[i];
            if(temp == sum/3){
                ans.push_back(i);
                temp = 0;
            }
            i++;
        }
        
        if(ans.size() == 2) return ans;
        return {-1, -1};
    }
