#include "Market.h"

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

void Market::set_Ai()
{
    Ai = false;
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

bool Market::Check_Ai()
{
    if (Ai == true)
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
    set_Ai();
    Herbs();
}

void Market::Herbs()
{
    herbs.resize(20);

    herbs[0].set_Name("Narenj");
    herbs[0].set_Quantity(1);
    herbs[0].set_Cost(8000);

    herbs[1].set_Name("KharMaryam");
    herbs[1].set_Quantity(3);
    herbs[1].set_Cost(12500);

    herbs[2].set_Name("Shahtare");
    herbs[2].set_Quantity(1);
    herbs[2].set_Cost(12500);

    herbs[3].set_Name("Ocaliptos");
    herbs[3].set_Quantity(1);
    herbs[3].set_Cost(14700);

    herbs[4].set_Name("Khakshir");
    herbs[4].set_Quantity(1);
    herbs[4].set_Cost(5000);

    herbs[5].set_Name("Marze");
    herbs[5].set_Quantity(5);
    herbs[5].set_Cost(8000);

    herbs[6].set_Name("Darchin");
    herbs[6].set_Quantity(1);
    herbs[6].set_Cost(10000);

    herbs[7].set_Name("Avishan");
    herbs[7].set_Quantity(5);
    herbs[7].set_Cost(10000);

    herbs[8].set_Name("Jodosar");
    herbs[8].set_Quantity(1);
    herbs[8].set_Cost(20000);

    herbs[9].set_Name("Sir");
    herbs[9].set_Quantity(1);
    herbs[9].set_Cost(8000);

    herbs[10].set_Name("Karchak");
    herbs[10].set_Quantity(1);
    herbs[10].set_Cost(15000);

    herbs[11].set_Name("Gon");
    herbs[11].set_Quantity(1);
    herbs[11].set_Cost(12000);

    herbs[12].set_Name("ShirinBayan");
    herbs[12].set_Quantity(1);
    herbs[12].set_Cost(7000);

    herbs[13].set_Name("BargAloevera");
    herbs[13].set_Quantity(3);
    herbs[13].set_Cost(15000);

    herbs[14].set_Name("Asal");
    herbs[14].set_Quantity(1);
    herbs[14].set_Cost(35500);

    herbs[15].set_Name("Ocaliptos");
    herbs[15].set_Quantity(1);
    herbs[15].set_Cost(14700);

    herbs[16].set_Name("Jinsing");
    herbs[16].set_Quantity(1);
    herbs[16].set_Cost(25000);

    herbs[17].set_Name("GolGavZaban");
    herbs[17].set_Quantity(5);
    herbs[17].set_Cost(8000);

    herbs[18].set_Name("Ostokhoddos");
    herbs[18].set_Quantity(5);
    herbs[18].set_Cost(15000);

    herbs[19].set_Name("Zafaran Alaye Daraje yek");
    herbs[19].set_Quantity(1);
    herbs[19].set_Cost(95000);
}

void Market::Buy_Herbs_Level1(Atar &amo_atar)
{
    bool loop = true;
    while (loop == true)
    {
        int choice;
        cin >> choice;
        if (choice <= 12 && choice > 0)
        {
            if (amo_atar.getMoney() >= herbs[choice-1].get_Cost())
            {
                cout << "Kharidari Shod:  "  << herbs[choice-1].get_Name() << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount(herbs[choice-1].get_Name(), amo_atar.get_repository_amount(herbs[choice-1].get_Name()) + herbs[choice-1].get_Quantity());
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - herbs[choice-1].get_Cost());
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
        }
        else if(choice == 0)
        {
            loop = false;
        }
        else
        {
            cout << "Vorodi Eshtebah! Dobare Talash Konid." << endl;
        }
    }
}

void Market::Buy_Herbs_Level2(Atar &amo_atar)
{
    bool loop2 = true;
    while (loop2 == true)
    {
        int choice;
        cin >> choice;
        if (choice <= 8 && choice > 0)
        {
            if (amo_atar.getMoney() >= herbs[choice-1 + 12].get_Cost())
            {
                cout << "Kharidari Shod:  "  << herbs[choice-1 + 12].get_Name() << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount(herbs[choice-1 + 12].get_Name(), amo_atar.get_repository_amount(herbs[choice-1 + 12].get_Name()) + herbs[choice-1 + 12].get_Quantity());
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - herbs[choice-1 + 12].get_Cost());
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
        }
        else if(choice == 0)
        {
            loop2 = false;
        }
        else
        {
            cout << "Vorodi Eshtebah! Dobare Talash Konid." << endl;
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

    // cout << "*------*[Market]*------*" << endl;
    int choice;
    bool loop3 = true;
    while (loop3 == true)
    {
        cin >> choice;
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
            else
            {
                cout << "Shoma Hanoz Be Pol Ya Sathe Kafi Naresidid" << endl;
            }
            
            break;
        case 3:
            if (GUI == false)
            {
                if (amo_atar.getMoney() >= 200000)
                {
                    //GUI2
                }
                else
                {
                    cout << "Pole Kafi Nadarid!" << endl;
                }
            }
            else
            {
                cout << "Shoma In Option ro Ghablan Kharidid!" << endl;
            }
            break;
        case 4:
            if (Increasing_Server_Capacity == false)
            {
                if (amo_atar.getMoney() >= 200000)
                {
                    //Unlock more patients in a pass
                    Increasing_Server_Capacity = true;
                    //decreament of amo atar's money
                    amo_atar.setMoney(amo_atar.getMoney() - 200000);
                    cout << "Anjam Shod!" << endl;
                }
                else
                {
                    cout << "Shoma Hanoz Be Pol Ya Sathe Kafi Naresidid" << endl;
                }
            }
            else
            {
                cout << "Shoma In Option ro Ghablan Kharidid!" << endl;
            }
            break;
        case 5:
            if (Lab == false)
            {
                if (amo_atar.getMoney() >= 350000 && amo_atar.getReputation_Level() >= 3)
                {
                    //Unlock Lab
                    Lab = true;
                    //decreament of amo atar's money
                    amo_atar.setMoney(amo_atar.getMoney() - 350000);
                    cout << "Anjam Shod!" << endl;
                }
                else
                {
                    cout << "Shoma Hanoz Be Pol Ya Sathe Kafi Naresidid" << endl;
                }
                
            }
            else
            {
                cout << "Shoma In Option ro Ghablan Kharidid!" << endl;
            }
            break;
        case 0:
                loop3 = false;
                break;

        default:
                cout << "Vorodi Eshtebah! Dobare Talash Konid." << endl;
        }
    }
}