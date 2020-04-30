#ifndef Atar_H
#define Atar_H
#include <iostream>
#include <vector>
#include<iomanip>
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
    int Reputation_amount;
public:


    Atar();
    
    void initialize_repository_vectors();
    int get_repository_herbs_index(string);
    void set_repository_amount(string,double);
    //set repository amount by herbname
    double get_repository_amount(string);
    //get repository amount by herbname




    void setMoney(double);
    double getMoney();

    void setReputation_Level(int);
    int getReputation_Level();

    void setReputation_amount(int);
    int getReputation_amount();
    
    //repository of herbs of atar
    vector <string> repository_herbs {"Narenj", "khar maryam", "Shahtare", "KhakShir", "Marze", "Ocaliptos"
    , "Darchin", "Avishan", "Jo dosar", "Sir", "Gon", "Karchak", "Shirin Bayan", "Barg Aloevera", "Asal"
    , "Jinsing", "Gol Gavzabon", "Zaferan", "Ostokhoddos", "Alcohol", "Naphtaline", "Kafoor"};
    //max 12 char
    //Balaei o Hamono Ba to set_repository_herbs() besaz o bezn badam to constructoresh ejra kon #check
    //22
    vector <double> repository_amount; //setter getter yadet nare #check
    //inam hamintor
};
#endif