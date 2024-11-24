long long maxSubarraySum(vector<int> &arr) {
        
        long long sum = 0, maxi = arr[0];
        
        for(int i: arr){
            sum  += i;
            maxi = max(maxi, sum);
            if(sum<0) sum = 0;
        }
        
        return maxi;
    }
