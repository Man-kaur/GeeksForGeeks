int pairWithMaxSum(vector<int>& arr) {
        // code here
        int maxi = INT_MIN;
        int n = arr.size();
        if(n<=1) return -1;
        for(int i=0;i<n-1;i++){
            int sum = arr[i] + arr[i+1];
            maxi = max(sum, maxi);
        }
        return maxi;
    }
