//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool isSafe(int row, int col, vector<vector<int>> &board, int n){
        //current col
        for(int i=0;i<row;i++){
            if(board[i][col]==1) return false;
        }
        
        //diagonal: upper left
        int x = row;
        int y = col;
        while(x>=0 && y>=0){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y--;
        }
        
        //diagonal: lower left
        x= row;
        y= col;
        while(x>=0 && y<n){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y++;
        }
        return true;
    }
    
    void solve(int row,vector<vector<int>> &board, vector<vector<int>> &res, int n ){
        if(row==n){
            vector<int> temp;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(board[i][j]==1) temp.push_back(j+1);
                }
            }
            
            res.push_back(temp);
            return ;
        }
        
        for(int col=0; col<n; col++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 1;
                solve(row+1, board, res, n);
                board[row][col] = 0;
            }
        }
        
    }
    
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> res;
        vector<vector<int>> board(n, vector<int>(n, 0));
        
        solve(0, board, res, n);
        
        return res;
    }

    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if (ans.size() == 0)
            cout << -1 << "\n";
        else {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++) {
                cout << "[";
                for (int u : ans[i])
                    cout << u << " ";
                cout << "] ";
            }
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends