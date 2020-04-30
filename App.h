#ifndef App_H
#define App_H
#include "Atar.h"
#include "Patients.h"
#include "Internet.h"
#include "Market.h"
#include "Notebook.h"
#include "Laboratory.h"

using namespace std;

class App
{
public:
    //Initializing classes
    Atar Amo_Atar;
    Market Bazar;
    Notebook NoteBook;
    Labratory Lab;
    
    //App System Function
    void ShowMenu();
};
#endif