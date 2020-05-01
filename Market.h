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
    /*Setters for set values*/
    void set_Security();
    void set_Herbs_Level2();
    void set_Herbs_Level3();
    void set_GUI();
    void set_Increasing_Server_Capacity();
    void set_Lab();
    /*Return True if each option in market was purchased*/
    bool Check_Security();
    bool Check_Herbs_Level2();
    bool Check_Herbs_Level3();
    bool Check_GUI();
    bool Check_Increasing_Server_Capacity();
    bool Check_Lab();
    //Constructor Just for set values
    Market();
    /*Buy System*/
    void Buy(Atar &);
    void Buy_Herbs_Level1(Atar &);
    void Buy_Herbs_Level2(Atar &);
    //Check Atar's Level to Unlock related options
    void Check_Level(Atar &);
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

bool Market::Check_Security()
{
    if (Security == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Market::Check_Herbs_Level2()
{
    if (Herbs_Level2 == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Market::Check_Herbs_Level3()
{
    if (Herbs_Level3 == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Market::Check_GUI()
{
    if (GUI == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Market::Check_Increasing_Server_Capacity()
{
    if (Increasing_Server_Capacity == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Market::Check_Lab()
{
    if (Lab == true)
    {
        return true;
    }
    else
    {
        return false;
    }
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

void Market::Buy_Herbs_Level1(Atar &amo_atar)
{
    cout << "\t\t\tBuying Goods (Level 2)\n" << endl;
    cout << "Which Herbs do you need?" << endl;
    cout << "(1) Narenj  ×1  Cost:8,000" << endl;
    cout << "(2) Khar maryam  ×3  Cost:12,500" << endl;
    cout << "(3) Shahtare  ×1  Cost:12,500" << endl;
    cout << "(4) Ocaliptos  ×1  Cost:14,700" << endl;
    cout << "(5) Khakshir  ×1  Cost:5,000" << endl;
    cout << "(6) Marze  ×5  Cost:8,000" << endl;
    cout << "(7) Darchin  ×1  Cost:10,000" << endl;
    cout << "(8) Avishan ×5  Cost:10,000" << endl;
    cout << "(9) Jo dosar ×1  Cost:20,000" << endl;
    cout << "(10) Sir ×1  Cost:8,000" << endl;
    cout << "(11) Karchak ×1  Cost:15,000" << endl;
    cout << "(12) Gon ×1  Cost:12,000" << endl;
    cout << "press 0 to back to the Market Menu if you are not moshtari here!" << endl;
    cout << "Your choice: ";
    int choice;
    cin >> choice;
    cout << endl;

    bool loop = true;
    while (loop == true)
    {
        switch (choice)
        {
        case 1:
            if (amo_atar.getMoney() >= 8000)
            {
                cout << "You Got the Narenj" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[0]++;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 8000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 2:
            if (amo_atar.getMoney() >= 12500)
            {
                cout << "You Got the Khar maryam" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[1] += 3;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 12500);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 3:
            if (amo_atar.getMoney() >= 12500)
            {
                cout << "You Got the Shahtare" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[2] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 12500);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 4:
            if (amo_atar.getMoney() >= 14700)
            {
                cout << "You Got the Ocaliptos" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[5] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 14700);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 5:
            if (amo_atar.getMoney() >= 5000)
            {
                cout << "You Got the Khakshir" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[3] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 5000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 6:
            if (amo_atar.getMoney() >= 8000)
            {
                cout << "You Got the Marze" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[4] += 5;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 8000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 7:
            if (amo_atar.getMoney() >= 10000)
            {
                cout << "You Got the Darchin" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[6] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 10000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 8:
            if (amo_atar.getMoney() >= 10000)
            {
                cout << "You Got the Avishan" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[7] += 5;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 10000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 9:
            if (amo_atar.getMoney() >= 20000)
            {
                cout << "You Got the Jo dosar" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[8] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 20000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 10:
            if (amo_atar.getMoney() >= 8000)
            {
                cout << "You Got the Sir" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[9] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 8000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 11:
            if (amo_atar.getMoney() >= 15000)
            {
                cout << "You Got the Karchak" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[11] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 15000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 12:
            if (amo_atar.getMoney() >= 12000)
            {
                cout << "You Got the Gon" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[10] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 12000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
        case 0:
            loop = false;
            break;
        default:
            break;
        }
    }
}

void Market::Buy_Herbs_Level2(Atar &amo_atar)
{
    cout << "\t\t\tBuying Goods (Level 2)\n" << endl;
    cout << "Which Herbs do you need?" << endl;
    cout << "(1) Shirin Bayan  ×1  Cost:7,000" << endl;
    cout << "(2) Barg Aloevera  ×3  Cost:15,500" << endl;
    cout << "(3) Asal  ×1  Cost:35,500" << endl;
    cout << "(4) Ocaliptos  ×1  Cost:14,700" << endl;
    cout << "(5) Jinsing  ×1  Cost:25,000" << endl;
    cout << "(6) Gol Gavzabon  ×5  Cost:8,000" << endl;
    cout << "(7) Ostokhoddos  ×5  Cost:15,000" << endl;
    cout << "(8) Zafaran Alaye Daraje yek! ×1  Cost:95,000" << endl;
    cout << "press 0 to back to the Market Menu if you are not moshtari here!" << endl;
    cout << "Your choice: ";
    int choice;
    cin >> choice;
    cout << endl;

    bool loop2 = true;
    while (loop2 == true)
    {
        switch (choice)
        {
        case 1:
            if (amo_atar.getMoney() >= 7000)
            {
                cout << "You Got the Shirin Bayan" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[12] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 7000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 2:
            if (amo_atar.getMoney() >= 15500)
            {
                cout << "You Got the Barg Alovera" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[13] += 3;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 15500);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 3:
            if (amo_atar.getMoney() >= 35500)
            {
                cout << "You Got the Asal" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[14] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 35500);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 4:
            if (amo_atar.getMoney() >= 14700)
            {
                cout << "You Got the Ocaliptos" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[5] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 14700);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 5:
            if (amo_atar.getMoney() >= 25000)
            {
                cout << "You Got the Jinsing" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[15] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 25000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 6:
            if (amo_atar.getMoney() >= 8000)
            {
                cout << "You Got the Gol Gavzabon" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[16] += 5;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 8000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 7:
            if (amo_atar.getMoney() >= 15000)
            {
                cout << "You Got the Ostokhoddos" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[18] += 5;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 15000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 8:
            if (amo_atar.getMoney() >= 95000)
            {
                cout << "You Got the Zafaran" << endl;
                //increament of amounts in inventor
                amo_atar.repository_amount[18] += 1;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 95000);
            }
            else
            {
                cout << "You don't have enough money!" << endl;
            }
            break;
        case 0:
            loop2 = false;
            break;
        default:
            break;
        }
    }
}

void Market::Check_Level(Atar &amo_atar)
{
    if (amo_atar.getReputation_Level() >= 2)
    {
        Herbs_Level2 = true;
    }
}

void Market::Buy(Atar &amo_atar)
{
    Check_Level(amo_atar);

    cout << "\t\t\t Welcome to The Market" << endl;
    cout << "What Do you want to buy ?" << endl;
    cout << "(1) Level 1 goods" << endl;
    cout << "(2) Level 2 goods" << endl;
    cout << "(3) Security   Cost: 150,000T" << endl;
    cout << "(4) GUI   Cost: 200,000T" << endl;
    cout << "(5) Increasing APP's Server Capacity(more customers) Cost: 200,000T" << endl;
    cout << "(6) Lab   Cost: 350,000T" << endl;
    cout << "Press 0 to back to menu\n" << endl;
    int choice;
    cout << "Your choice: ";
    cin >> choice;
    cout << endl;

    bool loop3 = true;
    while (loop3 == true)
    {
        switch (choice)
        {
        case 1:
            Buy_Herbs_Level1(amo_atar);
            break;
        case 2:
            if (Check_Herbs_Level2() == true)
            {
                Buy_Herbs_Level2(amo_atar);
            }
            break;
        case 3:
            if (amo_atar.getMoney() >= 150000)
            {
                //Initialize Security
                Security = true;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 150000);
                cout << "Your application is secure now!" << endl;
            }
            else
            {
                cout << "You Don't have enough money!" << endl;
            }
            break;
        case 4:
            if (amo_atar.getMoney() >= 200000)
            {
                //Initialize Second Graphic interface
                GUI = true;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 200000);
                cout << "GUI V2 initialized..." << endl;
            }
            else
            {
                cout << "You Don't have enough money!" << endl;
            }
            break;
        case 5:
            if (amo_atar.getMoney() >= 200000)
            {
                //Unlock more patients in a pass
                Increasing_Server_Capacity = true;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 200000);
                cout << "Your Server's Capacity Increased.\nNow you can more customers" << endl;
            }
            else
            {
                cout << "You Don't have enough money!" << endl;
            }
            break;
        case 6:
            if (amo_atar.getMoney() >= 350000 && amo_atar.getReputation_Level() >= 3)
            {
                //Unlock Lab
                Lab = true;
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 350000);
                cout << "Labratory is ready to use..." << endl;
            }
            else
            {
                cout << "Shoma hano be pol ya sathe kafi naresidid!" << endl;
            }
            break;
        case 0:
            loop3 = false;
            break;

        default:
            cout << "Wrong Number!\nTry Again:" << endl;
        }
    }
}

#endif