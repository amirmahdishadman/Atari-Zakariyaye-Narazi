#include<iostream>
#include<vector>
#include"Patients.h"
#include"App.h"
#include"Internet.h"
#include"Atar.h"
using namespace std;


void App::ShowMenu(Atar &amo_atar)
{
int listnumber;
cout<<"Lotfan Az Item haye Zir Entekhab Konid  (Be sorat shomare menu :1 2 3 ...) : "<<endl<<"1-Morajee Moshtari."<<endl<<"2-Bazar"<<endl<<"3-Internet"<<endl<<"4-NoteBook"<<endl<<"5-Moshahede Vaziyat"<<endl;
//lab show here
cin>>listnumber;
switch (listnumber)
{
case 1:
   {

    break;
   }
case 2:
   {
       
    break;
   }
case 3:
   {
       Internet::internet(amo_atar.getReputation_Level());
    break;
   }
case 4:
   {
       
    break;
   }
case 5:
   {
       
    break;
   }
case 6:
   {
       
    break;
   }    

default:
   {

    break;
   }  
    
}
}