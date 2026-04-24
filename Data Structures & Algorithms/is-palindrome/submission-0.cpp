class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string cleanString;
        for(unsigned char x : s){
            if (isalnum(x)) cleanString += tolower(x);
        }
        string reverse;
        for(int i = cleanString.size()-1; i >= 0; i--){
             reverse += cleanString[i];
        }

        for(int i =0; i<cleanString.size(); i++){
            if(cleanString[i] != reverse[i]) return false;
        }
        return true;
    }
};
