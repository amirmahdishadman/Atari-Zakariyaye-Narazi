#ifndef Atar_H
#define Atar_H
#include "Security_Layer.h"

class Atar
{
private:
    //pointer to proxy class (PTPC)
    Security_Layer* ptr = NULL;
public:
    //Constructor for initializing setters
    Atar();
    //set Vectors
    void initialize_vectors();
    //SHow info about atar
    void Show_State();
    //return index of each herb
    int get_repository_herbs_index(string) const;
    //set repository amount by Herb Name
    void set_repository_amount(string, double);
    //set repository amount by index
    void set_repository_amount(double, int);
    //get repository amount by Herb Name
    double get_repository_amount(string) const;
    //get repository amount by index
    double get_repository_amount(int) const;
    //set Atar's money
    void setMoney(double);
    //return Atar's Money
    double getMoney() const;
    //set Atar's Level
    void setReputation_Level(int);
    //return Atar's Level
    int getReputation_Level() const;
    //set Reputation relates on levels
    void setReputation_amount(int);
    //return Reputation relates on levels
    int getReputation_amount()  const;
    //return Levelx_Rep
    int get_Level2_Rep() const;
    int get_Level3_Rep() const;
    int get_Level4_Rep() const;
};
#endif