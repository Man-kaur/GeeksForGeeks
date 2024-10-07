struct Node *insert(struct Node *head, int data) {
    // Code here
    Node* newNode = new Node(data);
    newNode->npx = head;
    if(head!=nullptr){
        head->npx = XOR(newNode, head->npx);
    }
    head = newNode;
    return head;
}

vector<int> getList(struct Node *head) {
    // Code here
    vector<int> res;
    Node* curr = head;
    Node* prev = nullptr;
    Node* next;
    while(curr){
        res.push_back(curr->data);
        next = XOR(prev, curr->npx);
        prev = curr;
        curr = next;
    }
    return res;
}
