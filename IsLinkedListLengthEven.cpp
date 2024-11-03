bool isLengthEven(struct Node **head) {
        // Code here
        int count = 0;
        Node* temp = *head;
        while(temp){
            temp = temp->next;
            count++;
        }
        
        return count & 1 ? false : true;
    }
