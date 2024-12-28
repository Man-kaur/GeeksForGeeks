//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        
        vector<vector<int>> vect;
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            int ele1 = arr[i];
            for(int j=i+1;j<n;j++){
                int ele2 = arr[j];
                for(int k =j+1;k<n;k++){
                    int ele3 = arr[k];
                    if(ele1+ele2+ele3 == 0){
                        vect.push_back({i, j, k});
                    } 
                }
            }
        }
        
        return vect;
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
        Solution ob;

        vector<vector<int>> res = ob.findTriplets(arr);
        sort(res.begin(), res.end());
        if (res.size() == 0) {
            cout << "[]\n";
        }
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends