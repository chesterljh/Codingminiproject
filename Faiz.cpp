//Name:AHMAD FAIZZUDDIN BIN FAKHRUL ANWAR
//MATRICS:23303878

#include <iostream>
#include <string.h>
#include <iomanip>
#include "main.hpp"
using namespace std;



void store::EmployeeUI()          // also set ni ke void employeesystem()
{
    string username;
    int password, truepassword = 4231 ;
    int stopemployeefunction;
    
    do
    {
        cout << "Please insert username:\n";
        cin>>username;
        cout << "Please insert password:\n";
        cin >> password;
        cin.clear();
        cin.ignore(10000,'\n');

        
        if(password != truepassword)
        {
            cout << " Your password is incorrect\n";
        } 
    }
    while(password != truepassword);
    for(;;)
    {
    cout <<"Welcome " << username << endl;   // all empolyee function will be underhere
    int selector;
    cout <<"Please select task\n";
    cout <<"1.Price changer\n";
    cout <<"2.Stock changer\n";
    cout <<"3.Display stock\n";
    cout <<"Select 0 to stop\n";
    cin >>selector;

    switch (selector)
    {
    case 1:
        startpricechanger();
        break;
    case 2:
        stockupdate();
        break;
    case 3:
        checkstocks();
        break; 
    case 0:
        cout<< "See you again\n";
        cout<<"\n";
        cout<<"\n";
        return;
        break;                       //chester nanti tukar ni ke return;
    default:
        cout << "Invalid choice";
        break;
    }
    }                           // if necessary ill do the hpp file for all so no worry
}




