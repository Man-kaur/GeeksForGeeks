bool areAnagrams(string& a, string& b) {
        // Your code here
        int arr[26] = {0};
        for(char c: a){
            arr[c-'a'] += 1;
        }
        
        for(char c: b){
            arr[c-'a'] -= 1;
        }
        
        for(int i: arr){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
