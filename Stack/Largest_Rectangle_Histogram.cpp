#include <iostream>
using namespace std;

int main() {
    int height[6] = {2, 1, 5, 6, 2, 3};

    int stack[6];
    int top = -1;

    int maxArea = 0;

    for (int i = 0; i <= 6; i++) {

        int currentHeight;

        if (i == 6) {
            currentHeight = 0;
        }
        else {
            currentHeight = height[i];
        }

        while (top >= 0 &&
               height[stack[top]] > currentHeight) {

            int h = height[stack[top]];
            top--;

            int width;

            if (top == -1) {
                width = i;
            }
            else {
                width = i - stack[top] - 1;
            }

            int area = h * width;

            if (area > maxArea) {
                maxArea = area;
            }
        }

        if (i < 6) {
            stack[++top] = i;
        }
    }

    cout << "Largest Rectangle Area: " << maxArea << endl;

    return 0;
}