vector<int> alternateSort(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp(n);
        sort(arr.begin(), arr.end());
        
        int k = n-1;
        int j= 0;
        for(int i=0;i<n;i++){
            if(i%2==0) temp[i] = arr[k], k--;
            if(i%2!=0) temp[i] = arr[j], j++;
        }
        
        return temp;
    }
