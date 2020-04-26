#ifndef Labratory_H
#define Labratory_H
#include <iostream>

using namespace std;

class Labratory
{
public:
    /*Making Alcohol*/
    void Make_Alcohol();
    //Check if C | H | O is corroct for alcohol return true if the inputs are true!
    bool Check_Alcohol_inputs(int, int , int);

    /*Making Comphor (Kafor)*/
    void Make_Comphor();
    //Check if C | H | O is corroct for Comphor return true if the inputs are true!
    bool Check_Comphor_inputs(int, int , int);

    /*Making Naphtaline*/
    void Make_Naphtaline();
    //Check if C | H | O is corroct for Naphtaline return true if the inputs are true!
    bool Check_Naphtaline_inputs(int, int , int);

    /*System of Labratory*/
    void Initialize_Labratory(bool);
};

void Labratory::Make_Alcohol()
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
    Check_Alcohol_inputs(C, H, O);
}

bool Labratory::Check_Alcohol_inputs(int C, int H, int O)
{
    if (C == 2 && H == 6 && O == 2)
    {
        cout << "\t\t Alcohol Process End!" << endl;
        cout << "You Have Made 1 Bottle of Alcohol." << endl;
        /*
        
                Code
                
                            */
        return true;
    }
    else
    {
        cout << "Wrong Combine!\n Try Again!" << endl;
        return false;
    }
    
}

void Labratory::Make_Comphor()
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
    Check_Comphor_inputs(C, H, O);
}

bool Labratory::Check_Comphor_inputs(int C, int H, int O)
{
    if (C == 10 && H == 16 && O == 1)
    {
        cout << "\t\t Comphor Process End!" << endl;
        cout << "You Have Made 1 pack of Comphor." << endl;
        /*
        
                Code
                
                            */
        return true;
    }
    else
    {
        cout << "Wrong Combine!\n Try Again!" << endl;
        return false;
    }
    
}

void Labratory::Make_Naphtaline()
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
    Check_Naphtaline_inputs(C, H, O);
}

bool Labratory::Check_Naphtaline_inputs(int C, int H, int O)
{
    if (C == 10 && H == 8 && O == 0)
    {
        cout << "\t\t Naphtaline Process End!" << endl;
        cout << "You Have Made 1 pack of Naphtaline." << endl;
        /*
        
                Code
                
                            */
        return true;
    }
    else
    {
        cout << "Wrong Combine!\n Try Again!" << endl;
        return false;
    }
    
}

void Labratory::Initialize_Labratory(bool Lab)
{
    if (Lab == true)
    {
        cout << "You Entered Labratory!" << endl;
        cout << "(1)Alcohol | (2)Comphor | (3)Naphtaline | (0)Cancel" << endl;
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            Make_Alcohol();
            break;
        case 2:
            Make_Comphor();
            break;
        case 3:
            Make_Naphtaline();
            break;
        case 0:
            break;
        default:
            cout << "Wrong Number!\nTry Again:" << endl;
        }
    }
    else
    {
        
    }
}
#endif