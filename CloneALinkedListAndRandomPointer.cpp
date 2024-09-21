Node *copyList(Node *head) {
        // Write your code here
        if(!head) return nullptr;
        Node * ans = new Node(head->data);
        Node * cloned = ans;
        Node * temp = head->next;
        unordered_map<Node*,Node*> m;
        m[head] = ans;
        while(temp){
            cloned->next = new Node(temp->data);
            m[temp] = cloned->next;
            cloned = cloned->next;
            temp = temp->next;
        }
        temp = head;
        cloned = ans;
        while(temp){
            if(temp->random){
                cloned->random = m[temp->random];
            }
            temp = temp->next;
            cloned = cloned->next;
        }
        return ans;
    }
