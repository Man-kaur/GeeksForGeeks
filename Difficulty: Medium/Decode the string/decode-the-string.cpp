//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
        // code here
        int n = s.size();
        stack<string> st;
        string res = "";
        
        for(int i=0; i<n; i++){
            
            if(s[i] == ']'){
                string cur = "";
                
                while( st.top() != "["){
                    cur = st.top() + cur;
                    st.pop();
                }
                st.pop();  // '[' removal
                
                int num = stoi(st.top());
                st.pop(); // num removal;
                
                string temp = "";
                
                for(int j=0; j<num; j++) temp += cur;
                st.push(temp);
            }else{
                if(s[i] >= '0' && s[i]<= '9'){
                    string num = "";
                    while(i<n && s[i]>='0' && s[i]<='9'){
                        num += s[i];
                        i++;
                    }
                    i--;
                    st.push(num);
                }else{
                    st.push(string(1, s[i]));
                }
            }
        }
        
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }
        
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends