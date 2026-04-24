class Solution {
public:
    bool isAnagram(string s, string t) {
  if (s.length()!=t.length()) return false;


        unordered_map<char,int> deniz;
        for (int i = 0;i<s.length();i++) {
            deniz[s[i]]++;
        }
        unordered_map<char,int> deniz2;

        for (int i = 0;i<t.length();i++) {

            deniz2[t[i]]++;

        }
        if (deniz==deniz2) return true;
        return false;    }
};
