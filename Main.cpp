#include <iostream>
#include "main.hpp"

using namespace std;

int main()
{
    for(;;)
    {
    cout<<" ________________________________\n"
        <<"|                                |\n"
        <<"|        Electronics Store       |\n"
        <<"|            Group 17            |\n"
        <<"|________________________________|\n";

    int key;
    cout<<"Who is using the program ?\n"
        <<"1. Customer\n"
        <<"2. Employee\n"
        <<"(Enter any other number to exit)\n"
        <<"> ";
    store faiz;
    cin>>key;
    switch (key)
    {
    case 1:
        faiz.CustomerUI();
        break;
    case 2:
        faiz.EmployeeUI();
        break;
    
    default:
        break;
    }
    }
    return 0;
}
