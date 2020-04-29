
#include"Market.h"

#ifndef at
#define at
class Atar
{
public:

void setMoney(double);
double getMoney();

void setReputation_Level(int);
int getReputation_Level();



//repository of herbs of atar
string repository_herbs[22]={"Narenj","KhareMaryam","Shahtare","KhakShir","Marze","Ocaliptoos","Darchin","Avishan","JoDoSar","Sir","Goon","Karchak","ShirinBayan","AloEvera","Asal","Jinsing","GolGavZaban","Zaferan","Ostokhodoos","Alcool","Naftalin","Kafoor"};
double repository_amount[22]={0};



private:
double Money;//money of atar
int Reputation_Level;//level of atar
}amoo_atar;

#endif