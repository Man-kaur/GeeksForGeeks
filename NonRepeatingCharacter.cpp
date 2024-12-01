char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char, int> mp;
        for(char c: s) mp[c]++;
        
        int ans = '$';
        
        for(auto i: s){
            if(mp[i] == 1){
                ans = i;
                break;
            }
        }
        
        return ans;
    }
