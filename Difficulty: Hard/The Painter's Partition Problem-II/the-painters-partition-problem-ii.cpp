//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    bool check(vector<int> arr, int mid, int k){
        int count = 1, sum = 0;
        
        for(int i : arr){
            if(sum + i > mid){
                count++;
                if(count > k) return false;
                sum = i;
            }else{
                sum += i;
            }
        }
        
        return true;
    }
    int minTime(vector<int>& arr, int k) {
        
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int res = 0;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(check(arr, mid, k)){
                res = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
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
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.minTime(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends