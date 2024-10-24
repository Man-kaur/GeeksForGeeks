vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        int n = arr.size();
        vector<int> res(n, 0);
        int count = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=0 && arr[i+1]!=0 && arr[i]==arr[i+1]){
                arr[i] *= 2;
                arr[i+1] = 0;
            }
        }
        
        int i = 0;
        for(int ele: arr){
            if(ele!=0){
                res[i] = ele;
                i++;
            }
        }
        return res;
    }
