bool checkSorted(vector<int> &arr) {
        // code here.
        int swaps  = 0;
        for(int i=0;i<arr.size();i++){
            while(arr[i]-1!=i){
                swap( arr[i], arr[arr[i]-1]);
                swaps++;
            }
        }
        
        return swaps==2 || swaps==0;
    }
