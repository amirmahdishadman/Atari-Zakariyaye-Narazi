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
string repository_herbs[22]={"Narenj","khar maryam","Shahtare","KhakShir","Marze","Ocaliptos","Darchin"
,"Avishan","Jo dosar","Sir","Gon","Karchak","Shirin Bayan","Barg Aloevera","Asal","Jinsing","Gol Gavzabon"
,"Zaferan","Ostokhoddos","Alcohol","Naphtaline","Kafoor"};
double repository_amount[22]={0};



private:
double Money;//money of atar
int Reputation_Level;//level of atar
};
#endif