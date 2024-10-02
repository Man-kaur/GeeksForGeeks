int rotateDelete(vector<int> &arr) {
        
        int n = arr.size();
        int k =1;
        while(n>1){
            arr.insert(arr.begin()+0, arr[n-1]);
            arr.pop_back();
            
            int index = (n-k);
            if(index<0) index = 0;
            
            arr.erase(arr.begin() + index);
            k++;
            n--;
        }
        
        return arr[0];
    }
