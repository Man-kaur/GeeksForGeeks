//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        
        unordered_map<int, int> mp;
        int sum = 0, res = 0, i=0;
        
        while(i<arr.size()){
            sum += arr[i];
            
            if(sum==k) res = max(res, i+1);
            
            if(mp.find(sum-k)!=mp.end()) res = max(res, i-mp[sum-k]);
            if(mp.find(sum)==mp.end()) mp[sum] = i;
            i++;
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends