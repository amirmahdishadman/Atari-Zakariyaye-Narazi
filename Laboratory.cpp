#include "Laboratory.h"

void Labratory::Make_Alcohol(Atar &amo_atar)
{
    cout << "Farayande Dorost Kardan Alcohol...\n"
         << endl;
    int C, H, O;
    cout << "Tedade Carbon: " << endl;
    try
    {
        cin >> C;
    }
    catch (const std::ios_base::failure &failure)
    {
        cout << "Alan Mifrestimon Hava AmoAtar, Tarkib Ghalat!" << endl;
    }
    try
    {
        cin >> C;
    }
    catch (const std::ios_base::failure &failure)
    {
        cout << "Alan Mifrestimon Hava AmoAtar, Tarkib Ghalat!" << endl;
    }
    cout << "Tedade Hydrogen: " << endl;
    try
    {
        cin >> H;
    }
    catch (const std::ios_base::failure &failure)
    {
        cout << "Alan Mifrestimon Hava AmoAtar, Tarkib Ghalat!" << endl;
    }
    cout << "Tedade Oxygen: " << endl;
    try
    {
        cin >> O;
    }
    catch (const std::ios_base::failure &failure)
    {
        cout << "Alan Mifrestimon Hava AmoAtar, Tarkib Ghalat!" << endl;
    }
    Check_Alcohol_inputs(C, H, O, amo_atar);
}

bool Labratory::Check_Alcohol_inputs(int C, int H, int O, Atar &amo_atar)
{
    if (C == 2 && H == 6 && O == 1)
    {
        cout << "\t\t Payane Farayand!" << endl;
        cout << "Shoma Yek Bottry Alcohol Dorost Kardid." << endl;
        //Amount increament in Inventory
        amo_atar.set_repository_amount("Alcohol", amo_atar.get_repository_amount("Alcohol") + 1);

        return true;
    }
    else
    {
        cout << "Tarkibe Eshtebah!\n Dobare Talash Konid!" << endl;
        return false;
    }
}

void Labratory::Make_Comphor(Atar &amo_atar)
{
    cout << "Farayande Dorost Kardan Kafoor...\n"
         << endl;
    int C, H, O;
    cout << "Tedade Carbon: " << endl;
    try
    {
        cin >> C;
    }
    catch (const std::ios_base::failure &failure)
    {
        cout << "Alan Mifrestimon Hava AmoAtar, Tarkib Ghalat!" << endl;
    }
    cout << "Tedade Hydrogen: " << endl;
    try
    {
        cin >> H;
    }
    catch (const std::ios_base::failure &failure)
    {
        cout << "Alan Mifrestimon Hava AmoAtar, Tarkib Ghalat!" << endl;
    }
    cout << "Tedade Oxygen: " << endl;
    try
    {
        cin >> O;
    }
    catch (const std::ios_base::failure &failure)
    {
        cout << "Alan Mifrestimon Hava AmoAtar, Tarkib Ghalat!" << endl;
    }
    Check_Comphor_inputs(C, H, O, amo_atar);
}

bool Labratory::Check_Comphor_inputs(int C, int H, int O, Atar &amo_atar)
{
    if (C == 10 && H == 16 && O == 1)
    {
        cout << "\t\t Payane Farayand!" << endl;
        cout << "Shoma Yek Pack Kafoor Dorost Kardid." << endl;
        //Amount increament in Inventory
        amo_atar.set_repository_amount("Kafoor", amo_atar.get_repository_amount("Kafoor") + 1);

        return true;
    }
    else
    {
        cout << "Tarkibe Eshtebah!\n Dobare Talash Konid!" << endl;
        return false;
    }
}

void Labratory::Make_Naphtaline(Atar &amo_atar)
{
    cout << "Farayande Dorost Kardan Naphtaline...\n"
         << endl;
    int C, H, O;
    cout << "Tedade Carbon: " << endl;
    try
    {
        cin >> C;
    }
    catch (const std::ios_base::failure &failure)
    {
        cout << "Alan Mifrestimon Hava AmoAtar, Tarkib Ghalat!" << endl;
    }
    cout << "Tedade Hydrogen: " << endl;
    try
    {
        cin >> H;
    }
    catch (const std::ios_base::failure &failure)
    {
        cout << "Alan Mifrestimon Hava AmoAtar, Tarkib Ghalat!" << endl;
    }
    cout << "Tedade Oxygen: " << endl;
    try
    {
        cin >> O;
    }
    catch (const std::ios_base::failure &failure)
    {
        cout << "Alan Mifrestimon Hava AmoAtar, Tarkib Ghalat!" << endl;
    }
    Check_Naphtaline_inputs(C, H, O, amo_atar);
}

bool Labratory::Check_Naphtaline_inputs(int C, int H, int O, Atar &amo_atar)
{
    if (C == 10 && H == 8 && O == 0)
    {
        cout << "\t\t Payane Farayand!" << endl;
        cout << "Shoma Yek Pack Naphtaline Dorost Kardid." << endl;
        //Amount increament in Inventory
        amo_atar.set_repository_amount("Naphtaline", amo_atar.get_repository_amount("Naphtaline") + 1);

        return true;
    }
    else
    {
        cout << "Tarkibe Eshtebah!\n Dobare Talash Konid!" << endl;
        return false;
    }
}

void Labratory::Initialize_Labratory(bool Lab, Atar &amo_atar)
{
    if (Lab == true)
    {
        cout << "\n\t\t*------*[Labratory]*------*" << endl;

        bool loop = true;
        while (loop == true)
        {
            cout << "\n(1)Alcohol | (2)Kafoor | (3)Naphtaline | (0)Back To Menu" << endl;
            int choice;
            cin >> choice;
            switch (choice)
            {
            case 1:
                Make_Alcohol(amo_atar);
                break;
            case 2:
                Make_Comphor(amo_atar);
                break;
            case 3:
                Make_Naphtaline(amo_atar);
                break;
            case 0:
                loop = false;
                break;
            default:
                cout << "Vorodiye Eshtebah!\nTry Again:\n"
                     << endl;
            }
        }
    }
    else
    {
        cout << "Labratory Hanoz Kharidari Nashode!" << endl;
    }
}