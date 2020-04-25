#ifndef Market_H
#define Market_H
#include <iostream>

using namespace std;

class Market
{
public:
    /*Option that Amo Atar can buy!*/
    bool Security;
    bool Herbs_Level2;
    bool Herbs_Level3;
    bool GUI;
    bool Increasing_Server_Capacity;
    bool Lab;
    //Setters for set values
    void set_Security();
    void set_Herbs_Level2();
    void set_Herbs_Level3();
    void set_GUI();
    void set_Increasing_Server_Capacity();
    void set_Lab();
    //Constructor Just for set values
    Market();
};

void Market::set_Security()
{
    Security = false;
}
void Market::set_Herbs_Level2()
{
    Herbs_Level2 = false;
}
void Market::set_Herbs_Level3()
{
    Herbs_Level3 = false;
}
void Market::set_GUI()
{
    GUI = false;
}
void Market::set_Increasing_Server_Capacity()
{
    Increasing_Server_Capacity = false;
}
void Market::set_Lab()
{
    Lab = false;
}

Market::Market()
{
    set_Security();
    set_Herbs_Level2();
    set_Herbs_Level3();
    set_GUI();
    set_Increasing_Server_Capacity();
    set_Lab();
}
#endif