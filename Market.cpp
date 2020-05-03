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
    cout << "\t\t\tKharide Kala (Level 1)\n" << endl;
    bool loop = true;
    while (loop == true)
    {
        cout << "Giyahe Khod Ra Entekhab Konid:" << endl;
        cout << "(1) Narenj  ×1  Cost:8,000" << endl;
        cout << "(2) KharMaryam  ×3  Cost:12,500" << endl;
        cout << "(3) Shahtare  ×1  Cost:12,500" << endl;
        cout << "(4) Ocaliptos  ×1  Cost:14,700" << endl;
        cout << "(5) Khakshir  ×1  Cost:5,000" << endl;
        cout << "(6) Marze  ×5  Cost:8,000" << endl;
        cout << "(7) Darchin  ×1  Cost:10,000" << endl;
        cout << "(8) Avishan ×5  Cost:10,000" << endl;
        cout << "(9) Jodosar ×1  Cost:20,000" << endl;
        cout << "(10) Sir ×1  Cost:8,000" << endl;
        cout << "(11) Karchak ×1  Cost:15,000" << endl;
        cout << "(12) Gon ×1  Cost:12,000" << endl;
        cout << "press 0 to back to the Market Menu if you are not moshtari here!" << endl;
        cout << "choice: ";
        int choice;
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            if (amo_atar.getMoney() >= 8000)
            {
                cout << "Kharidari Shod:  Narenj" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Narenj",amo_atar.get_repository_amount("Narenj")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 8000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 2:
            if (amo_atar.getMoney() >= 12500)
            {
                cout << "Kharidari Shod:  KharMaryam" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("KharMaryam",amo_atar.get_repository_amount("KharMaryam")+3);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 12500);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 3:
            if (amo_atar.getMoney() >= 12500)
            {
                cout << "Kharidari Shod:  Shahtare" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Shahtare",amo_atar.get_repository_amount("Shahtare")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 12500);
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
            if (amo_atar.getMoney() >= 5000)
            {
                cout << "Kharidari Shod:  KhakShir" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("KhakShir",amo_atar.get_repository_amount("KhakShir")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 5000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 6:
            if (amo_atar.getMoney() >= 8000)
            {
                cout << "Kharidari Shod:  Marze" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Marze",amo_atar.get_repository_amount("Marze")+5);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 8000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 7:
            if (amo_atar.getMoney() >= 10000)
            {
                cout << "Kharidari Shod:  Darchin" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Darchin",amo_atar.get_repository_amount("Darchin")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 10000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 8:
            if (amo_atar.getMoney() >= 10000)
            {
                cout << "Kharidari Shod:  Avishan" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Avishan",amo_atar.get_repository_amount("Avishan")+5);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 10000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 9:
            if (amo_atar.getMoney() >= 20000)
            {
                cout << "Kharidari Shod:  Jodosar" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Jodosar",amo_atar.get_repository_amount("Jodosar")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 20000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 10:
            if (amo_atar.getMoney() >= 8000)
            {
                cout << "Kharidari Shod:  Sir" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Sir",amo_atar.get_repository_amount("Sir")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 8000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 11:
            if (amo_atar.getMoney() >= 15000)
            {
                cout << "Kharidari Shod:  Karchak" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Karchak",amo_atar.get_repository_amount("Karchak")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 15000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 12:
            if (amo_atar.getMoney() >= 12000)
            {
                cout << "Kharidari Shod:  Gon" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Gon",amo_atar.get_repository_amount("Gon")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 12000);
            }
            else
            {
                cout << "Shoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 0:
            loop = false;
            break;
        default:
            cout << "Vorodi Eshtebah!\nDobare Talash Konid:\n" << endl;
            break;
        }
    }
}

void Market::Buy_Herbs_Level2(Atar &amo_atar)
{
    cout << "\t\t\tKharide Kala (Level 2)\n" << endl;
    bool loop2 = true;
    while (loop2 == true)
    {
        cout << "Giyahe Khod Ra Entekhab Konid:" << endl;
        cout << "(1) ShirinBayan  ×1  Cost:7,000" << endl;
        cout << "(2) BargAloevera  ×3  Cost:15,500" << endl;
        cout << "(3) Asal  ×1  Cost:35,500" << endl;
        cout << "(4) Ocaliptos  ×1  Cost:14,700" << endl;
        cout << "(5) Jinsing  ×1  Cost:25,000" << endl;
        cout << "(6) GolGavzabon  ×5  Cost:8,000" << endl;
        cout << "(7) Ostokhoddos  ×5  Cost:15,000" << endl;
        cout << "(8) Zafaran Alaye Daraje yek! ×1  Cost:95,000" << endl;
        cout << "press 0 to back to the Market Menu if you are not moshtari here!" << endl;
        cout << "Your choice: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (amo_atar.getMoney() >= 7000)
            {
                cout << "\nKharidari Shod:  ShirinBayan" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("ShirinBayan",amo_atar.get_repository_amount("ShirinBayan")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 7000);
            }
            else
            {
                cout << "\nShoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 2:
            if (amo_atar.getMoney() >= 15500)
            {
                cout << "\nKharidari Shod:  BargAloevera" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("BargAloevera",amo_atar.get_repository_amount("BargAloevera")+3);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 15500);
            }
            else
            {
                cout << "\nShoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 3:
            if (amo_atar.getMoney() >= 35500)
            {
                cout << "\nKharidari Shod:  Asal" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Asal",amo_atar.get_repository_amount("Asal")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 35500);
            }
            else
            {
                cout << "\nShoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 4:
            if (amo_atar.getMoney() >= 14700)
            {
                cout << "\nKharidari Shod:  Ocaliptos" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Ocaliptos",amo_atar.get_repository_amount("Ocaliptos")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 14700);
            }
            else
            {
                cout << "\nShoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 5:
            if (amo_atar.getMoney() >= 25000)
            {
                cout << "\nKharidari Shod:  Jinsing" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Jinsing",amo_atar.get_repository_amount("Jinsing")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 25000);
            }
            else
            {
                cout << "\nShoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 6:
            if (amo_atar.getMoney() >= 8000)
            {
                cout << "\nKharidari Shod:  GolGavzabon" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("GolGavzabon",amo_atar.get_repository_amount("GolGavzabon")+5);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 8000);
            }
            else
            {
                cout << "\nShoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 7:
            if (amo_atar.getMoney() >= 15000)
            {
                cout << "\nKharidari Shod:  Ostokhoddos" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Ostokhoddos",amo_atar.get_repository_amount("Ostokhoddos")+5);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 15000);
            }
            else
            {
                cout << "\nShoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 8:
            if (amo_atar.getMoney() >= 95000)
            {
                cout << "\nKharidari Shod:  Zaferan" << endl;
                //increament of amounts in inventor
                amo_atar.set_repository_amount("Zaferan",amo_atar.get_repository_amount("Zaferan")+1);
                //decreament of amo atar's money
                amo_atar.setMoney(amo_atar.getMoney() - 95000);
            }
            else
            {
                cout << "\nShoma Pole Kafi Nadarid" << endl;
            }
            break;
        case 0:
            loop2 = false;
            break;
        default:
            cout << "\nVorodi Eshtebah!\nDobare Talash Konid:" << endl;
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

    cout << "\n\t\t*------*[Market]*------*" << endl;
    int choice;
    bool loop3 = true;
    while (loop3 == true)
    {
        cout << "\nChe Optioni Mikhayd Bekharid?" << endl;
        cout << "(1) Level 1 goods" << endl;
        cout << "(2) Level 2 goods" << endl;
        cout << "(3) Security   Cost: 150,000T" << endl;
        cout << "(4) GUI   Cost: 200,000T" << endl;
        cout << "(5) Increasing APP's Server Capacity(more customers) Cost: 200,000T" << endl;
        cout << "(6) Lab   Cost: 350,000T" << endl;
        cout << "Press 0 to back to menu\n" << endl;
        cout << "Your choice: ";
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
                cout << "\nShoma Hanoz Be Sathe 2 Naresidid!" << endl;
            }
            
            break;
        case 3:
            if (Security == false)
            {
                if (amo_atar.getMoney() >= 150000)
                {
                    //Initialize Security
                    Security = true;
                    //decreament of amo atar's money
                    amo_atar.setMoney(amo_atar.getMoney() - 150000);
                    cout << "\nAmniyat Application Afzayesh Yaft!" << endl;
                }
                else
                {
                    cout << "\nPole Kafi Nadarid!" << endl;

                }
            }
            else
            {
                cout << "\nShoma In Option ro Ghablan Kharidid!" << endl;
            }
            break;
        case 4:
            if (GUI == false)
            {
                if (amo_atar.getMoney() >= 200000)
                {
                    //Initialize Second Graphic interface
                    GUI = true;
                    //decreament of amo atar's money
                    amo_atar.setMoney(amo_atar.getMoney() - 200000);
                    cout << "\nGUI V2 initialized...\n" << endl;
                    // cout << "▂▃▅▇█▓▒░۩۞۩ :GUI V2 INITIALIZED: ۩۞۩░▒▓█▇▅▃▂" << endl;
                    cout << " ██████╗ ██╗   ██╗██╗    ██╗   ██╗██████╗ " << endl;
                    cout << "██╔════╝ ██║   ██║██║    ██║   ██║╚════██╗" << endl;
                    cout << "██║  ███╗██║   ██║██║    ██║   ██║ █████╔╝" << endl;
                    cout << "██║   ██║██║   ██║██║    ╚██╗ ██╔╝██╔═══╝ " << endl;
                    cout << "╚██████╔╝╚██████╔╝██║     ╚████╔╝ ███████╗" << endl;
                    cout << " ╚═════╝  ╚═════╝ ╚═╝      ╚═══╝  ╚══════╝" << endl;
                    cout <<"   (                                                    " << endl;
                    cout << " )\\ )              )           (                (     " << endl;
                    cout << "(()/(       (   ( /( (      )  )\\ (         (   )\\ )  " << endl;
                    cout << " /(_)) (    )\\  )\\()))\\  ( /( ((_))\\  (    ))\\ (()/(  " << endl;
                    cout << "(_))   )\\ )((_)(_))/((_) )(_)) _ ((_) )\\  /((_) ((_)) " << endl;
                    cout << "|_ _| _(_/( (_)| |_  (_)((_)_ | | (_)((_)(_))   _| |  " << endl;
                    cout << " | | | ' \\))| ||  _| | |/ _` || | | ||_ // -_)/ _` |  " << endl;
                    cout << "|___||_||_| |_| \\__| |_|\\__,_||_| |_|/__|\\___|\\__,_| " << endl;

                }
                else
                {
                    cout << "\nPole Kafi Nadarid!" << endl;
                }
            }
            else
            {
                cout << "\nShoma In Option ro Ghablan Kharidid!" << endl;
            }
            break;
        case 5:
            if (Increasing_Server_Capacity == false)
            {
                if (amo_atar.getMoney() >= 200000)
                {
                    //Unlock more patients in a pass
                    Increasing_Server_Capacity = true;
                    //decreament of amo atar's money
                    amo_atar.setMoney(amo_atar.getMoney() - 200000);
                    cout << "\nZarfiyate Server Afzayesh Yaft.\nHala Mitavanid Moshtarihaye Bishtari Begirid" << endl;
                }
                else
                {
                    cout << "\nPole Kafi Nadarid!!" << endl;
                }
            }
            else
            {
                cout << "\nShoma In Option ro Ghablan Kharidid!" << endl;
            }
            break;
        case 6:
            if (Lab == false)
            {
                if (amo_atar.getMoney() >= 350000 && amo_atar.getReputation_Level() >= 3)
                {
                    //Unlock Lab
                    Lab = true;
                    //decreament of amo atar's money
                    amo_atar.setMoney(amo_atar.getMoney() - 350000);
                    cout << "\nLabratory Amadast!" << endl;
                }
                else
                {
                    cout << "\nShoma Hanoz Be Pol Ya Sathe Kafi Naresidid" << endl;
                }
                
            }
            else
            {
                cout << "\nShoma In Option ro Ghablan Kharidid!" << endl;
            }
            break;
        case 0:
            loop3 = false;
            break;

        default:
            cout << "\nVorodi Eshtebah!\nDobare Talash Konid:" << endl;
        }
    }
}