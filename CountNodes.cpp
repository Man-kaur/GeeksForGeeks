int getCount(struct Node* head) {
        int count = 0;
        if(!head) return 0;
        
        while(head){
            count++;
            head=head->next;
        }
        return count;
    }
