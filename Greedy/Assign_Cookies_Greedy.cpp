#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int children[] = {1, 2, 3};
    int cookies[] = {1, 1};

    int n = 3;
    int m = 2;

    sort(children, children + n);
    sort(cookies, cookies + m);

    int child = 0;
    int cookie = 0;
    int satisfied = 0;

    while (child < n && cookie < m) {

        if (cookies[cookie] >= children[child]) {
            satisfied++;
            child++;
        }

        cookie++;
    }

    cout << "Satisfied Children: " << satisfied;

    return 0;
}
