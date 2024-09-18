bool isPair(char a, char b){
        if((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']')) return true;
        return false;
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        for(char c: x){
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }else if(!st.empty() && isPair(st.top(), c)){
                st.pop();
            }else{
                st.push(c);
            }
        }
        if(!st.empty()) return false;
        return true;
    }
