// Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void traverse(Node* root, vector<int> &res){
        if(root==nullptr) return;
        res.push_back(root->data);
        traverse(root->left, res);
        traverse(root->right, res);
    }
    vector<int> merge(Node *root1, Node *root2) {
        vector<int> res;
        traverse(root1, res);
        traverse(root2, res);
        sort(res.begin(), res.end());
        return res;
    }
