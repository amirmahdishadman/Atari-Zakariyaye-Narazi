#ifndef Herb_H
#define Herb_H
#include <iostream>
#include <vector>

using namespace std;

class Herb
{    
protected:
    string Name;
    int Quantity;
    double Cost;
public:
    /* Mutators And Accessors For Data Members*/
    void set_Name(string);
    string get_Name();
    void set_Quantity(int);
    int get_Quantity();
    void set_Cost(double);
    double get_Cost();
    /* Storaging All Herbs With their Properties in Herbs-vector */
    vector <Herb> herbs;
    /* Database Of All Herbs*/
    void Herbs();
};
#endif