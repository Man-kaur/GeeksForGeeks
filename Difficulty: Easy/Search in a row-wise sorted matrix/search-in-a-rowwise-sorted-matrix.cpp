//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int ele) {
        // code here
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
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchRowMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends