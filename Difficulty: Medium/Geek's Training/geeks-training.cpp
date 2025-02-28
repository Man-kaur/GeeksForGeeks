//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    int helper(vector<vector<int>> &arr, vector<vector<int>> &dp, int row, int lastTask){
        
        if(row == 0){
            int maxi = 0;
            
            for(int i=0; i<3; i++){
                if(i != lastTask) maxi = max(maxi, arr[row][i]);
            }
            
            return maxi;
        }
        
        if(dp[row][lastTask] != -1) return dp[row][lastTask];
        int maxi = 0;
        
        for(int i=0; i<3; i++){
            if( i != lastTask){
                int points = arr[row][i] + helper(arr, dp, row - 1, i);
                maxi = max(maxi, points);
            }
        }
        
        return dp[row][lastTask] = maxi;
    }
    int maximumPoints(vector<vector<int>>& arr) {
        // Code here
        int rows = arr.size();
        vector<vector<int>> dp(rows, vector<int> (4, -1));
        
        return helper(arr, dp, rows-1, 3);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends