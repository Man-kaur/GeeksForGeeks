int getSecondLargest(vector<int> &arr) {
        // Code Here
        
        int n = arr.size();
        
        int maxi = -1;
        int ind = 0;
        
        for(int i=0;i<n;i++) maxi = max(arr[i], maxi);
        
        int maxi2 = -1;
        
        for(int i=0;i<n;i++){
            if(maxi2<arr[i] && arr[i]!=maxi) maxi2 = max(arr[i], maxi2);
        }
        
        return maxi2;
    }
