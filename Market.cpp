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
        
    //     switch (choice)
    //     {
    //     case 1:
    //         if (amo_atar.getMoney() >= 8000)
    //         {
    //             cout << "Kharidari Shod:  Narenj" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("Narenj",amo_atar.get_repository_amount("Narenj")+1);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 8000);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 2:
    //         if (amo_atar.getMoney() >= 12500)
    //         {
    //             cout << "Kharidari Shod:  KharMaryam" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("KharMaryam",amo_atar.get_repository_amount("KharMaryam")+3);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 12500);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 3:
    //         if (amo_atar.getMoney() >= 12500)
    //         {
    //             cout << "Kharidari Shod:  Shahtare" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("Shahtare",amo_atar.get_repository_amount("Shahtare")+1);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 12500);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 4:
    //         if (amo_atar.getMoney() >= 14700)
    //         {
    //             cout << "Kharidari Shod:  Ocaliptos" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("Ocaliptos",amo_atar.get_repository_amount("Ocaliptos")+1);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 14700);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 5:
    //         if (amo_atar.getMoney() >= 5000)
    //         {
    //             cout << "Kharidari Shod:  KhakShir" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("KhakShir",amo_atar.get_repository_amount("KhakShir")+1);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 5000);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 6:
    //         if (amo_atar.getMoney() >= 8000)
    //         {
    //             cout << "Kharidari Shod:  Marze" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("Marze",amo_atar.get_repository_amount("Marze")+5);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 8000);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 7:
    //         if (amo_atar.getMoney() >= 10000)
    //         {
    //             cout << "Kharidari Shod:  Darchin" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("Darchin",amo_atar.get_repository_amount("Darchin")+1);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 10000);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 8:
    //         if (amo_atar.getMoney() >= 10000)
    //         {
    //             cout << "Kharidari Shod:  Avishan" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("Avishan",amo_atar.get_repository_amount("Avishan")+5);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 10000);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 9:
    //         if (amo_atar.getMoney() >= 20000)
    //         {
    //             cout << "Kharidari Shod:  Jodosar" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("Jodosar",amo_atar.get_repository_amount("Jodosar")+1);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 20000);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 10:
    //         if (amo_atar.getMoney() >= 8000)
    //         {
    //             cout << "Kharidari Shod:  Sir" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("Sir",amo_atar.get_repository_amount("Sir")+1);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 8000);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 11:
    //         if (amo_atar.getMoney() >= 15000)
    //         {
    //             cout << "Kharidari Shod:  Karchak" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("Karchak",amo_atar.get_repository_amount("Karchak")+1);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 15000);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 12:
    //         if (amo_atar.getMoney() >= 12000)
    //         {
    //             cout << "Kharidari Shod:  Gon" << endl;
    //             //increament of amounts in inventor
    //             amo_atar.set_repository_amount("Gon",amo_atar.get_repository_amount("Gon")+1);
    //             //decreament of amo atar's money
    //             amo_atar.setMoney(amo_atar.getMoney() - 12000);
    //         }
    //         else
    //         {
    //             cout << "Shoma Pole Kafi Nadarid" << endl;
    //         }
    //         break;
    //     case 0:
    //         loop = false;
    //         break;
    //     default:
    //         cout << "Vorodi Eshtebah! Dobare Talash Konid." << endl;
    //         break;
    //     }
    }
}

void Market::Buy_Herbs_Level2(Atar &amo_atar)
{
    bool loop2 = true;
    while (loop2 == true)
    {
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (amo_atar.getMoney() >= 7000)
            {
                cout << "Kharidari Shod:  ShirinBayan" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("ShirinBayan",amo_atar.get_repository_amount("ShirinBayan")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 7000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 2:
            if (amo_atar.getMoney() >= 15500)
            {
                cout << "Kharidari Shod:  BargAloevera" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("BargAloevera",amo_atar.get_repository_amount("BargAloevera")+3);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 15500);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 3:
            if (amo_atar.getMoney() >= 35500)
            {
                cout << "Kharidari Shod:  Asal" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Asal",amo_atar.get_repository_amount("Asal")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 35500);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 4:
            if (amo_atar.getMoney() >= 14700)
            {
                cout << "Kharidari Shod:  Ocaliptos" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Ocaliptos",amo_atar.get_repository_amount("Ocaliptos")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 14700);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 5:
            if (amo_atar.getMoney() >= 25000)
            {
                cout << "Kharidari Shod:  Jinsing" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Jinsing",amo_atar.get_repository_amount("Jinsing")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 25000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 6:
            if (amo_atar.getMoney() >= 8000)
            {
                cout << "Kharidari Shod:  GolGavZaban" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("GolGavZaban",amo_atar.get_repository_amount("GolGavZaban")+5);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 8000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 7:
            if (amo_atar.getMoney() >= 15000)
            {
                cout << "Kharidari Shod:  Ostokhoddos" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Ostokhoddos",amo_atar.get_repository_amount("Ostokhoddos")+5);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 15000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 8:
            if (amo_atar.getMoney() >= 95000)
            {
                cout << "Kharidari Shod:  Zaferan" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Zaferan",amo_atar.get_repository_amount("Zaferan")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 95000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 0:
            loop2 = false;
            break;
        default:
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
        // cout << "Che Optioni Mikhayd Bekharid?" << endl;
        // cout << "(1) Level 1 goods" << endl;
        // cout << "(2) Level 2 goods" << endl;
        // cout << "(3) Security   Gheymat: 150,000T" << endl;
        // cout << "(4) GUI   Gheymat: 200,000T" << endl;
        // cout << "(5) Increasing APP's Server Capacity(more customers) Gheymat: 200,000T" << endl;
        // cout << "(6) Lab   Gheymat: 350,000T" << endl;
        // cout << "(7) AI    Gheymat 220,000 "<<endl;
        // cout << "Press 0 to back to menu" << endl;
        // cout << "Entekhabe Shoma: " << endl;
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
        // case 3:
        //     if (Security == false)
        //     {
        //         if (amo_atar.getMoney() >= 150000)
        //         {
        //             //Initialize Security
        //             Security = true;
        //             //decreament of amo atar's money
        //             amo_atar.setMoney(amo_atar.getMoney() - 150000);
        //             cout << "Anjam Shod!" << endl;
        //         }
        //         else
        //         {
        //             cout << "Shoma Hanoz Be Pol Ya Sathe Kafi Naresidid" << endl;
        //         }
        //     }
        //     else
        //     {
        //         cout << "Shoma In Option ro Ghablan Kharidid!" << endl;
        //     }
        //     break;
        case 3:
            if (GUI == false)
            {
                if (amo_atar.getMoney() >= 200000)
                {
                    // //Initialize Second Graphic interface
                    // GUI = true;
                    // //decreament of amo atar's money
                    // amo_atar.setMoney(amo_atar.getMoney() - 200000);
                    // cout << "GUI V2 initialized..." << endl;
                    // // cout << "▂▃▅▇█▓▒░۩۞۩ :GUI V2 INITIALIZED: ۩۞۩░▒▓█▇▅▃▂" << endl;
                    // cout << " ██████╗ ██╗   ██╗██╗    ██╗   ██╗██████╗ " << endl;
                    // cout << "██╔════╝ ██║   ██║██║    ██║   ██║╚════██╗" << endl;
                    // cout << "██║  ███╗██║   ██║██║    ██║   ██║ █████╔╝" << endl;
                    // cout << "██║   ██║██║   ██║██║    ╚██╗ ██╔╝██╔═══╝ " << endl;
                    // cout << "╚██████╔╝╚██████╔╝██║     ╚████╔╝ ███████╗" << endl;
                    // cout << " ╚═════╝  ╚═════╝ ╚═╝      ╚═══╝  ╚══════╝" << endl;
                    // cout <<"   (                                                    " << endl;
                    // cout << " )\\ )              )           (                (     " << endl;
                    // cout << "(()/(       (   ( /( (      )  )\\ (         (   )\\ )  " << endl;
                    // cout << " /(_)) (    )\\  )\\()))\\  ( /( ((_))\\  (    ))\\ (()/(  " << endl;
                    // cout << "(_))   )\\ )((_)(_))/((_) )(_)) _ ((_) )\\  /((_) ((_)) " << endl;
                    // cout << "|_ _| _(_/( (_)| |_  (_)((_)_ | | (_)((_)(_))   _| |  " << endl;
                    // cout << " | | | ' \\))| ||  _| | |/ _` || | | ||_ // -_)/ _` |  " << endl;
                    // cout << "|___||_||_| |_| \\__| |_|\\__,_||_| |_|/__|\\___|\\__,_| " << endl;

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
        // case 7:
        //     if (Ai == false)
        //     {
        //         if (amo_atar.getMoney() >= 220000 && amo_atar.getReputation_Level() >= 1)
        //         {
        //             //Unlock Lab
        //             Ai = true;
        //             //decreament of amo atar's money
        //             amo_atar.setMoney(amo_atar.getMoney() - 220000);
        //             cout << "Anjam Shod!" << endl;
        //         }
        //         else
        //         {
        //             cout << "Shoma Hanoz Be Pol Ya Sathe Kafi Naresidid" << endl;
        //         }
           
        //     }
        case 0:
                loop3 = false;
                break;

        default:
                cout << "Vorodi Eshtebah! Dobare Talash Konid." << endl;
        }
    }
}