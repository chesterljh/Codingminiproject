#include <iostream>
using namespace std;

double Gadget[6][2],Accesories[9][2], Component[12][2];  //just a place holder'

void operations(int categorieselect)
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

        cout <<"The price of RM" << Gadget[itemselect1][0] << " will be replace with RM";
        cout << price<<endl;

        cout << "Select true or false\n";
        cout <<"1. True\n";
        cout <<"2. False\n";
        cin >> pricecondition;
        

        if (pricecondition == 1)
        {
            Gadget[itemselect1][0] = price;
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



int main()
{
    int loopcondition;
    do
    {
    double priceup,pricedown,price,pricecondition;
    int categorieselect,itemselect1=0;

    cout << "Select which categories that will be change price\n";
    cout <<"1.Gadgets\n";
    cout <<"2.Accesories\n";
    cout <<"3.Components\n";

    cin >> categorieselect;
    
    for(int i =0 ;i<12 ;i++)    // remove the garbage value
    {
        for(int j =0 ; j< 2; j++)
        {
            if (Gadget[i][j] < 1)
            {
                Gadget[i][j]=0;
            }
        }
    }
     for(int i =0 ;i<12 ;i++)    // remove the garbage value
    {
        for(int j =0 ; j< 2; j++)
        {
            if (Accesories[i][j] < 1)
            {
                Accesories[i][j]=0;
            }
        }
    }
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

    operations(categorieselect);

    
    cout << "\n";
    cout<<"Do you wish to continue?\n";
    cout << "1.Yes\n";
    cout<< "2.No\n";
    cin >> loopcondition;
    }
    while(loopcondition ==1);
    {
        return 0;
    }
}
