int circularSubarraySum(vector<int> &arr) {

        // your code here
        int  s  = 0;
        int sum = 0;
        int res = 0;
        for(auto it : arr){
            sum += it;
            s += it;
            if(s<0) s= 0;
            
            res = max(res, s);
        }
        
        s = 0;
        int x = INT_MAX;
        
        for(auto it : arr){
            s += it;
            if(s>0) s=0;
            x = min(x, s);
        }
        res = max(res, sum-x);
        return res;
    }
