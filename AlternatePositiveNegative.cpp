void rearrange(vector<int> &arr) {
        queue<int> pos;
        queue<int> neg;
        
        for(int i: arr){
            if(i<0) neg.push(i);
            if(i>=0) pos.push(i);
        }
        
        arr.clear();
        
        while(!pos.empty() && !neg.empty()){
            arr.push_back(pos.front());
            arr.push_back(neg.front());
            pos.pop();
            neg.pop();
        }
        
        if(!pos.empty()){
            while(!pos.empty()) {
                arr.push_back(pos.front());
                pos.pop();
            }
        }
        if(!neg.empty()){
            while(!neg.empty()) {
                arr.push_back(neg.front());
                neg.pop();
            }
        }
    }
