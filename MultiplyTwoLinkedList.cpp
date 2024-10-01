class solution {
  public:
  const int MOD = 1000000007;
    long long traversal(Node *node){
        string str;
        while(node){
            str += to_string(node->data);
            node = node->next;
        }
        // cout<<str;
        long long res = stoll(str);
        return res;
    }
    long long multiplyTwoLists(Node *first, Node *second) {
        return (traversal(first) * traversal(second))%MOD;
    }
};
