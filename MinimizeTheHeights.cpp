int getMinDiff(int k, vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n==1) return 0;
        
        sort(arr.begin(), arr.end());
        
        int minDiff = arr[n-1] - arr[0];
        
        for(int i=1;i<=n;i++){
            int minVal = min(arr[0]+k, arr[i]-k);
            int maxVal = max(arr[n-1]-k,arr[i-1]+k);
            
            minDiff = min(minDiff, maxVal - minVal);
        }
        
        return minDiff;
    }
