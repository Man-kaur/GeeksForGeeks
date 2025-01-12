//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return 0; // No blocks to trap water.
        
        // Step 1: Initialize arrays for left and right max values
        vector<int> Lmax(n), Rmax(n);
        
        // Compute Lmax[i] (maximum to the left of index i)
        Lmax[0] = arr[0];
        for (int i = 1; i < n; ++i) {
            Lmax[i] = max(arr[i], Lmax[i - 1]);
        }
        
        // Compute Rmax[i] (maximum to the right of index i)
        Rmax[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            Rmax[i] = max(arr[i], Rmax[i + 1]);
        }

        // Step 2: Calculate trapped water
        int ans = 0; // Initialize total water to 0.
        for (int i = 0; i < n; ++i) {
            // Water trapped at index i
            ans += min(Lmax[i], Rmax[i]) - arr[i];
        }

        return ans; // Return total trapped water.
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends