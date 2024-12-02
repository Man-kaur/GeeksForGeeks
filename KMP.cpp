void constructLps(string pat, vector<int> &lps){
        int len = 0;
        int i = 1;
        lps[len] = 0;
        
        while(i<pat.length()){
            if(pat[len] == pat[i]){
                len++;
                lps[i] = len;
                i++;
            }else{
                if(len!=0){
                    len = lps[len-1];
                }else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    vector<int> search(string& pat, string& txt) {
        // code here
        int m = pat.length();
        int n = txt.length();
        
        vector<int> lps(m);
        vector<int> res;
        
        constructLps(pat, lps);
        
        int i = 0, j=0;
        
        while(i<n){
            if(txt[i] == pat[j]){
                i++;
                j++;
                
                if(j==m){
                    res.push_back(i-j);
                    j = lps[j-1];
                }
            }else{
                if(j!=0){
                    j = lps[j-1];
                }else{
                    i++;
                }
            }
        }
        
        return  res;
    }
