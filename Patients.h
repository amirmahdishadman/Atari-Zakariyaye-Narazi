#ifndef patient
#define patient
#include <vector>
#include<iostream>
#include"Atar.h"
#include"Notebook.h"

using namespace std;

class Patients
{

friend ostream &operator<<(ostream &,Patients &);

public:
    Patients();
    void set_patients_vect();
    //OP_overloading for printing Herbs, Amounts, Costs Defualt informarions

    Patients get_patient(int); //random system for get an patient with level of atar.
    //----------------------------------------------------------------------------------------------
    int Number_of_patients;
    void set_number_of_patients(int, bool); //set the number of patients in an loop.
    //----------------------------------------------------------------------------------------------
    void Patients_refer(int,bool,Atar&,Notebook&); //int for level of atar and bool for extera server option.

    //------------------------------------------------

    string Cost_system_check(double, double);

    int Herbs_system_check(Patients, string); //for medicine is ok or not

    string Amount_system_check(double, double);

    /*
***************************************************************
*                                                             *
********              _____PRIVATE_____               *********
*                                                             *
***************************************************************
*/
private:
    string Ill;
    string Herb[3];
    double Amount[3];
    double cost[3];
    vector< vector<Patients> > patients_vect;//#check use setter within a constructor dude

    //end class.
};
#endif