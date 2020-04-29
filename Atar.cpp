#include"Atar.h"

template <typename T>
inline ostream &operator<<(ostream &Output, vector <T> &vct)
{
    for (int i = 0; i < 22; i++)
    {
        Output << vct[i] << " ";
    }
    Output << endl;
    return Output;
}

void Atar::setMoney(double money)
{
    cout << repository_herbs << "ndisnd" << endl;
    this->Money=money;
}
double Atar::getMoney()
{
    return this->Money;
}

void Atar::setReputation_Level(int level)
{
    this->Reputation_Level=level;
}
int Atar::getReputation_Level()
{
    return this->Reputation_Level;
}

