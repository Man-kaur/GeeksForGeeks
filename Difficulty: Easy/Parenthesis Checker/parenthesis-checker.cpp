//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    bool isPair(char a, char b){
        if((a=='[' && b==']') ||(a=='{' && b=='}')|| (a=='(' && b==')')) return true;
        return false;
    }
    bool isBalanced(string& s) {
        stack<char> st;
        
        for(char c: s){
            if(!st.empty() && isPair(st.top(), c)) st.pop();
            else st.push(c);
        }
        
        return st.empty();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends