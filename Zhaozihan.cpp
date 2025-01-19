#include <iostream>
#include <iomanip>
#include <fstream>
#include "main.hpp"
#include "universal.hpp"
using namespace std;

void store::receipt()
{
    int confirm;
    double total = 0.0;
    cout << "FAIZ ELECTRONICS ENTERPRISE" << endl;
    cout << "========================================" << endl;
    cout << left << setw(20) << "Items" << right << setw(20) << "Prices" << endl;
    cout << "========================================" << endl;

    ifstream input("Receipt.txt");
    ifstream read("Receipt2.txt");
    string itemName; 
    double itemPrice;

    for(int x=0;!input.eof();x++)
    {
        input >> itemName;
        read >> itemPrice;
        cout << left << setw(20) << itemName << right << setw(20) << setprecision(2) << itemPrice << endl;
        total += itemPrice;

    }
    input.close();
    read.close();
    cout << "========================================" << endl;
    cout << left << setw(20) << "Total Price:" << right << setw(20) << total << endl;
    cout << " " << endl;
}

