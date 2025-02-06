//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    bool check(vector<int> arr, int mid, int k){
        int n = arr.size();
        int count = 1, prev = arr[0];
        
        for(int i=1; i<n; i++){
            if(arr[i] - prev >= mid){
                count++;
                prev = arr[i];
            }
        }
        
        return count >= k;
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        
        sort(stalls.begin(), stalls.end());

        int low = 1;
        int high = stalls.back() - stalls.front();
        int res = -1;
        
        while(low <= high){
            int mid = low + (high-low)/2;
            
            if(check(stalls, mid, k)){
                res = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends