
#include <iostream>
#include "main.hpp"
#include "universal.hpp"

void store::CustomerUI()
{   
    for(;;)
    {
        std::cout<<"Hi! Welcome to Faiz Electronics !\n"
                 <<"Please select the the Function that you would like to use.\nEnter any other number to exit.\n"
                 <<"1. Check Stock\n"
                 <<"2. Add to Shopping Cart\n"
                 <<"3. Locate an Item\n"
                 <<"4. Print Receipt\n"
                 <<" > ";      
    int key;
    std::cin>>key;

    switch (key)
    {
    case 1:
        checkstocks();
        break;
    case 2:
        Buying();
        break;
    case 3:
        itemlocator(); 
        break;    
    case 4:
        break;
    default:
        return;
        break;
    }     
    }
}