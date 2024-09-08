int minJumps(vector<int>& arr) {
        // Your code here
        int n = arr.size(); 
        int maxInd = 0, nextMaxInd = arr[0];
        int count =0;
        for(int i=0;i<n-1;i++){
            if(maxInd ==i){
                maxInd = max(nextMaxInd, i+arr[i]);
                nextMaxInd= 0;
                count++;
            }else{
                nextMaxInd = max(nextMaxInd, i+arr[i]);
            }
        }
        return (maxInd >= n-1) ? count : -1;
}
