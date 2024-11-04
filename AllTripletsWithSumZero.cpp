vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        
        vector<vector<int>> vect;
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            int ele1 = arr[i];
            for(int j=i+1;j<n;j++){
                int ele2 = arr[j];
                for(int k =j+1;k<n;k++){
                    int ele3 = arr[k];
                    if(ele1+ele2+ele3 == 0){
                        vect.push_back({i, j, k});
                    } 
                }
            }
        }
        
        return vect;
    }
