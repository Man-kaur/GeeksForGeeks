int binarySearch(vector<int>& arr, int target, bool first) {
        // code here
        int start = 0, end = arr.size()-1, result = -1;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            if(arr[mid]==target){
                result = mid;
                if(first) end = mid-1;
                else start = mid+1;
            }else if(target < arr[mid]){
                end = mid -1;
            }else{
                start =  mid+1;
            }
        }
        
        return result;
    }
    
    int countFreq(vector<int>&arr, int target){
        int first = binarySearch(arr, target, true);
        
        if(first==-1) return 0;
        
        int last = binarySearch(arr, target, false);
        
        return last - first + 1;
    }
