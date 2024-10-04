int solve(int k,int i,vector<int>& arr,vector<int>&dp){
        if(i == 0) return 0;
        if(dp[i] != -1) return dp[i]; 
        int ans=INT_MAX;
        int n=k;
        for(int j=i-1;n!=0 && j>=0;j--){
            ans=min(ans,solve(k,j,arr,dp)+abs(arr[i]-arr[j]));
            n--;
        }
        return dp[i]=ans;
    }
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int> dp(n, -1);  
        return solve(k,n-1,arr,dp);
    }