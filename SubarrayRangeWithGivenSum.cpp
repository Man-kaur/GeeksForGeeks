int subArraySum(vector<int>& arr, int target) {
        // Your code here
        int sum = 0;
        int ans = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for(int i: arr){
            sum+=i;
            if(mp.count(sum-target) ==1 ) ans+=mp[sum-target];
            mp[sum]++;
        }
        return ans;
    }
