#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "listen";
    string t = "silent";

    if (s.length() != t.length()) {
        cout << "Not Anagram";
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}