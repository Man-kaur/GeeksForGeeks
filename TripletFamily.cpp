bool findTriplet(vector<int>& arr) {
        // Your code
        set<int> s;
        for(auto it : arr)
        {
            s.insert(it);
        }
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=i+1; j<arr.size(); j++)
            {
                if(s.find(arr[i] + arr[j]) != s.end())
                {
                    return true;
                }
            }
        }
        return false;
        
    }
