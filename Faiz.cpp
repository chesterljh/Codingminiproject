//Name:AHMAD FAIZZUDDIN BIN FAKHRUL ANWAR
//MATRICS:23303878

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


void userandpassword()
{
    string username;
    int password, truepassword = 4231 ;
    
    do
    {
        cout << "Please insert username:\n";
        getline(cin,username);
        cout << "Please insert password:\n";
        cin >> password;

        
        if(password != truepassword)
        {
            cout << " Your password is incorrect\n";
        } 
    }
    while(password != truepassword);
    
    cout <<"Welcome " << username << endl;   // all empolyee function will be underhere
    stockupdate();
    
    return 0;                                // if necessary ill do the hpp file for all so no worry


}


void stockupdate()                                     //stock level function
{
    int Options,row,collum = 2, stock_update,continueupdate;
    double Gadget[6][2],Accesories[9][2], Component[12][2];    // the array will be global this just
    do                                                           // a place holder

    {       
    cout << "Please choose the categories that needed update stock:\n";
    cout << "1. Gadget\n";
    cout << "2. Accesories\n";
    cout << "3. Components\n";
    cin >> Options;


    switch (Options)
    {
    case 1: 
    cout << "Please select the item:\n";
    cout << "1.Samsung A12\n";
    cout << "2. Samsung Panasonic tv\n";
    cout << "3. Ps5 \n";
    cout << "4,Smart watch\n";
    cout << "5.Laptop\n";
    cout << "6.Iphone 17 Pro";
    cout << "6.\n";

    cin >> row;

    cout <<"Please insert the stock:";
    cin >> stock_update;

    Gadget[row-1][1] = stock_update;
    for(int i =0 ;i<6 ;i++)
    {
        for(int j =0 ; j< 2; j++) // remove the garbage value
        {
            if (Gadget[i][j] < 1)
            {
                Gadget[i][j]=0;
            }
        }
    }

    for(int i=0 ; i< 6; i++)   //display all stock 
    {
        cout <<"" << Gadget[i][1]<< endl;
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

    cin >> row;

    cout <<"Please insert the stock:";
    cin >> stock_update;

    Accesories[row-1][1] = stock_update;

    for(int i =0 ;i<9 ;i++) // remove the garbage value
    {
        for(int j =0 ; j< 2; j++)
        {
            if (Accesories[i][j] < 1)
            {
                Accesories[i][j]=0;
            }
        }
    }

    for(int i=0 ; i< 9; i++)   //display all stock 
    {
        cout <<"" << Accesories[i][1]<< endl;
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


    cin >> row;

    cout <<"Please insert the stock:";
    cin >> stock_update;

    Component[row-1][1] = stock_update;

    for(int i =0 ;i<12 ;i++)    // remove the garbage value
    {
        for(int j =0 ; j< 2; j++)
        {
            if (Component[i][j] < 1)
            {
                Component[i][j]=0;
            }
        }
    }

    for(int i=0 ; i< 12; i++) //display all stock 
    {
        cout <<"" << Component[i][1]<< endl;
    }
        break;

    default:
    cout << "Invalid choice\n";  
        break;
    }

    cout << "Do you wish to continue to update?\n";
    cout << "1. Yes \n";
    cout << "2. No\n";
    cin >> continueupdate;
    }
    while (continueupdate == 1);
    return 0;
            


}
