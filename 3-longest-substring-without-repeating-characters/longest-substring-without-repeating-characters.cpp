class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int longest = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                bool repeat = false;

                for (int k = i; k < j; k++) {
                    if (s[k] == s[j]) {
                        repeat = true;
                        break;
                    }
                }

                if (repeat)
                    break;

                int len = j - i + 1;

                if (len > longest) {
                    longest = len;
                }
            }
        }

        return longest;
    }
};