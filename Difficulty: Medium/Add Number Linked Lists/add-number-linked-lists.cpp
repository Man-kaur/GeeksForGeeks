//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node* reverse(Node* head){
        Node* r = nullptr;
        Node* q= nullptr;
        Node* curr = head;
        while(curr){
            r = q;
            q = curr;
            curr= curr->next;
            q->next = r;
        }
        head=q;
        return head;
    }
    Node* insert(Node* head, int data){
        Node* newNode = new Node(data);
        if(!head){
            head = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
    
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        Node* list1 = reverse(num1);
        Node* list2 = reverse(num2);
        Node* head = nullptr;
        int carry = 0;
        while (list1 || list2 || carry) {
            int sum = carry;
            if (list1) {
                sum += list1->data;
                list1 = list1->next;
            }
            if (list2) {
                sum += list2->data;
                list2 = list2->next;
            }

            carry = sum / 10;
            head = insert(head, sum % 10);
        }
        if(head->data ==0){
            while(head->data==0 && head->next){
                head=head->next;
            }
        }
        return head;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends