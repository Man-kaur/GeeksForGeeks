 vector<int> compute(string &pat)
    {
        
        int n=pat.size();
        vector<int> lps(n,0);
        int i=0;
        int j=1;
        
        while(j<n)
        {
            if(pat[i]==pat[j])
            {
                lps[j++]=++i;
            }
            else
            {
             if(i!=0)
             {
                 i=lps[i-1];
             }
             else
             {
                 lps[j++]=0;
             }
                
            }
        }
        return lps;
        
        
    }
    
    bool areRotations(string &s1, string &s2) {
       if(s1.length()!=s2.length())
       return false;
       
        string txt=s1+s1;
        string pat=s2;
        
        int m=txt.length();
        int n=pat.length();
        int i=0;
        int j=0;
        vector<int> lps = compute(pat); 
        while(i<m)
        {
            if(txt[i]==pat[j])
            {
                i++;
                j++;
            }
             if(j==n)
            {
                return true;
            }
           else if(i<m && pat[j]!=txt[i])
           {
               if(j!=0)
               {
                   j=lps[j-1];
               }
               else
               i++;
           }
        }
        return false;
        
        
        
    }
