//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_map<char, int> mp;
        int start =0, res =0;
        
        for(int i=0;i<s.length();i++){
            if (mp.count(s[i]) > 0 && mp[s[i]] >= start) {
            start = mp[s[i]] + 1; 
        }
        
        mp[s[i]] = i; 
        res = max(res, i - start + 1);
        }
        
        return res;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends