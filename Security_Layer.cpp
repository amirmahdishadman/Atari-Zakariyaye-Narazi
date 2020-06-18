#include "Security_Layer.h"

void Security_Layer::setMoney(double money)
{
    this->Money = money;
}
double Security_Layer::getMoney()
{
    return this->Money;
}

void Security_Layer::setReputation_Level(int level)
{
    this->Reputation_Level = level;
}
int Security_Layer::getReputation_Level()
{
    return this->Reputation_Level;
}

void Security_Layer::setReputation_amount(int amount)
{
    this->Reputation_amount = amount;
}
int Security_Layer::getReputation_amount()
{
    return this->Reputation_amount;
}

Security_Layer::Security_Layer()
{
    initialize_vectors();
    Level2_Rep = 10;
    Level3_Rep = 30;
    Level4_Rep = 50;
    setReputation_amount(0);
    setReputation_Level(1);
    setMoney(500000);
}
void Security_Layer::initialize_vectors()
{
    repository_herbs.reserve(22);
    repository_herbs = {"Narenj", "KharMaryam", "Shahtare", "KhakShir", "Marze", "Ocaliptos", "Darchin", "Avishan", "Jodosar", "Sir", "Gon", "Karchak", "ShirinBayan", "BargAloevera", "Asal", "Jinsing", "GolGavZaban", "Zaferan", "Ostokhoddos", "Alcohol", "Naphtaline", "Kafoor"};
    repository_amount.reserve(22);
    repository_amount = {0};
}

int Security_Layer::get_repository_herbs_index(string herb_name)
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

void Security_Layer::set_repository_amount(string herb_name, double amount)
{
    int index = get_repository_herbs_index(herb_name);
    repository_amount[index] = amount;
}

void Security_Layer::set_repository_amount(double Amount, int index)
{
    repository_amount[index] = Amount;
}

double Security_Layer::get_repository_amount(string herb_name)
{
    int index = get_repository_herbs_index(herb_name);
    return repository_amount[index];
}

double Security_Layer::get_repository_amount(int index)
{
    return repository_amount[index];
}

int Security_Layer::get_Level2_Rep()
{
    return Level2_Rep;
}

int Security_Layer::get_Level3_Rep()
{
    return Level3_Rep;
}

int Security_Layer::get_Level4_Rep()
{
    return Level4_Rep;
}

void Security_Layer::Show_State()
{
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