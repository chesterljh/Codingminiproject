#include <iostream>
#include <map>
#include <string>
using namespace std;
void itemlocator() {
for(;;){
    map<string, int,string> supermarketItems;

    
    supermarketItems["Samsung phone A12"] = 1;
    supermarketItems["Smart Panasonic tv"] = 2;
    supermarketItems["Ps5"] = 3;
    supermarketItems["Smart watch"] = 4;
    supermarketItems["Laptop (Lenovo thinkpad)"] = 5;
    supermarketItems["Iphone 17 pro"] = 6;
    supermarketItems["Phone case"] = 7;
    supermarketItems["Charging cable type C"] = 8;
    supermarketItems["Earbud"] = 9;
    supermarketItems["Power bank"] =10 ;
    supermarketItems["Keyboard and mouse"] = 11;
    supermarketItems["Mouse Pad"] = 12;
    supermarketItems["Sony speaker"] = 13;
    supermarketItems["Wired earphone"] = 14;
    supermarketItems["Sound equipment"] = 15;
    supermarketItems["Resistor (5 ohm)"] = 16;
    supermarketItems["Capacitor(1 f)"] = 17;
    supermarketItems["Battery lithium"] = 18;
    supermarketItems["Led light"] = 19;
    supermarketItems["Buzzer"] = 20;
    supermarketItems["Transistor"] = 21;
    supermarketItems["Switch"] = 22;
    supermarketItems["Relay"] = 23;
    supermarketItems["Connecting wire"] = 24;
    supermarketItems["PCB board"] = 25;
    supermarketItems["Bread board"] = 26;
    supermarketItems["Soldering equipment"] = 27;

    
    string userInput;
    cout << "Welcome to the Faiz Electronic\n\n";
    cout << "This is item locator system to asist customer to track your wanted item\n\n";
    cout << "So may i know you what are you searching for?: ";
    getline(cin, userInput);

    
    for (auto &c : userInput) {
        c = tolower(c);
    }

    bool itemFound = false;
    for (const auto &item : supermarketItems) {
        string itemName = item.first;
        
        for (auto &c : itemName) {
            c = tolower(c);
        }
        if (itemName == userInput) {
            cout << "\n\nThe item \"" << item.first << "\" is located on rack number " << item.second << ".\n\n";
            cout << "********************************************************************************* \n\n";
            itemFound = true;
            break;
        }
    }

    if (!itemFound) {
        cout << "\n\nSorry, the item \"" << userInput << "\" is not available.THANK YOU AND PLEASE COME AGAIN \n\n";
        cout << "********************************************************************************* \n\n";
    }
}
}
