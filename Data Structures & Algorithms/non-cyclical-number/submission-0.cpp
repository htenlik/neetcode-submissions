class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(true){
            int x = calc(n);
            if (x == 1) return true;
            else{
                if (st.find(x) != st.end()) {
                    return false;
                }
                st.insert(x);
                n = x;
            }
        }
    }
private:
    int calc(int n){
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }
};
