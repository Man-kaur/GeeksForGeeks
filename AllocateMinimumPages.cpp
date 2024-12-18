int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size(), mx = 0, total=0;
        if(n<k) return -1;
        for(int& i : arr) mx = max(mx, i), total+=i;
        
        int l = mx, r= total;
        int res = -1;
        
        while(l<=r){
            int mid = l + (r-l)/2;
            if(f(arr,k, mid)){
                res = mid;
                r = mid-1;
            }else l = mid+1;
        }
        
        return res;
    }
    
    private:
    int f(vector<int> &arr, int k, int mid){
        int st = 1, sum=0;
        
        for(int& i: arr){
            if(sum+i > mid){
                st++;
                sum = i;
                if(st>k) return false;
            }else sum += i;
        }
        return true;
    }
