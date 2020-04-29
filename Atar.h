#ifndef Atar_H
#define Atar_H
class Atar
{
private:
    //Atar's money
    double Money;
    //Atar's Reputation
    int Reputation_Level; 
public:
    void setMoney(double);
    double getMoney();

    void setReputation_Level(int);
    int getReputation_Level();

    //repository of herbs of atar
    string repository_herbs[22] = {"Narenj", "khar maryam", "Shahtare", "KhakShir", "Marze", "Ocaliptos", "Darchin", "Avishan", "Jo dosar", "Sir", "Gon", "Karchak", "Shirin Bayan", "Barg Aloevera", "Asal", "Jinsing", "Gol Gavzabon", "Zaferan", "Ostokhoddos", "Alcohol", "Naphtaline", "Kafoor"};
    //Balaei o Hamono Ba to set_repository_herbs() besaz o bezn badam to constructoresh ejra kon #check
    double repository_amount[22] = {0};
    //inam hamintor
};
#endif