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

    void setMoney(double money);

    double getMoney();

    void setReputation_Level(int level);

    int getReputation_Level();

    void setReputation_amount(int amount);

    int getReputation_amount();

    Security_Layer();

    void initialize_vectors();

    int get_repository_herbs_index(string herb_name);
    
    void set_repository_amount(string herb_name, double amount);

    void set_repository_amount(double Amount, int index);

    double get_repository_amount(string herb_name);

    double get_repository_amount(int index);

    int get_Level2_Rep();

    int get_Level3_Rep();

    int get_Level4_Rep();

    void Show_State();
};
