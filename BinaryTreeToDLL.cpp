Node* insertFirst(Node* head, int data){
      Node* n = new Node(data);
      n->right = head;
      head->left = n;
      head = n;
      return head;
}

void inorder(Node* root, stack<int> &st){
      if(root==NULL) return;
      inorder(root->left, st);
      st.push(root->data);
      inorder(root->right, st);
}
    
Node* bToDLL(Node* root) {
// get all the nodes in inorder traveral -> create dll from those nodes
      if(root == NULL) return NULL;
      stack<int> st;
      inorder(root, st);
      Node* head = new Node(st.top());
      st.pop();
      while(!st.empty()){
         int d = st.top();
         st.pop();
         head = insertFirst(head, d);
      }
      return head;
}
