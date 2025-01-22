
#ifndef store_h
#define store_h

#include <vector>
#include <iostream>
class store
{
private:
public:
    void startpricechanger();
    void operations(int);
    void checkstocks();
    void displayStock(int selection, double Gadget[6][2], double Accesories[9][2], double Component[12][2], std::string gadget[6][2], std::string accesories[9][2], std::string component[12][2]);
    void CustomerUI();
    void EmployeeUI();
    void stockupdate();
    int Buying();
    void itemlocator();
    struct Item;
    void displayItems(const std::vector<Item>& items);
    void receipt();

};
#endif
