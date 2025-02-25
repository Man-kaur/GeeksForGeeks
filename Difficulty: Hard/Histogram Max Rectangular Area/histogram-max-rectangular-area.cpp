//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        vector<int> nse(n, n);
        vector<int> pse(n, -1);
        
        stack<int> st1;
        for(int i=0; i<n; i++){
            while(!st1.empty() && arr[st1.top()] >= arr[i]) st1.pop();
            if(!st1.empty()) pse[i] = st1.top();
            st1.push(i);
        }
        
        stack<int> st2;
        for(int i=n-1; i>=0; i--){
            while(!st2.empty() && arr[st2.top()] >= arr[i]) st2.pop();
            if(!st2.empty()) nse[i] = st2.top();
            st2.push(i);
        }
        
        int res = INT_MIN;
        
        for(int i=0; i<n; i++){
            int ht = arr[i];
            int w = nse[i] - pse[i] - 1;
            int area = ht * w;
            res = max(res, area);
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
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.getMaxArea(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends