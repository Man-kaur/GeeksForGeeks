int lps(string str) {
           int n = str.length();
        vector<int> lps(n,0);
        int length = 0;
        int i = 1;
        
        while(i < n){
            if(str[i] == str[length]){
                length++;
                lps[i] = length;
                i++;
            }else{
                if(length != 0){
                    length = lps[length -1];
                }else {
                    lps[0] = 0;
                    i++;
                }
            }
        }
        return lps[n-1];
    }
