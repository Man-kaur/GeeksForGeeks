int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        int count = 0;
        Node* temp = head;
        while(temp){
            temp = temp->next;
            count++;
        }
        
        int diff = count - n;
        while(diff>0){
            head = head->next;
            diff--;
        }
        int sum = 0;
        while(head){
            sum += head->data;
            head = head->next;
        }
        return sum;
    }
