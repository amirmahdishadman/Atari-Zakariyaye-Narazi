#include "App.h"

void App::ShowMenu()
{
   //Check whether Lab is Unlocked or not
   if (Bazar.Check_Lab() == true)
   {
      cout << "Lotfan Az Item haye Zir Entekhab Konid  (Be sorat shomare menu :1 2 3 ...) : " << endl
        << "1-Morajee Moshtari" << endl
        << "2-Internet" << endl
        << "3-Moshahede Vaziyat" << endl
        << "4-Bazar" << endl
        << "5-NoteBook" << endl
        << "6-Azmayeshgah"
        << "0-Kharej shodan az bazi" << endl;
   }
   else
   {
      cout << "Lotfan Az Item haye Zir Entekhab Konid  (Be sorat shomare menu :1 2 3 ...) : " << endl
        << "1-Morajee Moshtari" << endl
        << "2-Internet" << endl
        << "3-Moshahede Vaziyat" << endl
        << "4-Bazar" << endl
        << "5-NoteBook" << endl
        << "0-Kharej shodan az bazi" << endl;
   }

   //User Choice
   int listnumber;
   cin >> listnumber;
   //Game Loop
   while (true)
   {
      //Control Inputs
      switch (listnumber)
      {
      case 1:
         break;
      case 2:
         Internet::internet(Amo_Atar.getReputation_Level());
         break;
      case 3:
         break;
      case 4:
         Bazar.Buy(Amo_Atar);
         break;
      case 5:
         NoteBook.Initialize_NoteBook();
         break;
      case 6:
         Lab.Initialize_Labratory(Bazar.Check_Lab(), Amo_Atar);
         break;
      case 0:
         cout << "Kharej shodan az bazi..." << endl;
         exit(0);
      default:
         cout << "Itemi ba in shomare vojod nadarad" << endl;
         break;
      }
   }
}