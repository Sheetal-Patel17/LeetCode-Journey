#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char str[], int left, int right) {

    while (left < right) {
        if (str[left] != str[right])
            return false;

        left++;
        right--;
    }

    return true;
}

void partition(char str[], int start,
               char current[], int index) {

    int n = strlen(str);

    if (start == n) {
        current[index] = '\0';
        cout << current << endl;
        return;
    }

    for (int end = start; end < n; end++) {

        if (isPalindrome(str, start, end)) {

            for (int i = start; i <= end; i++)
                current[index++] = str[i];

            current[index++] = '|';

            partition(str, end + 1, current, index);

            index -= (end - start + 1);
            index--;
        }
    }
}

int main() {
    char str[] = "aab";
    char current[20];

    cout << "Palindrome Partitions:" << endl;

    partition(str, 0, current, 0);

    return 0;
}
