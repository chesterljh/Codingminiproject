#include <iostream>
#include "main.hpp"
#include "universal.hpp"
using namespace std;

void store::operations(int categorieselect)
{
        double price,pricecondition;
        int itemselect1=0;

    switch (categorieselect)
    {
        
    case 1:
        cout <<"1.Samsung phone A12\n";
        cout <<"2.Smart Panasonic tv\n";
        cout <<"3. PS5\n";
        cout <<"4.Smart TV\n";
        cout <<"5.Laptop (Lenovo thinkpad)\n";
        cout <<"6.Iphone 17 Pro\n";

        cin >> itemselect1;

        cout << "Enter new price\n";
        cin >> price;

        cout <<"The price of RM" << Gadget[0][itemselect1] << " will be replace with RM";
        cout << price<<endl;

        cout << "Select true or false\n";
        cout <<"1. True\n";
        cout <<"2. False\n";
        cin >> pricecondition;
        

        if (pricecondition == 1)
        {
            Gadget[0][itemselect1] = price;
            cout << "Update succesfull";
        }
        else 
        {
            cout <<"Action canceled......";
        }
        break;

        case 2:
        cout << "Please select the item:\n";
        cout << "1.Phone case\n";
        cout << "2.Charging cable type C\n";
        cout << "3.Earbud \n";
        cout << "4.Power bank\n";
        cout << "5.Keyboard and mouse\n";
        cout << "6.Mouse Pad\n";
        cout << "7.Sony speaker\n";
        cout << "8.Wired earphone\n";
        cout << "9.Sound equipment\n";

        cin >> itemselect1;

        cout << "Enter new price\n";
        cin >> price;

        cout <<"The price of RM" << Accesories[itemselect1][0] << " will be replace with RM";
        cout << price<<endl;

        cout << "Select true or false\n";
        cout <<"1. True\n";
        cout <<"2. False\n";
        cin >> pricecondition;

        if (pricecondition == 1)
        {
            Accesories[itemselect1][0] = price;
            cout << "Update succesfull";
        }
        else 
        {
            cout <<"Action canceled......";
        }
        break;
        case 3:
         cout << "Please select the item:\n";
        cout << "1.Resistor (5 ohm)\n";
        cout << "2.Capacitor(1 f)\n";
        cout << "3.Battery lithium \n";
        cout << "4.Led light\n";
        cout << "5.Buzzer\n";
        cout << "6.Transistor\n";
        cout << "7.Switch\n";
        cout << "8.Relay\n";
        cout << "9.Connecting wire\n";
        cout << "10.PCB board\n";
        cout << "11.Bread board\n";
        cout << "12.Soldering equipment\n";
        cin >> itemselect1;

        cout << "Enter new price\n";
        cin >> price;

        cout <<"The price of RM" << Component[itemselect1][0] << " will be replace with RM";
        cout << price<<endl;

        cout << "Select true or false\n";
        cout <<"1. True\n";
        cout <<"2. False\n";
        cin >> pricecondition;

        if (pricecondition == 1)
        {
            Component[itemselect1][0] = price;
            cout << "Update succesfull";
        }
        else 
        {
            cout <<"Action canceled......";
        }
        break;
    
    default:
    cout << "Invalid option";
        break;
    }
}