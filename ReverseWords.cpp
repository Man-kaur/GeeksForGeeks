string reverseWords(string str) {
        int n = str.length();
        stack<string> st;
        for(int i=0;i<n;i++){
            string res = "";
            while(str[i]!='.' && str[i]!='\0'){
                res+=str[i];
                i++;
            }
            st.push(res);
        }
        
        string ans="";
        while(!st.empty()){
            ans += st.top()+'.';
            st.pop();
        }
        string ans1 = ans.substr(0, n);
        return ans1;
    }
