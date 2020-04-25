#ifndef atar
#define atar
#include "Market.h"

class Atar
{
private:
    //Amo Atar total money
    double Money;        
    //Amo Atar total Reputation
    int Reputation_Level;
public:
    void setMoney(double);
    void setReputation_Level(int);
    double getMoney();
    int getReputation_Level();
    
    /*Return True if each option in market was purchased*/
    bool Check_Security(Market &);
    bool Check_Herbs_Level2(Market &);
    bool Check_Herbs_Level3(Market &);
    bool Check_GUI(Market &);
    bool Check_Increasing_Server_Capacity(Market &);
    bool Check_Lab(Market &);
};

void Atar::setMoney(double money)
{
    this->Money=money;
}

void Atar::setReputation_Level(int level)
{
    this->Reputation_Level=level;
}

double Atar::getMoney()
{
    return this->Money;
}

int Atar::getReputation_Level()
{
    return this->Reputation_Level;
}

bool Atar::Check_Security(Market &market)
{
    if (market.Security == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Atar::Check_Herbs_Level2(Market &market)
{
    if (market.Herbs_Level2 == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Atar::Check_Herbs_Level3(Market &market)
{
    if (market.Herbs_Level3 == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Atar::Check_GUI(Market &market)
{
    if (market.GUI == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Atar::Check_Increasing_Server_Capacity(Market &market)
{
    if (market.Increasing_Server_Capacity == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Atar::Check_Lab(Market &market)
{
    if (market.Lab == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

#endif