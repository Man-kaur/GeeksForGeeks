long long power(long long base, long long exp, long long mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) { 
                result = (result * base) % mod;
            }
            base = (base * base) % mod; 
            exp /= 2;
        }
        return result;
    }
    
    int countgroup(vector<int>& arr) {
        int xorr=0;
        int n=arr.size();
        int mod=1e9+7;
        for(auto x:arr)
        xorr^=x;
        if(xorr!=0)
        return 0;
        
        long long ans=power(2,n-1,mod)-1;
        if(ans<0)
        ans+=mod;
        return ans;
    }
