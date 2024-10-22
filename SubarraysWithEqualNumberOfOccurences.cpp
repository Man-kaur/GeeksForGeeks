int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
    int n = arr.size();
       unordered_map<int,int>mp;
       int i=0,j=0;
        mp[0]++;
       int countx= 0;int county=0;
       int cnt=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==x)
           countx++;
           if(arr[i]==y)
           county++;
           
           int diff = (countx-county);
           if(mp.find(diff)!=mp.end())
             cnt+=mp[diff];
             
             mp[diff]++;
          
       }
       return cnt;
    }
