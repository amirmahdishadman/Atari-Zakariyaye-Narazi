#ifndef Labratory_H
#define Labratory_H
#include <iostream>
#include "Atar.h"

using namespace std;

class Labratory
{
public:
    /*Making Alcohol*/
    void Make_Alcohol(Atar &);
    //Check if C | H | O is corroct for alcohol return true if the inputs are true!
    bool Check_Alcohol_inputs(int, int , int, Atar &);

    /*Making Comphor (Kafor)*/
    void Make_Comphor(Atar &);
    //Check if C | H | O is corroct for Comphor (Kafoor) return true if the inputs are true!
    bool Check_Comphor_inputs(int, int , int, Atar &);

    /*Making Naphtaline*/
    void Make_Naphtaline(Atar &);
    //Check if C | H | O is corroct for Naphtaline return true if the inputs are true!
    bool Check_Naphtaline_inputs(int, int , int, Atar &);

    /*System of Labratory*/
    void Initialize_Labratory(bool, Atar &amo_atar);
};
#endif