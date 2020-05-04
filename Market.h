#ifndef Market_H
#define Market_H
#include <iostream>
#include "Atar.h"

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
    bool Ai;
    /*Setters for set values*/
    void set_Security();
    void set_Herbs_Level2();
    void set_Herbs_Level3();
    void set_GUI();
    void set_Increasing_Server_Capacity();
    void set_Lab();
    void set_Ai();
    /*Return True if each option in market was purchased*/
    bool Check_Security();
    bool Check_Herbs_Level2();
    bool Check_Herbs_Level3();
    bool Check_GUI();
    bool Check_Increasing_Server_Capacity();
    bool Check_Lab();
    bool Check_Ai();
    //Constructor Just for set values
    Market();
    /*Buy System*/
    void Buy(Atar &);
    void Buy_Herbs_Level1(Atar &);
    void Buy_Herbs_Level2(Atar &);
    //Check Atar's Level to Unlock related options
    void Check_Level(Atar &);
};
#endif