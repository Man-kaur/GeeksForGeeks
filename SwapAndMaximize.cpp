long long maxSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        long long sum = 0;
        int i = 0; int j = arr.size()-1;
        
        while(i < j){
            sum += (2*arr[j] - arr[i] - arr[i+1]);
            i++;
            j--;
        }
        
        sum += arr[i] - arr[0];
        
        return sum;
    }
