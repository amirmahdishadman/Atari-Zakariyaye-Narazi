#include "Herb.h"

void Herb::set_Name(string name)
{
    Name = name;
}

string Herb::get_Name()
{
    return Name;
}

void Herb::set_Quantity(int quantity)
{
    Quantity = quantity;
}

int Herb::get_Quantity()
{
    return Quantity;
}

void Herb::set_Cost(double cost)
{
    Cost = cost;
}

double Herb::get_Cost()
{
    return Cost;
}