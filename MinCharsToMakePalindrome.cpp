int minChar(string& s) {
        // Write your code here
         string rev=s;
        reverse(rev.begin(),rev.end());
        s+="$";
        s+=rev;
        int pre=0,suff=1;
        vector<int>LPS(s.length(),0);
        while(suff<s.length()){
            if(s[suff]==s[pre]){
                LPS[suff]=pre+1;
                suff++;
                pre++;
            }
          else{
              if(pre==0)
              suff++;
             else
             pre=LPS[pre-1];
          }  
        }
        return rev.length()-LPS[s.length()-1];
    }
