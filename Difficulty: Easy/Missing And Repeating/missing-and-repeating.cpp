//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        
        for(int i=0; i<arr.size(); i++){
            
            while(arr[i] != i+1){
                swap(arr[i], arr[arr[i]-1]);
                if(arr[i] == arr[arr[i]-1]) break;
            }
            
        }
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] != i+1){
                return {arr[i], i+1};
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends