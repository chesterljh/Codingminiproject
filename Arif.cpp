//Name: MUHAMMAD ARIFF FIRDAUS BIN MUHAMMAD FAUZI
//MATRICS: 23304142

#include <iostream>
#include <string.h>
#include <iomanip>
#include "main.hpp"
#include "universal.hpp"
#include <fstream>
using namespace std;


void store::checkstocks()
{   
    int selection; 
    string gadget[6][2], accesories[9][2],  component[12][2];

    int loopingcondition;
    do{
    int selection;
    string gadget[6][2] = {{"Samsung A12"}, {"Samsung Panasonic TV"}, {"Ps5"}, {"Smartwatch"}, {"Laptop"}, {"Iphone 17 Pro"}};
    string accesories[9][2] = {{"Phone Case"}, {"Charging Cable Type"}, {"Earbud"}, {"Powerbank"}, {"Keyboard & Mouse"}, {"Mousepad"}, {"Sony Speaker"}, {"Wired Headphone"}};  
    string component[12][2] = {{"Resistor"},{"Capacitor"},{"Lithium Battery"},{"LED Light"},{"Buzzer"},{"Transistor"},{"Switch"},{"Relay"},{"Connecting Wire"},{"PCB Board"},{"Breadboard"},{"Soldering Equipment"}};    


    cout << "\n[1] Gadgets";
    cout << "\n[2] Accesories";
    cout << "\n[3] Components";
    cout << "\n "; 
    cout << "\nPlease pick a category: ";
    cin >> selection;
    cout << " " << endl;

    displayStock(selection,Gadget,Accesories,Component,gadget,accesories,component);
    
    cout<<"Do you wish to continue?\n";
    cout<<"1.Yes\n2.No\n";
    cin>>loopingcondition;
    }
    while (loopingcondition==1);
    {
        return;
    }
    
}

void store::displayStock(int selection, double Gadget[6][2], double Accesories[9][2], double Component[12][2], string gadget[6][2], string accesories[9][2], string component[12][2])
{
    int i,j;

    switch(selection)
    {
        case 1:
        {
            cout << "GADGETS" << endl;
            cout << "========================================" << endl;
            cout << left << setw(20) << "Items" << right << setw(20) << "Stocks" << endl;
            cout << "========================================" << endl;
            for(i=0;i<6;i++)
            {
                cout << left << setw(20) << gadget[i][0] << right << setw(10) << "|" << right << setw(10) << Gadget[i][1] << endl;
            }
            break;
        }
        case 2:
        {
            cout << "ACCESORIES" << endl;
            cout << "========================================" << endl;
            cout << left << setw(20) << "Items" << right << setw(20) << "Stocks" << endl;
            cout << "========================================" << endl;
            for(i=0;i<9;i++)
            {
                cout << left << setw(20) << accesories[i][0] << right << setw(10) << "|" << right << setw(10) << Accesories[i][1] << endl;
            }
            break;
        }
        case 3:
        {
            cout << "COMPONENTS" << endl;
            cout << "========================================" << endl;
            cout << left << setw(20) << "Items" << right << setw(20) << "Stocks" << endl;
            cout << "========================================" << endl;
            for(i=0;i<12;i++)
            {
                cout << left << setw(20) << component[i][0] << right << setw(10) << "|" << right << setw(10) << Component[i][1] << endl;
            }
            break;
        }
    }
}



