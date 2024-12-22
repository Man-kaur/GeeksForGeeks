 bool matSearch(vector<vector<int>> &mat, int ele) {
        
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++){
	        if(ele <= mat[i][m-1]){
	            int start = 0, end = m-1;
	            while(start<=end){
	                int mid = start + (end-start)/2;
	                if(mat[i][mid] == ele) return 1;
	                if(mat[i][mid] > ele) end = mid -1;
	                if(mat[i][mid] < ele) start = mid +1;
	            }
	        }else{
	            continue;
	        }
	    }
	    return 0;
    }
