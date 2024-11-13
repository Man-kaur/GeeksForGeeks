 int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        int count1 = 0;
        int count2 = 0;
        
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp1) count1++, temp1=temp1->next;
        while(temp2) count2++, temp2=temp2->next;
        
        if(count1 > count2){
            while(count1!=count2){
                head1 = head1->next;
                count1--;
            }
        }else if(count2>count1){
            while(count1!=count2){
                head2 = head2->next;
                count2--;
            }
        }
        
        Node* node1 = head1;
        Node* node2 = head2;
        
        // int ans = -1;
        while(node1 && node2){
            if(node1 == node2) return node1->data;
            node1  = node1->next;
            node2 = node2 -> next;
        }
        
        return -1;
        
    }
