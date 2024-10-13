void deleteAlt(struct Node *head) {
        Node* temp = head, *p = nullptr;
        while(temp && temp->next){
            p = temp;
            temp = temp->next->next;
            Node* del = p->next;
            p->next = temp;
            delete del;
        }
    }
