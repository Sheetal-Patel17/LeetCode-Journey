#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char str[], int start, int end) {
    if (start >= end)
        return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[] = "HELLO";

    int length = strlen(str);

    reverseString(str, 0, length - 1);

    cout << "Reversed String: " << str;

    return 0;
}
