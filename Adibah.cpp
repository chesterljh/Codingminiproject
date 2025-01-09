//Name: NUR ADIBAH BINTI WAN ABDUL SHUKOR
//Matrics no: 23300713

#include <iostream>
using namespace std;

// Function to increase the price of an item
void increasePrice(float &price, float amount) {
    price += amount;
    cout << "Price increased by " << amount << ". New price: RM " << price << endl;
}

// Function to decrease the price of an item
void decreasePrice(float &price, float amount) {
    if (price >= amount) {
        price -= amount;
        cout << "Price decreased by " << amount << ". New price: RM " << price << endl;
    } else {
        cout << "Not enough price to decrease by " << amount << endl;
    }
}

int main() {
    float price;  // Variable to store the price of the item
    int choice;
    float amount;

    // Asking the user to input the current price of the item
    cout << "Enter the current price of the item: RM ";
    cin >> price;  // User inputs the current price

    while (true) {
        // Display menu to the user
        cout << "\nChoose an action:" << endl;
        cout << "1. Increase price" << endl;
        cout << "2. Decrease price" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount to increase the price: RM ";
            cin >> amount;
            increasePrice(price, amount);
        } else if (choice == 2) {
            cout << "Enter amount to decrease the price: RM ";
            cin >> amount;
            decreasePrice(price, amount);
        } else if (choice == 3) {
            cout << "Exiting the store system." << endl;
            break;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
