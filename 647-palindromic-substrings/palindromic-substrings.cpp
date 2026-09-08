class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                bool palindrome = true;

                for (int k = i; k <= j; k++) {
                    if (s[k] != s[j - (k - i)]) {
                        palindrome = false;
                        break;
                    }
                }

                if (palindrome) {
                    count++;
                }
            }
        }

        return count;
    }
};