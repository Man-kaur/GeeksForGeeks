//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        int low = 0, high = arr.size()-1;
        
        int fl = -1, cl = -1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(arr[mid]==x) return {x, x};
            else if(arr[mid] > x) fl = arr[mid], high = mid-1;
            else cl = arr[mid], low = mid + 1;
        }
        
        return {cl, fl};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends