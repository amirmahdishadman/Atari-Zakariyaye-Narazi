#include"Atar.h"
//#define TestCase          //<<<---------->>> For Using TestCase Oncomment it!

//OP_overloading for printing Herbs, Amounts, Costs in Inventory informarions
template <typename T>
ostream &operator<<(ostream &Output, vector <T> &vct)
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
    initialize_vectors();
    #ifndef TestCase
    Level2_Rep=30;
    Level3_Rep=70;
    Level4_Rep=150;
    setReputation_amount(0);
    setReputation_Level(1);
    setMoney(300000);
    #endif
    #ifdef TestCase
    initialize_vectors();
    Level2_Rep=10;
    Level3_Rep=30;
    Level4_Rep=60;
    setMoney(100000000)
    setReputation_amount(0);
    setReputation_Level(1);
    #endif
}
void Atar::initialize_vectors()
{
    repository_herbs.reserve(22);
    repository_herbs = {"Narenj", "khar maryam", "Shahtare", "KhakShir", "Marze", "Ocaliptos"
    , "Darchin", "Avishan", "Jo dosar", "Sir", "Gon", "Karchak", "Shirin Bayan", "Barg Aloevera", "Asal"
    , "Jinsing", "Gol Gavzabon", "Zaferan", "Ostokhoddos", "Alcohol", "Naphtaline", "Kafoor"};
    repository_amount.reserve(22);
    repository_amount = {0};
    
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

void Atar::Show_State(Atar &amoo_atar)
{
    cout<<"~> Meghdar Daroo Haye Mojod:"<<endl;
    cout<<amoo_atar.repository_herbs;
    cout<<amoo_atar.repository_amount;
    cout<<endl;

    cout<<"Mizan Servat Shoma : "<<amoo_atar.getMoney()<<"    |     Mizan Sath Shohrat Shoma : "<<amoo_atar.getReputation_Level()<<endl;
    cout<<"Mizan Shohrat Shoma : "<<amoo_atar.getReputation_amount()<<"    |    Mizan Shohrat Lazem Baraye ";
    if(amoo_atar.getReputation_Level()==1)
    {
        cout<<"Sath 2 : "<<amoo_atar.Level2_Rep-amoo_atar.getReputation_amount()<<endl;
    }
    else if(amoo_atar.getReputation_Level()==2)
    {
        cout<<"Sath 3 : "<<amoo_atar.Level3_Rep-amoo_atar.getReputation_amount()<<endl;
    }
    else if(amoo_atar.getReputation_Level()==3)
    {
        cout<<"Barande Shodan : "<<amoo_atar.Level4_Rep-amoo_atar.getReputation_amount()<<endl;
    }
    
}