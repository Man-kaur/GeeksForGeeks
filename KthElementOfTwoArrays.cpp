 int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        
        int n = a.size(), m = b.size();
        int i = n-1, j=0;
        
        while(i>=0 && j<m){
            if(a[i]>b[j]) swap(a[i--], b[j++]);
            else break;
        }
        
        if(k-1 < n){
            sort(a.begin(), a.end());
            return a[k-1];
        }
        
        sort(b.begin(), b.end());
        return b[k-n-1];
    }
