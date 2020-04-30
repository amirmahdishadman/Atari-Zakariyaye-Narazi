#include"Atar.h"

template <typename T>
inline ostream &operator<<(ostream &Output, vector <T> &vct)
{
    for (int i = 0; i < 22; i++)
    {
        Output <<setw(12)<< vct[i] << " ";
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



void Atar::setReputation_amount(int amount)
{
    this->Reputation_amount=amount;
}
int Atar::getReputation_amount()
{
    return this->Reputation_amount;
}   



//aded ------------------------------------------------------------------------------------------------
Atar::Atar()
{
    initialize_repository_vectors();
}
void Atar::initialize_repository_vectors()
{
    repository_herbs.reserve(22);
    repository_amount.reserve(22);
}
int Atar::get_repository_herbs_index(string herb_name)
{
    for(int i=0;i<22;i++)
    {
        if(repository_herbs[i]==herb_name)
        {
            return i;
        }
    }
    return -100;//chek for any bug.
}
void Atar::set_repository_amount(string herb_name,double amount)
{
    int index=get_repository_herbs_index(herb_name);
    repository_amount[index]=amount;
}
double Atar::get_repository_amount(string herb_name)
{
    int index=get_repository_herbs_index(herb_name);
    return repository_amount[index];
}

