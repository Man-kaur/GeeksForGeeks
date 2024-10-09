 Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        int rows = mat.size(), cols =  mat[0].size();
        vector<vector<Node*>>LL(rows, vector<Node*>(cols, NULL));
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                LL[i][j] = new Node(mat[i][j]);
            }
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                Node* curr = LL[i][j];
                if(j+1<cols) curr->right = LL[i][j+1]; 
                if(i+1<rows) curr->down = LL[i+1][j]; 
            }
        }
        
        return LL[0][0];
    }
