//#define TestCase          //<<<---------->>> For Using TestCase Oncomment it!
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

static int Start = 0, i = 0;
static int End = 5, j = 5;
//OP_overloading for printing Herbs, Amounts, Costs in Inventory informarions
template <typename T>
ostream &operator<<(ostream &Output, vector<T> &vct)
{
    Start = i;
    End = j;
    for (Start; Start < End; Start++)
    {
        Output << setw(12) << vct[Start] << " ";
    }
    Output << endl;
    return Output;
}

class Security_Layer
{
private:
    //Atar's money
    double Money;
    //Atar's Level
    int Reputation_Level;
    //Atar's Reputation_amount (necessary for changing levels)
    int Reputation_amount;

public:
    //Level's Reputation Amount Values
    int Level2_Rep;
    int Level3_Rep;
    int Level4_Rep;
    //repository of herbs of atar
    vector<string> repository_herbs;
    //repository of Atar's Herbs amounts
    vector<double> repository_amount;

    void setMoney(double money)
    {
        this->Money = money;
    }
    double getMoney()
    {
        return this->Money;
    }

    void setReputation_Level(int level)
    {
        this->Reputation_Level = level;
    }
    int getReputation_Level()
    {
        return this->Reputation_Level;
    }

    void setReputation_amount(int amount)
    {
        this->Reputation_amount = amount;
    }
    int getReputation_amount()
    {
        return this->Reputation_amount;
    }

    Security_Layer()
    {
        initialize_vectors();
        #ifndef TestCase
        Level2_Rep=30;
        Level3_Rep=70;
        Level4_Rep=150;
        setReputation_amount(0);
        setReputation_Level(1);
        setMoney(400000);
        #endif
        #ifdef TestCase
        initialize_vectors();
        Level2_Rep=10;
        Level3_Rep=30;
        Level4_Rep=60;
        setMoney(100000000);
        setReputation_amount(0);
        setReputation_Level(1);
        #endif
    }
    void initialize_vectors()
    {
        repository_herbs.reserve(22);
        repository_herbs = {"Narenj", "KharMaryam", "Shahtare", "KhakShir", "Marze", "Ocaliptos"
        , "Darchin", "Avishan", "Jodosar", "Sir", "Gon", "Karchak", "ShirinBayan", "BargAloevera", "Asal"
        , "Jinsing", "GolGavzabon", "Zaferan", "Ostokhoddos", "Alcohol", "Naphtaline", "Kafoor"};
        repository_amount.reserve(22);
        repository_amount = {0};
    }

    int get_repository_herbs_index(string herb_name)
    {
        for (int i = 0; i < 22; i++)
        {
            if (repository_herbs[i] == herb_name)
            {
                return i;
            }
        }
        return -100; //chek for any bug.
    }
    
    void set_repository_amount(string herb_name, double amount)
    {
        int index = get_repository_herbs_index(herb_name);
        repository_amount[index] = amount;
    }

    void set_repository_amount(double Amount, int index)
    {
        repository_amount[index] = Amount;
    }

    double get_repository_amount(string herb_name)
    {
        int index = get_repository_herbs_index(herb_name);
        return repository_amount[index];
    }

    double get_repository_amount(int index)
    {
        return repository_amount[index];
    }

    int get_Level2_Rep()
    {
        return Level2_Rep;            
    }

    int get_Level3_Rep()
    {
        return Level3_Rep;            
    }

    int get_Level4_Rep()
    {
        return Level4_Rep;            
    }

    void Show_State()
    {
        cout << "*------*[STATUS]*------*" << endl;
        cout << "~> Meghdar Daroo Haye Mojod:" << endl;
        while (Start != 22)
        {
            i = Start;
            j = End;
            cout << this->repository_herbs;
            cout << this->repository_amount;
            if (Start == 20)
            {
                End = 22;
            }
            else
            {
                End += 5;
            }
        }
        Start = 0;
        End = 5;

        cout << "Mizan Servat Shoma : " << this->getMoney() << endl
             << "Mizan Sath Shohrat Shoma : " << this->getReputation_Level() << endl;
        cout << "Mizan Shohrat Shoma : " << this->getReputation_amount() << endl
             << "Mizan Shohrat Lazem Baraye ";
        if (this->getReputation_Level() == 1)
        {
            cout << "Sath 2 : " << this->Level2_Rep - this->getReputation_amount() << endl;
        }
        else if (this->getReputation_Level() == 2)
        {
            cout << "Sath 3 : " << this->Level3_Rep - this->getReputation_amount() << endl;
        }
        else if (this->getReputation_Level() == 3)
        {
            cout << "Barande Shodan : " << this->Level4_Rep - this->getReputation_amount() << endl;
        }
    }
    
    void Ai()
    {
        for(int i=0;i<22;i++)
        {
            if(this->repository_amount[i]==1)
            {
                cout<<"Mojodi Shoma Az Made Ya Darooye "<<this->repository_herbs[i]<<" "<<repository_amount[i]<<" Vahed Ast !"<<endl<<"Baraye Kharid Eghdam Konid."<<endl;
            }
        }
    }
};
