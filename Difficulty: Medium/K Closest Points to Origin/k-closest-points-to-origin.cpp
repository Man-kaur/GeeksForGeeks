//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool sortByValue(const pair<pair<int,int>,int>& a, const pair<pair<int,int>,int>& b){
        return a.second<b.second;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
           vector<vector<int>> ans;
        vector<pair<int, pair<int,int>>> vec;
        for(int i=0; i<points.size(); i++){
            int dist = pow((points[i][0] - 0),2) + pow((points[i][1] - 0),2);
            vec.push_back({dist,{points[i][0], points[i][1]}});
        }
        sort(vec.begin(), vec.end());
        for(int i=0; i<k; i++){
            ans.push_back({vec[i].second.first,vec[i].second.second});
        }   
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends