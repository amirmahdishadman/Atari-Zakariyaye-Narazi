#include "Internet.h"
#include<iostream>
using namespace std;
void Internet::internet(int level)
{
    cout << " *------*[Internet]*------*" << endl;

    cout << "Baraye Motalee Darbare Daro Ha Be Link Zir Morajee Konid:" << endl;
    cout << "https://github.com/amirmahdishadman/Drug-and-disease-information" << endl;
    switch (level)
    {

    case 1:
    {
        cout << "File 1 Password : File1.Level1.AmoAtar7249" << endl;
        break;
    }
    case 2:
    {
        cout << "File 1 Password : File1.Level1.AmoAtar7249" << endl;
        cout << "File 2 Password : File2.Level2.AmoAtar1657" << endl;
        break;
    }
    case 3:
    {
        cout << "File 1 Password : File1.Level1.AmoAtar7249" << endl;
        cout << "File 2 Password : File2.Level2.AmoAtar1657" << endl;
        cout << "File 3 Password : File3.Level3.AmoAtar1943" << endl;
        break;
    }
    }
}