vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        if(!head) return {nullptr, nullptr};
        if(!head->next) return{head,nullptr};
        Node* head1 = head;
        Node* head2 = head->next;
        Node* t1 = head1;
        Node* t2 = head2;
        
        while(t1 && t2){
             t1->next = t2->next;
             t1=t1->next;
             if(t1==NULL){
                 t2->next = NULL;
                 return{head1, head2};
             }
             t2->next = t1->next;
             t2=t2->next;
        }
        return{head1, head2};
    }
