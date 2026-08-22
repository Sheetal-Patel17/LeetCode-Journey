#include <iostream>
using namespace std;

class HashTable {
private:
    int table[10];

public:
    HashTable() {
        for (int i = 0; i < 10; i++)
            table[i] = -1;
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
        int start = index;

        while (table[index] != -1) {
            if (table[index] == key)
                return true;

            index = (index + 1) % 10;

            if (index == start)
                break;
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

    ht.display();

    cout << "Search 25: ";

    if (ht.search(25))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
