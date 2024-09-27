vector<int> max_of_subarrays(int k, vector<int> &arr) {
        int n = arr.size();
        vector<int> res;
        deque<int> dq;
        for(int i=0;i<k;i++){
            while(!dq.empty() && arr[dq.back()]<=arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        res.push_back(arr[dq.front()]);
        
        for(int i=k;i<n;i++){
            if(!dq.empty() && dq.front()<= i-k){
                dq.pop_front();
            }
            
            while(!dq.empty() && arr[i]>=arr[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
            res.push_back(arr[dq.front()]);
            
        }
        return res;
    }
