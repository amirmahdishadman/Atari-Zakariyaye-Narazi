#include "Laboratory.h"

void Labratory::Make_Alcohol(Atar &amo_atar)
{
    cout << "Making Alcohol Process Started...\n" << endl;
    int C,H,O;
    cout << "Enter the number of Carbons: ";
    cin >> C;
    cout << endl;
    cout << "Enter the number of Hydrogens: ";
    cin >> H;
    cout << endl;
    cout << "Enter the number of Oxygens: ";
    cin >> O;
    cout << endl;
    Check_Alcohol_inputs(C, H, O, amo_atar);
}

bool Labratory::Check_Alcohol_inputs(int C, int H, int O, Atar &amo_atar)
{
    if (C == 2 && H == 6 && O == 2)
    {
        cout << "\t\t Alcohol Process End!" << endl;
        cout << "You Have Made 1 Bottle of Alcohol." << endl;
        //Amount increament in Inventory
        amo_atar.repository_amount[19]++;

        return true;
    }
    else
    {
        cout << "Wrong Combine!\n Try Again!" << endl;
        return false;
    }
    
}

void Labratory::Make_Comphor(Atar &amo_atar)
{
    cout << "Making Comphor Process Started...\n" << endl;
    int C,H,O;
    cout << "Enter the number of Carbons: ";
    cin >> C;
    cout << endl;
    cout << "Enter the number of Hydrogens: ";
    cin >> H;
    cout << endl;
    cout << "Enter the number of Oxygens: ";
    cin >> O;
    cout << endl;
    Check_Comphor_inputs(C, H, O, amo_atar);
}

bool Labratory::Check_Comphor_inputs(int C, int H, int O, Atar &amo_atar)
{
    if (C == 10 && H == 16 && O == 1)
    {
        cout << "\t\t Comphor Process End!" << endl;
        cout << "You Have Made 1 pack of Comphor." << endl;
        //Amount increament in Inventory
        amo_atar.repository_amount[21]++;

        return true;
    }
    else
    {
        cout << "Wrong Combine!\n Try Again!" << endl;
        return false;
    }
    
}

void Labratory::Make_Naphtaline(Atar &amo_atar)
{
    cout << "Making Naphtaline Process Started...\n" << endl;
    int C,H,O;
    cout << "Enter the number of Carbons: ";
    cin >> C;
    cout << endl;
    cout << "Enter the number of Hydrogens: ";
    cin >> H;
    cout << endl;
    cout << "Enter the number of Oxygens: ";
    cin >> O;
    cout << endl;
    Check_Naphtaline_inputs(C, H, O, amo_atar);
}

bool Labratory::Check_Naphtaline_inputs(int C, int H, int O, Atar &amo_atar)
{
    if (C == 10 && H == 8 && O == 0)
    {
        cout << "\t\t Naphtaline Process End!" << endl;
        cout << "You Have Made 1 pack of Naphtaline." << endl;
        //Amount increament in Inventory
        amo_atar.repository_amount[20]++;

        return true;
    }
    else
    {
        cout << "Wrong Combine!\n Try Again!" << endl;
        return false;
    }
    
}

void Labratory::Initialize_Labratory(bool Lab, Atar &amo_atar)
{
    if (Lab == true)
    {
        cout << "You Entered Labratory!" << endl;
        cout << "(1)Alcohol | (2)Comphor | (3)Naphtaline | (0)Back To Menu" << endl;
        int choice;
        cin >> choice;

        bool loop = true;
        while (loop == true)
        {
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
                cout << "Wrong Number!\nTry Again:" << endl;
            }
        }
    }
    else
    {
        cout << "Labratory is not purchased yet!" << endl;
    }
}