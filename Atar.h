#ifndef Atar_H
#define Atar_H
#include <iostream>
#include <vector>
using namespace std;

//OP_overloading for printing Herbs, Amounts, Costs in Inventory informarions
template <typename T>
inline ostream &operator<<(ostream &, vector <T> &);

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
    vector <string> repository_herbs {"Narenj", "khar maryam", "Shahtare", "KhakShir", "Marze", "Ocaliptos"
    , "Darchin", "Avishan", "Jo dosar", "Sir", "Gon", "Karchak", "Shirin Bayan", "Barg Aloevera", "Asal"
    , "Jinsing", "Gol Gavzabon", "Zaferan", "Ostokhoddos", "Alcohol", "Naphtaline", "Kafoor"};
    //Balaei o Hamono Ba to set_repository_herbs() besaz o bezn badam to constructoresh ejra kon #check
    vector <double> repository_amount; //setter getter yadet nare #check
    //inam hamintor
};
#endif