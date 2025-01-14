#include <iostream>
#include "universal.cpp"
#include "adibah2(operation).cpp"
using namespace std;
void operations(int);

void startpricechanger()
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
        return;
    }
}






