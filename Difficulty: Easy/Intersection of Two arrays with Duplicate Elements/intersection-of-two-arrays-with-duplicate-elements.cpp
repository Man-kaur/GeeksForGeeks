//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        
        unordered_map<int, int>mp;
        
        for(int i: a) mp[i] = 1;
        for(int i: b){
            if(mp[i]==1) mp[i]=-1;
        }
        
        vector<int> res;
        
        for(auto i: mp){
            if(i.second == -1) res.push_back(i.first);
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
        vector<int> arr1, arr2;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            arr2.push_back(number);
        }

        Solution ob;
        vector<int> res = ob.intersectionWithDuplicates(arr1, arr2);
        sort(res.begin(), res.end());

        if (res.size() == 0) {
            cout << "[]" << endl;
        } else {
            for (auto it : res)
                cout << it << " ";
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends