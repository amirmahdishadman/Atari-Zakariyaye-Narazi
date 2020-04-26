#include<vector>

using namespace std;
#ifndef patient
#define patient
class Patients
{
public:
void set_patients_vect();
ostream &operator<<(ostream &, Patients &);
string get_Ill(int);//random system for get an ill with level of atar.
//----------------------------------------------------------------------------------------------
int Number_of_patients;
void set_number_of_patients(int,bool);//set the number of patients in an loop.
//----------------------------------------------------------------------------------------------
void Patients_refer(int,bool);//int for level of atar and bool for extera server option.


//------------------------------------------------
template<typename T>
void Cost_system_check(int,T)


void Treadment_system_check(int,string)


template<typename T>
void Amount_system_check(int,T)


template<typename T>
T To_number(string);
//-------------------------------------------------



/*
***************************************************************
*                                                             *
********              _____PRIVATE_____               *********
*                                                             *
***************************************************************
*/
private:
string Ill;
string Herb;
string Amount;
string cost;
vector<vector<Patients>>patients_vect(3);

//end class.
};
#endif