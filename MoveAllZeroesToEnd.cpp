void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int nonZero = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                swap(arr[nonZero], arr[i]);
                nonZero++;
            }
        }
    }
