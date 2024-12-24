//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &arr, int x) {
        // code here
        int rows = arr.size(), cols = arr[0].size();
        
        int start = 0, end = rows-1;
        int row = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(arr[mid][0]==x || arr[mid][cols-1]==x) return true;
            if(x>arr[mid][0] && x<arr[mid][cols-1]){
                row = mid;
                break;
            }else if(x<arr[mid][0]) end = mid-1;
            else start =mid+1;
        }
        
        if(row!=-1){
            int start =0, end=cols-1;
            while(start<=end){
                int mid = start + (end-start)/2;
                if(arr[row][mid]==x) return true;
                else if(x<arr[row][mid]) end= mid-1;
                else start=mid+1;
            }
        }
        
        return false;
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
        if (obj.searchMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends