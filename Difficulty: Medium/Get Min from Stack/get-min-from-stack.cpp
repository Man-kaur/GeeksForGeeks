//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    Solution() {}
    stack<int> nums;
    multiset<int> st;

    // Add an element to the top of Stack
    void push(int x) {
        // code here
        nums.push(x);
        st.insert(x);
    }

    // Remove the top element from the Stack
    void pop() {
        
        if(nums.empty()) return;
        auto it = st.find(nums.top());
        if(it != st.end()) st.erase(it);
        nums.pop();
    }

    // Returns top element of the Stack
    int peek() {
        // code here
        if(st.empty()) return -1;
        return nums.top();
    }

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(st.empty()) return -1;
        return *st.begin();
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends