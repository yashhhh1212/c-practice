#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string t;

    getline(cin, s);
    getline(cin, t);

    int n = s.length();
    bool found = true;

    if (s.length() != t.length()) {
        found = false;
    }
    else {
        for (int i = 0; i < n; i++) {

            int count1 = 0;
            int count2 = 0;

            for (int j = 0; j < n; j++) {
                if (s[j] == s[i]) {
                    count1++;
                }
            }

            for (int k = 0; k < n; k++) {
                if (t[k] == s[i]) {
                    count2++;
                }
            }

            if (count1 != count2) {
                found = false;
                break;
            }
        }
    }

    if (found == true) {
        cout << "Anagram";
    }
    else {
        cout << "Not an anagram";
    }

    return 0;
}
