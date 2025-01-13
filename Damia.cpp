// DAMIA DIYAANA BINTI DAHLAN
// MATRIC NUMBER : 23303607

#include <iostream>
#include <vector>
#include <iomanip>
#include "faiz.cpp"
using namespace std;

// Structure to represent an item
struct Item {
    string name;
    double price;
};

// Function to display the list of items
void displayItems(const vector<Item>& items) {
    cout << "\nAvailable Items:" << endl;
    cout << left << setw(5) << "No." << setw(20) << "Item" << "Price (RM)" << endl;
    cout << "--------------------------------------" << endl;
    for (size_t i = 0; i < items.size(); ++i) {
        cout << left << setw(5) << i + 1 << setw(20) << items[i].name << fixed << setprecision(2) << items[i].price << endl;
    }
}

int main() {
    // List of items
    vector<Item> items = {
        {"Samsung A12", Gadget [0][0]},
        {"Panasonic Smart TV", Gadget [1][0]},
        {"PS5", Gadget [2][0]},
        {"Smart Watch", Gadget [3][0]},
        {"Lenovo ThinkPad Laptop", Gadget [4][0]},
        {"IPhone 17 Pro", Gadget [5][0]},
        {"Phone case", Accesories [6][0]},
        {"Charging Cable Type C", Accesories[7][0] },
        {"Earbud", Accesories [8][0]},
        {"Power Bank", Accesories [9][0] },
        {"Keyboard and mouse", Accesories [10][0] },
        {"Mousepad", Accesories [11][0]},
        {"Sony Speaker", Accesories [12][0]},
        {"Wired Earphones", Accesories [13][0]},
        {"Sound Equipment", Accesories [14][0]},
        {"Resistor (5 ohms)", Component [15][0]},
        {"Capasitor (1 F)", Component [16][0]},
        {"Lithium Battery", Component [17][0]},
        {"LED Light", Component [18][0]},
        {"Buzzer", Component [19][0]},
        {"Transistor", Component [20][0]},
        {"Switch", Component [21][0]},
        {"Relay", Component [22][0]},
        {"Connecting Wire", Component [23][0]},
        {"PCB Board", Component [24][0]},
        {"Breadboard", Component [25][0]},
        {"Soldering Equipment", Component [26][0]}
     };

    vector<Item> cart; // Items selected by the user
    int choice;

    cout << "Welcome to the store!" << endl;

    // Loop for user to select items
    do {
        displayItems(items);
        cout << "\nEnter the number of the item to add to your cart (0 to checkout): ";
        cin >> choice;

        if (choice > 0 && choice <= static_cast<int>(items.size())) {
            cart.push_back(items[choice - 1]);
            cout << items[choice - 1].name << " has been added to your cart." << endl;
        } else if (choice != 0) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    // Display the total bill
    if (!cart.empty()) {
        double total = 0.0;
        cout << "\nItems in your cart:" << endl;
        cout << left << setw(20) << "Item" << "Price (RM)" << endl;
        cout << "-------------------------------" << endl;
        for (const auto& item : cart) {
            cout << left << setw(20) << item.name << fixed << setprecision(2) << item.price << endl;
            total += item.price;
        }
        cout << "-------------------------------" << endl;
        cout << "Total: RM" << fixed << setprecision(2) << total << endl;
    } else {
        cout << "\nYour cart is empty." << endl;
    }

    cout << "\nThank you for shopping with us!" << endl;

    return 0;
}
