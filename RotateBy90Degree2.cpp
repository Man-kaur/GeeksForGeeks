void rotateby90(vector<vector<int>>& mat) {
        // code here
        for(int i=0;i<mat.size();i++){
            for(int j=i;j<mat[0].size();j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        int start = 0, end = mat.size()-1;
        while(start <= end){
            swap(mat[start], mat[end]);
            start++;
            end--;
        }
    }
