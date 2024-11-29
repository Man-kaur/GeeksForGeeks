string addBinary(string& s1, string& s2) {
        // your code here
        int i = s1.length() - 1, j = s2.length() - 1;
        int carry  = 0;
        string res = "";
        
        while(i>=0 || j>=0 || carry==1){
            int d1 = (i>=0) ? s1[i--] - '0' : 0;
            int d2 = (j>=0) ? s2[j--] - '0' : 0;
            
            int sum = d1+d2+carry;
            res.push_back((sum%2) + '0');
            carry = sum/2;
        }
        
        reverse(res.begin(), res.end());
        int start = res.find('1');
        if (start == string::npos) return "0"; // If no '1' is found, return "0"
        return res.substr(start);
    }
