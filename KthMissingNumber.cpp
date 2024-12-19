int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        int last = 0;
        for ( int& elm : arr ) {
            if ( elm != last + 1 ) {
                k -= elm - last - 1;
                if ( k <= 0 ) return elm + k - 1;
            }
            last = elm;
        }
        return last + k;
    }
