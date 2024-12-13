int findMin(vector<int>& arr) {
        // complete the function here
        int l = 0, r=arr.size()-1;
        
        while(l<r){
            int mid = l + (r-l)/2;
            if(arr[mid] > arr[r]) l = mid+1;
            else if(arr[mid]==arr[r])r--;
            else r = mid;
        }
        
        return arr[l];
    }
