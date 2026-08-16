#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s = "A man, a plan, a canal: Panama";

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        while (left < right && !isalnum(s[left])) {
            left++;
        }

        while (left < right && !isalnum(s[right])) {
            right--;
        }

        if (tolower(s[left]) != tolower(s[right])) {
            cout << "Not Palindrome";
            return 0;
        }

        left++;
        right--;
    }

    cout << "Palindrome";

    return 0;
}