//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

int countDistinctSubstring(string s);

int main()
{
 int t,l,i,j;
 int temp;
    cin>>t;
 while(t--){
 string s;
  cin>>s;
  cout<<countDistinctSubstring(s)<<endl;

 
cout << "~" << "\n";
}
}


// } Driver Code Ends


class TrieNode {
public:
    bool isWord;
    TrieNode* child[26];

    TrieNode()
    {
        isWord = 0;
        for (int i = 0; i < 26; i++) {
            child[i] = 0;
        }
    }
    
    ~TrieNode() {
        // Recursively delete all child nodes
        for (int i = 0; i < 26; i++) {
            if (child[i] != NULL) {
                delete child[i];
                child[i] = NULL;
            }
        }
    }
};

int countDistinctSubstring(string str)
{
    TrieNode* head = new TrieNode();

    // will hold the count of unique substrings
    int count = 0;
    // included count of substr " "

    for (int i = 0; i < str.length(); i++) {
        TrieNode* temp = head;

        for (int j = i; j < str.length(); j++) {
            // when char not present add it to the trie
            if (temp->child[str[j] - 'a'] == NULL) {
                temp->child[str[j] - 'a'] = new TrieNode();
                temp->isWord = 1;
                count++;
            }
            // move on to the next char
            temp = temp->child[str[j] - 'a'];
        }
    }
    delete head;
    return count+1;
}

// class TrieNode{
//     public:
//     bool isWord;
//     TrieNode* alpha[26];
    
//     TrieNode(){
//         isWord = 0;
//         for(int i=0; i<26;i++){
//             alpha[i] = 0;
//         }
//     }
// };

// int countDistinctSubstring(string s)
// {
//     //Your code here
//     TrieNode* head = new TrieNode();
//     int count = 1;
    
//     for(int i=0;i<s.length();i++){
//         TrieNode* temp = head;
        
//         for(int j=i;j<s.length();j++){
//             if(temp->alpha[s[j]-'a'] == NULL){
//                 temp->alpha[s[j]-'a'] = new TrieNode();
//                 temp->isWord = 1;
//                 count++;
//             }
//             temp = temp->alpha[s[j]-'a'];
//         }
//     }
    
//     return count;
// }