bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        unordered_set<int> window;
        
        for(int i=0;i<arr.size();i++){
            if(window.find(arr[i]) != window.end()){
                return true;
            }
            
            window.insert(arr[i]);
            
            if(window.size() > k){
                window.erase(arr[i-k]);
            }
        }
        
        return false;
    }
