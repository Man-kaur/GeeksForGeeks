//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        // better approach is to use NSE AND PSE
        
        int n = arr.size();
        
        vector<int> nse(n, n);
        vector<int> pse(n, -1);
        vector<int> res(n, INT_MIN);
        stack<int> st;
        
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            if(!st.empty()) nse[i] = st.top();
            st.push(i);
        }
        st = stack<int> ();
        
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            if(!st.empty()) pse[i] = st.top();
            st.push(i);
        }
        
        for(int i=0; i<n; i++){
            int idx = nse[i] - pse[i] - 1;
            res[idx-1] = max(res[idx-1], arr[i]);
        }
        
        for(int i=n-2; i>=0; i--){
            res[i] = max(res[i], res[i+1]);
        }
        
        return res;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        vector<int> res = ob.maxOfMins(arr);
        for (int i : res)
            cout << i << " ";
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends