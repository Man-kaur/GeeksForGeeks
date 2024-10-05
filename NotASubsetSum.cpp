long long findSmallest(vector<int> &arr) {
        long miss = 1;
        for(int i: arr){
            if(i>miss) return miss;
            miss += i;
        }
        return miss;
}
