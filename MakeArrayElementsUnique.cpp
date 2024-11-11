int minIncrements(vector<int> arr) {
        // Code here
        
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int ans = 0;
        
        for(int i=1;i<n;i++){
            if(arr[i] <= arr[i-1]){
                int inc = arr[i-1] - arr[i] + 1;
                ans += inc;
                arr[i] = arr[i-1] + 1;
            }
        }
        
        return ans;
    }
