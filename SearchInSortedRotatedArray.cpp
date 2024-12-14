int search(vector<int>& arr, int key) {
        // complete the function here
        int left = 0, right = arr.size()-1;
        int res = -1;
        
        while(left <= right){
            int mid = left + (right-left)/2;
            if(arr[mid] == key) return mid;
            
            if(arr[left] <= arr[mid]){
                if(key<arr[mid] && key >= arr[left]) right = mid-1;
                else left = mid+1;
            }else{
                if(key > arr[mid] && key<=arr[right]) left = mid+1;
                else right = mid - 1;
            }
        }
        return res;
    }
