// DAMIA DIYAANA BINTI DAHLAN
// MATRIC NUMBER : 23303607

#include <iostream>
#include <vector>
#include <iomanip>

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
        {"Samsung A12", 799.00},
        {"Panasonic Smart TV", 799.00},
        {"PS5", 3849.00},
        {"Smart Watch", 189.00},
        {"Lenovo ThinkPad Laptop", 2899.00},
        {"IPhone 17 Pro", 5599.00},
        {"Phone case", 29.00},
        {"Charging Cable Type C", 15.00 },
        {"Earbud", 49.00},
        {"Power Bank", 59.00 },
        {"Keyboard and mouse", 89.00 },
        {"Mousepad", 25.00},
        {"Sony Speaker", 399.00 },
        {"Wired Earphones", 12.00},
        {"Sound Equipment", 1299.00},
        {"Resistor (5 ohms)", 3.99},
        {"Capasitor (1 F)", 3.99 },
        {"Lithium Battery", 5.99 },
        {"LED Light", 2.99},
        {"Buzzer", 2.99},
        {"Transistor", 2.99},
        {"Switch", 1.99 },
        {"Relay",4.99 },
        {"Connecting Wire", 0.99 },
        {"PCB Board", 1.99},
        {"Breadboard", 1.49 },
        {"Soldering Equipment", 24.99 }
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
