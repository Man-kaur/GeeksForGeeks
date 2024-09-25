bool isPalindrome(Node *head) {
        // can use string too instead of a vector
        vector<int> arr;
        while(head){
            arr.push_back(head->data);
            head = head->next;
        }
        int n = arr.size();
        for(int i =0;i<n/2;i++){
            if(arr[i] != arr[n-i-1]){
                return false;
            }
        }
        return true;
    }
