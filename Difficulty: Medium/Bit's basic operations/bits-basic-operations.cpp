//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int XOR(int n, int m) {
        // code here
        return n^m;
    }
    int check(int a, int b) {
        // code here
        int mask = 1<<(a-1);
        int ans = mask & b;
        if(ans) return 1;
        else return 0;
    }
    
    int setBit(int c, int d) {
        // code here
        int mask = 1<<c;
        return mask | d;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a, b;
        cin >> a >> b;
        int c, d;
        cin >> c >> d;
        Solution obj;
        int ans1 = obj.XOR(n, m);
        int ans2 = obj.check(a, b);
        int ans3 = obj.setBit(c, d);
        cout << ans1 << " " << ans2 << " " << ans3 << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends