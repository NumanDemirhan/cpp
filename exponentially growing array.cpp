#include <iostream>
#include <string>

using namespace std;

struct Item {
    string name;
};

int main() {
    int capacity = 2;
    int currentCount = 0;

    Item* inventory = new Item[capacity];

    string input;
    cout << "Enter item names (type 'quit' to stop):" << endl;

    while (true) {
        cout << "> ";
        getline(cin, input);

        if (input == "quit") break;

        if (currentCount == capacity) {
            cout << "!!! Capacity full (" << capacity << "), expanding..." << endl;

            int newCapacity = capacity * 2;
            Item* newInventory = new Item[newCapacity];
            for (int i = 0; i < capacity; i++) {
                newInventory[i] = inventory[i];
            }

            delete[] inventory;
            inventory = newInventory;
            capacity = newCapacity;
        }

        inventory[currentCount].name = input;
        currentCount++;
    }

    cout << "\n--- FULL INVENTORY (" << currentCount << "/" << capacity << ") ---" << endl;
    for (int i = 0; i < currentCount; i++) {
        cout << i + 1 << ". " << inventory[i].name << endl;
    }

    delete[] inventory;
    inventory = nullptr;

    return 0;
}

