 int maximumProfit(vector<int> &prices) {
        // code here
        
        int n = prices.size();
        
        int maxi = 0;
        int low = prices[0];
        
        for(int i=1;i<n;i++){
            int profit = 0;
            
            if(prices[i]>low){
                low = min(low, prices[i]);
                profit = prices[i] - low;
            }else{
                low = min(low, prices[i]);
            }
            
            maxi = max(maxi, profit);
            }
            
            return maxi;
    }
