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
    /*Setters for set values*/
    void set_Security();
    void set_Herbs_Level2();
    void set_Herbs_Level3();
    void set_GUI();
    void set_Increasing_Server_Capacity();
    void set_Lab();
    //Constructor Just for set values
    Market();
    //Buy System
    void Buy();
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

void Market::Buy()
{
    cout << "\t\t\t Welcome to The Market" << endl;
    cout << "What Do you want to buy ?" << endl;
    cout << "(1) Level 2 goods" << endl;
    cout << "(2) Level 3 goods" << endl;
    cout << "(3) Security   Cost: 150,000T" << endl;
    cout << "(4) GUI   Cost: 200,000T" << endl;
    cout << "(5) Increasing APP's Server Capacity(more customers) Cost: 200,000T" << endl;
    cout << "(6) Lab   Cost: 350,000T\n" << endl;
    int choice;
    cout << "Your choice: ";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
        
        break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        
        break;
    case 6:
        
        break;
        
    
    default:
        break;
    }

}

#endif