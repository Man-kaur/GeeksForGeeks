//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    vector<int> dp;
    int mod = 1e9 + 7;
  public:
    //tabulation
    long long int topDown(int n) {
        if(n==0 || n==1) return n;
        
        int prev2 = 0, prev1 = 1, res = 0;
        for(int i=1; i<n; i++){
            res = (prev2 + prev1)%mod;
            prev2 = prev1;
            prev1 = res;
        }
        
        return res;
    }
    
    long long f(int n){
        if(n==0 || n==1) return n;
        if(dp[n] != -1) return dp[n];
        dp[n] = (f(n-1) + f(n-2))%mod;
        return dp[n];
    }
    //recursion
    long long int bottomUp(int n) {
        dp = vector<int> (n+1, -1);
        return f(n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends