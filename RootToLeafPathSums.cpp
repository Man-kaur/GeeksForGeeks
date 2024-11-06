int traversal(Node *node, int base){
        if(node == nullptr) return 0;
        
        base = base * 10 + node->data;
            
        if(node->left==nullptr && node->right==nullptr) return base;
        
        int left = traversal(node->left, base);
        int right = traversal(node->right, base);
        
        return left + right;
    }
    int treePathsSum(Node *root) {
        return traversal(root,0);
    }
