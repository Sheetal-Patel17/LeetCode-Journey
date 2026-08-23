#include <iostream>
using namespace std;

class HashTable {
private:
    int table[10];

public:
    HashTable() {
        for (int i = 0; i < 10; i++) {
            table[i] = -1;
        }
    }

    void insert(int key) {
        int index = key % 10;

        while (table[index] != -1) {
            index = (index + 1) % 10;
        }

        table[index] = key;
    }

    bool search(int key) {
        int index = key % 10;

        while (table[index] != -1) {
            if (table[index] == key) {
                return true;
            }

            index = (index + 1) % 10;
        }

        return false;
    }

    void display() {
        for (int i = 0; i < 10; i++) {
            cout << i << " -> " << table[i] << endl;
        }
    }
};

int main() {
    HashTable ht;

    ht.insert(10);
    ht.insert(20);
    ht.insert(25);
    ht.insert(35);

    cout << "Hash Table:" << endl;
    ht.display();

    cout << endl;

    if (ht.search(25)) {
        cout << "25 Found" << endl;
    } else {
        cout << "25 Not Found" << endl;
    }

    if (ht.search(50)) {
        cout << "50 Found" << endl;
    } else {
        cout << "50 Not Found" << endl;
    }

    return 0;
}
