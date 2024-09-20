int countBuildings(vector<int> &height) {
        int count = 0;
        int maxi = 0;
        for(int i: height){
            if(i>maxi){
                count++;
                maxi = i;
            }
        }
        return count;
    }
