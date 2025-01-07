//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int count=0,n=arr.size();
        int l=0,r=n-1;
        
        while(l<r){
            int sum=arr[l]+arr[r];
            
            if(sum==target){
                if(arr[l]==arr[r]){
                    count+=((r-l)*(r-l+1))/2;
                    break;
                } else {
                    int cnt1=1,cnt2=1;
                    while(arr[l]==arr[l+1] && l+1<r){
                        l++;
                        cnt1++;
                    }
                    
                    while(arr[r]==arr[r-1] && l<r-1){
                        r--;
                        cnt2++;
                    }
                    l++,r--;
                    count+=(cnt1*cnt2);
                }
                } else if(sum<target){
                    l++;
                } else{
                    r--;
                }
            }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends