//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int helper(string str1, string str2, int i, int j, vector<vector<int>> &dp){
        // if either of the string is empty
        if(i==0) return j;
        if(j==0) return i;
        
        // if this cell already exists
        if(dp[i][j]!=-1) return dp[i][j];
        
        //if chars are equal
        if(str1[i-1] == str2[j-1]) return dp[i][j] = helper(str1, str2, i-1, j-1, dp);
        
        return dp[i][j] = 1+min({
            helper(str1, str2, i-1, j, dp), // deletion
            helper(str1, str2, i, j-1, dp), // insertion
            helper(str1, str2, i-1, j-1, dp) // replacement
        });
    }
    
    int editDistance(string str1, string str2) {
        int i =  str1.size();
        int j = str2.size();
        
        vector<vector<int>> dp(i+1, vector<int>(j+1,-1));
        
        return helper(str1, str2, i, j, dp);
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string s1;
        getline(cin, s1);
        string s2;
        getline(cin, s2);
        Solution ob;
        int ans = ob.editDistance(s1, s2);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends