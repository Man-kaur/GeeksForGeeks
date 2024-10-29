struct Node* quickSort(struct Node* head) {
        // code here
        if(!head) return head;
        
        vector<int> ele;
        Node* temp = head;
        
        while(temp){
            ele.push_back(temp->data);
            temp = temp->next;
        }
        
        sort(ele.begin(), ele.end());
    
        Node* node = head;
        int i=0;
        while(node){
            node->data = ele[i];
            i++;
            node = node->next;
        }
        
        return head;
    }
