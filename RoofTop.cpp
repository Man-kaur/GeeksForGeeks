int maxStep(vector<int>& arr) {
        int height = 0;
        int res = 0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
                height++;
            }else{
                height = 0;
            }
            res = max(res, height);
        }
        return res;
    }
