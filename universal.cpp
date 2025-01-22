#include "universal.hpp"
#include "main.hpp"
#include <iostream>
#include <fstream>
double Component[12][2];
double Gadget[6][2];
double Accesories[9][2];

void buildDataG()
{
    std::string name;
    double price;
    double stock;
    
    std::ifstream dataG("Gadgets.txt"); 
    for (int i = 0; i < 6; i++)
        {        
            dataG>>name>>Gadget[i][0]>>Gadget[i][1];       
        }
    dataG.close();

}
void buildDataA()
{   
    std::string name;
    double price;
    double stock;

    std::ifstream dataA("Accessories.txt"); 
    
    for (int i = 0; i < 9; i++)
        {        
            dataA>>name>>Accesories[i][0]>>Accesories[i][1];
        }
    dataA.close();
}
void buildDataC()
{
    std::string name;
    double price;
    double stock;

    std::ifstream dataC("Components.txt");    
    for (int i = 0; i < 12; i++)
        {        
            dataC>>name>>Component[i][0]>>Component[i][1];
        }
    dataC.close();
}

void saveDataG()
{
    std::string name;
    std::string list[6];
    double price;
    double stock;
    std::ifstream string("Gadgets.txt");

        for (size_t i = 0; i < 6; i++)
        {   
            string>>list[i]>>price>>stock;      
        }

    string.close();

    std::ofstream output;
    output.open("Gadgets.txt");
    for (size_t i = 0; i < 6; i++)
    {
        output << list[i] << " " << Gadget[i][0] << " " << Gadget[i][1] <<std::endl;
    }
    output.close();
}

void saveDataA()
{
    std::string name;
    std::string list[9];
    double price;
    double stock;
    std::ifstream string("Accessories.txt");

        for (size_t i = 0; i < 9; i++)
        {   
            string>>list[i]>>price>>stock;      
        }
        
    string.close();

    std::ofstream output;
    output.open("Accessories.txt");
    for (size_t i = 0; i < 9; i++)
    {
        output << list[i] << " " << Accesories[i][0] << " " << Accesories[i][1] <<std::endl;
    }
    output.close();
}

void saveDataC()
{
    std::string name;
    std::string list[12];
    double price;
    double stock;
    std::ifstream string("Components.txt");

        for (size_t i = 0; i < 12; i++)
        {   
            string>>list[i]>>price>>stock;      
        }
        
    string.close();

    std::ofstream output;
    output.open("Components.txt");
    for (size_t i = 0; i < 12; i++)
    {
        output << list[i] << " " << Component[i][0] << " " << Component[i][1] <<std::endl;
    }
    output.close();
}