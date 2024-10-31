Node* sortedInsert(Node* head, int x) {
        // Code here
        Node* node = new Node();
        node->data = x;
        node->prev = node->next = nullptr;
        
        if(!head) {
            head=node;
            return head;
        }
        
        if(head->data >= x){
            node->next = head;
            head->prev = node;
            head = node;
            return head;
        }
        
        Node *temp = head;
        Node *back;
        while(temp && temp->data<x){
            back = temp;
            temp = temp->next;
        }
        
        if(temp==nullptr){
            back->next = node;
            node->prev = back;
            return head;
        }
        
        back->next = node;
        temp->prev = node;
        node->next = temp;
        node->prev = back;
        
        // cout<<back->data<<" "<<temp->data<<"    ";
        return head;
    }
