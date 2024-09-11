long long minCost(vector<long long>& arr) {
        // Your code here
        priority_queue<long long, vector<long long> , greater<long long>> pq;
        
        for(int i : arr){
            pq.push(i);
        }
        
        long long ans = 0;
        
        while(pq.size()>1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int sum = a+b;
            ans += sum;
            pq.push(sum);
        }
        
        return ans;
    }
