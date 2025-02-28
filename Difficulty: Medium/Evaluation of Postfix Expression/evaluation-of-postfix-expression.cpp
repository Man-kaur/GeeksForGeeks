//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    int evaluate(int a, int b, char c){

        if(c == '+') return a+b;
        if(c == '-') return a-b;
        if(c == '*') return a*b;
        if(c == '/') return a/b;
    }
    
    int evaluate(vector<string>& arr) {
        stack<int> st;
        
        for(string c : arr){
            if(c!="+" && c!="-" && c!="/" && c!="*"){
                int num = stoi(c);
                st.push(num);
            }
            else{
                int a = st.top();
                st.pop();
                
                int b = st.top();
                st.pop();
                
                int res = evaluate(b, a, c[0]);
                st.push(res);
            }
        }
        
        return st.top();
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends