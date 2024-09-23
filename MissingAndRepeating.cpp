vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for(int i: arr){
            mp[i]++;
        }
        int A= 0;
        int B = 0;
        for(int i=1;i<=n;i++){
            if(mp[i]==0){
                A = i;
            }else if(mp[i]==2){
                B = i;
            }
        }
        return {B, A};
    }
