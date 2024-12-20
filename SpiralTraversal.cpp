vector<int> spirallyTraverse(vector<vector<int> > &arr) {
        vector<int> res;
        int rows = arr.size();
        int cols = arr[0].size();
        int top =0, left = 0, right = cols-1, bottom = rows-1;
        
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                res.push_back(arr[top][i]);
            }
            top++;
            
            for(int i=top;i<=bottom;i++){
                res.push_back(arr[i][right]);
            }
            right--;
            
            if(top<=bottom){
                for(int i = right;i>=left;i--){
                    res.push_back(arr[bottom][i]);
                }
                bottom--;
            }
            
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    res.push_back(arr[i][left]);
                }
                left++;
            }
        }
        return res;
    }
