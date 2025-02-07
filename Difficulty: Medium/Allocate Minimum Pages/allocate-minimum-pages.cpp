//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    bool check(vector<int> arr, int mid, int k){
        int count = 1, sum = 0;
        
        for(int i: arr){
            if(sum + i > mid){
                count++;
                sum =  i;
                if(count > k) return false;
            }else{
                sum += i;
            }
        }
        
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        
        if(arr.size() < k) return -1;
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        
        int res = high;
        
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
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends