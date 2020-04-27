#ifndef Atar_H
#define Atar_H

class Atar
{
    friend class Market;
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



#endif