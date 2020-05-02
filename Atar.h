#ifndef Atar_H
#define Atar_H
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Atar
{
private:
    //Atar's money
    double Money;
    //Atar's Level
    int Reputation_Level;
    //Atar's Reputation_amount (necessary for changing levels)
    int Reputation_amount;
public:
    //Constructor for initializing setters
    Atar();
    int Level2_Rep;
    int Level3_Rep;
    int Level4_Rep;
    //set Vectors
    void initialize_vectors();
    //SHow info about atar
    void Show_State(Atar&);
    //return index of each herb
    int get_repository_herbs_index(string);
    //set repository amount by herbname
    void set_repository_amount(string,double);
    //get repository amount by herbname
    double get_repository_amount(string);
    //set Atar's money
    void setMoney(double);
    //return Atar's Money
    double getMoney();
    //set Atar's Level
    void setReputation_Level(int);
    //return Atar's Level
    int getReputation_Level();
    //set Reputation relates on levels
    void setReputation_amount(int);
    //return Reputation relates on levels
    int getReputation_amount();
    //repository of herbs of atar
    vector <string> repository_herbs;
    //max 12 char
    //Balaei o Hamono Ba to set_repository_herbs() besaz o bezn badam to constructoresh ejra kon #check
    //22
    vector <double> repository_amount; //setter getter yadet nare #check
    //inam hamintor
};
#endif