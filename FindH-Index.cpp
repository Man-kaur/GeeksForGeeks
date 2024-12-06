int hIndex(vector<int>& cit) {
        // code here
        int n = cit.size();
        sort(cit.begin(), cit.end());
        int h = 0;
        for(int i=n-1;i>=0;i--){
            if(cit[i] >= n-i) h = n-i;
            else break;
        }
        
        return h;
    }
