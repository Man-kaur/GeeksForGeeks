void mirror(Node* node) {
        queue<Node*> mp;
        mp.push(node);
        while(!mp.empty()){
            Node* current = mp.front();
            mp.pop();
            Node* temp = current->left;
            current->left = current->right;
            current->right = temp;
            if(current->left) mp.push(current->left);
            if(current->right) mp.push(current->right);
        }
    }
