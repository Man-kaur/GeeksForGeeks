int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size();
        int res = arr[0];
        int left = 1, right = 1;
        
        for(int i=0; i<n; i++){
            left = (left ? left : 1)*arr[i];
            right = (right ? right : 1)*arr[n-1-i];
            res = max({left, right, res});
        }
        return res;
    }
