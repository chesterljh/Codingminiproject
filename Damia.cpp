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
struct store::Item
{
    string name;
    double price;
    double stock;
    Item(string a, double b, double c):
        name(move(a)),
        price(b),
        stock(c) 
    {}
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
    vector<Item> itemsG, itemsA, itemsC;
    string name;
    double price;
    int stock;
    ifstream inputG("Gadgets.txt");
    while (inputG>>name>>price>>stock)
    {
        itemsG.emplace_back(name,price,stock);
    }
    inputG.close();
    ifstream inputA("Accessories.txt");
    while (inputA>>name>>price>>stock)
    {
        itemsA.emplace_back(name,price,stock);
    }
    inputA.close();
    ifstream inputC("Components.txt");
    while (inputC>>name>>price>>stock)
    {
        itemsC.emplace_back(name,price,stock);
    }
    inputC.close();

    vector<Item> cart; // Items selected by the user
    int choice, cat;
    
    cout << "Welcome to the store!" << endl;

    // Loop for user to select items
    ofstream output;
    ofstream read;
    output.open("Receipt.txt");
    read.open("Receipt2.txt");
    do {
        cout<<"Select category of Item:\n"
            <<"1. Gadget\n"
            <<"2. Accessories\n"
            <<"3. Components\n"
            <<"> ";
        cin>>cat;
        switch (cat)
        {
        case 1:
        displayItems(itemsG);
        cout << "\nEnter the number of the item to add to your cart (0 to checkout): ";
        cin >> choice;
        if (choice > 0 && choice <= static_cast<int>(itemsG.size())) {
            
            cart.push_back(itemsG[choice - 1]);
            cout << itemsG[choice - 1].name << " has been added to your cart." << endl;            
            output << " " << itemsG[choice - 1].name;
            read << itemsG[choice - 1].price << " ";
            Gadget[choice-1][1] -= 1;
            
        } else if (choice != 0) {
            cout << "Invalid choice. Please try again." << endl;
        }
            break;
        
        case 2:
        displayItems(itemsA);
        cout << "\nEnter the number of the item to add to your cart (0 to checkout): ";
        cin >> choice;
        if (choice > 0 && choice <= static_cast<int>(itemsA.size())) {
            
            cart.push_back(itemsA[choice - 1]);
            cout << itemsA[choice - 1].name << " has been added to your cart." << endl;            
            output << " " << itemsA[choice - 1].name;
            read << itemsA[choice - 1].price << " ";
            Accesories[choice-1][1] -= 1;

        } else if (choice != 0) {
            cout << "Invalid choice. Please try again." << endl;
        }
            break;

        case 3:
        displayItems(itemsC);
        cout << "\nEnter the number of the item to add to your cart (0 to checkout): ";
        cin >> choice;
        if (choice > 0 && choice <= static_cast<int>(itemsC.size())) {
            
            cart.push_back(itemsC[choice - 1]);
            cout << itemsC[choice - 1].name << " has been added to your cart." << endl;            
            output << " " << itemsC[choice - 1].name;
            read << itemsC[choice - 1].price << " ";
            Component[choice-1][1] -= 1;
            
        } else if (choice != 0) {
            cout << "Invalid choice. Please try again." << endl;
        }
            break;
       
        }
        
        
        
    } while (cat != 0);
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
