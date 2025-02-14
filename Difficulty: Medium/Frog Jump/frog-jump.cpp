//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    vector<int> dp;
    
    int min_cost(vector<int>& height, int idx) {
        if(idx == 0) return 0;
        
        if(dp[idx] != -1) return dp[idx];
        
        int one_step = min_cost(height, idx-1) + abs(height[idx] - height[idx-1]);
        int two_step = 1e8;
        if(idx > 1) 
            two_step = min_cost(height, idx-2) + abs(height[idx] - height[idx-2]);
        
        return dp[idx] = min(one_step, two_step);
    }
  public:
    int minCost(vector<int>& height) {
        // Code here
        dp = vector<int> (height.size(), -1);
        return min_cost(height, height.size()-1);
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends