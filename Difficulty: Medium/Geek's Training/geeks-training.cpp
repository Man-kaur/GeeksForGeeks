//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    int maximumPoints(vector<vector<int>>& arr) {
        
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(4, 0));
        
        dp[0][0] = max(arr[0][1], arr[0][2]);
        dp[0][1] = max(arr[0][0], arr[0][2]);
        dp[0][2] = max(arr[0][1], arr[0][0]);
        dp[0][3] = max(arr[0][0], max(arr[0][1], arr[0][2]));
        
        for(int day=1; day<n; day++){
            for(int last=0; last<4; last++){
                for(int cur=0; cur<3; cur++){
                    if(cur != last) dp[day][last] = max(dp[day][last] , arr[day][cur] + dp[day-1][cur]); 
                }
            }
        }
        
        return dp[n-1][3];
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