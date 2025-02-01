//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    bool helper(vector<vector<char>> &mat, string& word, vector<vector<bool>> &vizz,
    int x, int y, int index){
        
        if(word.length()==index) return true;
        
        if (x < 0 || x >= mat.size() || y < 0 || y >= mat[0].size() || vizz[x][y] || mat[x][y] != word[index]) {
        return false;
    }
        
        //up, down, left, right;
        int dir[][2] = {{0,1},{0,-1},{-1,0},{1,0}};
        
        if(word[index] == mat[x][y]){
            
        vizz[x][y] = true;
          for(int i=0; i<4; i++){
              int nx = x + dir[i][0];
              int ny = y + dir[i][1];
              
               if (helper(mat, word, vizz, nx, ny, index + 1)) return true;
          }
          
          vizz[x][y] = false;
        }
        return false;
    }
    
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        int m = mat.size(), n = mat[0].size();
        
        if (word.length() > m * n) return false;
        vector<vector<bool>> vizz(m, vector<bool>(n, false));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (helper(mat, word, vizz, i, j, 0)) return true;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends