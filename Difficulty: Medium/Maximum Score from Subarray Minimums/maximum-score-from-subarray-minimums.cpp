//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:

    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        
        int n = arr.size();
        
        int res = arr[0] + arr[1];
        for(int i=1; i<n-1; i++){
            res = max(res, arr[i]+arr[i+1]);
        }
        
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends