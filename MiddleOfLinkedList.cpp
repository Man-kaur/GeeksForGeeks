int getMiddle(Node* head) {
       if(!head){
            return -1;
        }
        if(!head->next){
            return head->data;
        }
        Node* p = head;
        Node* q = head;
        while(q && q->next){
            p = p->next;
            q = q->next->next;
        }
        return p->data;

    }
