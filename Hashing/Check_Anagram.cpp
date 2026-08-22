#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool checkAnagram(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    unordered_map<char, int> frequency;

    for (char c : s1)
        frequency[c]++;

    for (char c : s2) {
        frequency[c]--;

        if (frequency[c] < 0)
            return false;
    }

    return true;
}

int main() {
    string s1 = "listen";
    string s2 = "silent";

    if (checkAnagram(s1, s2))
        cout << "Anagram" << endl;
    else
        cout << "Not Anagram" << endl;

    return 0;
}
