//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        int n = arr.size();
        
        
        vector<double> ans;
        int cntEle = 1;
        
        maxHeap.push(arr[0]);
        ans.push_back((double)(arr[0]));
        
       
        for(int i = 1; i < n; ++i) {
            int top = maxHeap.top();
            if(top < arr[i]) {
                minHeap.push(arr[i]);
                if(minHeap.size() > maxHeap.size()) {
                    maxHeap.push(minHeap.top());
                    minHeap.pop();
                }
            } else {
                maxHeap.push(arr[i]);
                if(maxHeap.size() > minHeap.size() + 1) {
                    minHeap.push(maxHeap.top());
                    maxHeap.pop();
                }
            }
            
            ++cntEle;
            if(cntEle & 1) {
                ans.push_back((double)(maxHeap.top()));
            } else {
                double temp = (minHeap.top() + maxHeap.top()) / 2.0;
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<double> ans = ob.getMedian(nums);
        cout << fixed << setprecision(1);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends