int pairsum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int max1 = arr[0], ind1 = 0;
        int max2 = arr[n-1], ind2=n-1;
        int j = n-1, i=0;
        while(i<n && j>=0){
            if(i!=ind2 && arr[i]>max1){
                max1 = arr[i];
                ind1 = i;
            }
            if(j!=ind1 && arr[j]>max2){
            max2 = arr[j];
            ind2 = j;
            }    
            i++;
            j--;
        }
        return max1 + max2;
    }
