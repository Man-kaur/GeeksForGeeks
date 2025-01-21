//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:

    Node *reverseKGroup(Node *head, int k) {
        // code here
        
        if(!head || k == 1 || !head->next) return head;
        
        Node* x = new Node(-1);
        x->next = head;
        
        Node* prev_end = x;
        while(true) {
            Node* start = prev_end->next;
            Node* end = start;
            for (int i = 0; i < k; i++) {
                if (!end) {
                    Node* next_start = nullptr;
                    pair<Node*, Node*> reversed = reverse(start, nullptr);
                    Node* new_start = reversed.first;
                    Node* new_end = reversed.second;

                    prev_end->next = new_start;
                    return x->next;
                }
                end = end->next;
            }
            
            Node* next_start = end;
            pair<Node*, Node*> reversed = reverse(start, end);
            Node* new_start = reversed.first;
            Node* new_end = reversed.second;
            
            new_end->next = next_start;
            prev_end->next = new_start;
            prev_end = new_end;
        }
        
        return x->next;
    }
  private:
    pair<Node*, Node*> reverse(Node* start, Node* end) {
        Node* new_end = start;
        Node* prev = nullptr, *cur = start, *nxt = nullptr;
        
        while(cur != end) {
            nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        
        return {prev, new_end};
    }
};



//{ Driver Code Starts.

/* Driver program to test above function*/
int main(void) {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.reverseKGroup(head, k);
        printList(head);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends