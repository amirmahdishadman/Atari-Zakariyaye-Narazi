#ifndef App_H
#define App_H
#include <fstream>
#include "Atar.h"
#include "Patients.h"
#include "Internet.h"
#include "Market.h"
#include "Notebook.h"
#include "Laboratory.h"
#include<iostream>

using namespace std;

class App
{
public:
    //Initializing classes
    Atar Amo_Atar;
    Market Bazar;
    Notebook NoteBook;
    Labratory Lab;
    Patients Patient;
    
    //App System Function
    void ShowMenu();

    //For Saving the Game
    void SaveProcess();

    //For Loading the Game
    void LoadProcess();
};
#endif