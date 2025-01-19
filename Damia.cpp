// DAMIA DIYAANA BINTI DAHLAN
// MATRIC NUMBER : 23303607

#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include "main.hpp"
#include "universal.hpp"
using namespace std;

// Structure to represent an item
struct store::Item {
    string name;
    double price;
};

// Function to display the list of items
void store::displayItems(const vector<Item>& items) {
    cout << "\nAvailable Items:" << endl;
    cout << left << setw(5) << "No." << setw(20) << "Item" << "Price (RM)" << endl;
    cout << "--------------------------------------" << endl;
    for (size_t i = 0; i < items.size(); ++i) {
        cout << left << setw(5) << i + 1 << setw(20) << items[i].name << fixed << setprecision(2) << items[i].price << endl;
    }
}

int store::Buying() {
    // List of items
    vector<Item> items = {
        {"Samsung_A12", Gadget [0][0]},
        {"Panasonic_Smart_TV", Gadget [1][0]},
        {"PS5", Gadget [2][0]},
        {"Smart_Watch", Gadget [3][0]},
        {"Lenovo_ThinkPad_Laptop", Gadget [4][0]},
        {"IPhone_17_Pro", Gadget [5][0]},
        {"Phone_case", Accesories [6][0]},
        {"Charging_Cable_Type_C", Accesories[7][0] },
        {"Earbud", Accesories [8][0]},
        {"Power_Bank", Accesories [9][0] },
        {"Keyboard_and_mouse", Accesories [10][0] },
        {"Mousepad", Accesories [11][0]},
        {"Sony_Speaker", Accesories [12][0]},
        {"Wired_Earphones", Accesories [13][0]},
        {"Sound_Equipment", Accesories [14][0]},
        {"Resistor (5 ohms)", Component [15][0]},
        {"Capasitor (1 F)", Component [16][0]},
        {"Lithium_Battery", Component [17][0]},
        {"LED_Light", Component [18][0]},
        {"Buzzer", Component [19][0]},
        {"Transistor", Component [20][0]},
        {"Switch", Component [21][0]},
        {"Relay", Component [22][0]},
        {"Connecting_Wire", Component [23][0]},
        {"PCB_Board", Component [24][0]},
        {"Breadboard", Component [25][0]},
        {"Soldering_Equipment", Component [26][0]}
     };

    vector<Item> cart; // Items selected by the user
    int choice;

    cout << "Welcome to the store!" << endl;

    // Loop for user to select items
    ofstream output;
    ofstream read;
    output.open("Receipt.txt");
    read.open("Receipt2.txt");
    do {
        displayItems(items);
        cout << "\nEnter the number of the item to add to your cart (0 to checkout): ";
        cin >> choice;

        if (choice > 0 && choice <= static_cast<int>(items.size())) {
            cart.push_back(items[choice - 1]);
            output << " " << items[choice - 1].name;
            read << items[choice - 1].price << " ";
            cout << items[choice - 1].name << " has been added to your cart." << endl;
        } else if (choice != 0) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
    output.close();
    read.close();

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
