#include "App.h"

void App::ShowMenu()
{
   //Loading The Game
   // LoadProcess(); DEBUUG

   //User Choice
   int listnumber;
   
   Patient.set_patients_vect();
   //Game Loop
   while (true)
   {
      
      //Check whether Lab is Unlocked or not
      if (Bazar.Check_Lab() == true)
      {
         cout << "Lotfan Az Item haye Zir Entekhab Konid  (Be sorat shomare menu : 1 , 2 , 3 , ...) : " << endl
           << "1-Morajee Moshtari" << endl
           << "2-Internet" << endl
           << "3-Moshahede Vaziyat" << endl
           << "4-Bazar" << endl
           << "5-NoteBook" << endl
           << "6-Azmayeshgah"
           << "0-Kharej Shodan Az Bazi" << endl;
      }
      else
      {
         cout << "Lotfan Az Item haye Zir Entekhab Konid  (Be sorat shomare menu :1 2 3 ...) : " << endl
           << "1-Morajee Moshtari" << endl
           << "2-Internet" << endl
           << "3-Moshahede Vaziyat" << endl
           << "4-Bazar" << endl
           << "5-NoteBook" << endl
           << "0-Kharej Shodan Az Bazi" << endl;
      }

      //Saving The Game
      SaveProcess();
      cin >> listnumber;
      //Control Inputs
      switch (listnumber)
      {
         case 1:
         {
            Patient.Patients_refer(Amo_Atar.getReputation_Level(),Bazar.Check_Increasing_Server_Capacity(),Amo_Atar,NoteBook,Patient);
            break;
         }
         case 2:
         {
            Internet::internet(Amo_Atar.getReputation_Level());
            break;
         }
         
         case 3:
         {
            Amo_Atar.Show_State(Amo_Atar);
            break;
         }
            
         case 4:
         {
            Bazar.Buy(Amo_Atar);
            break;
         }
            
         case 5:
         {
            NoteBook.Initialize_NoteBook();
            break;
         }
         //Lab ********************************
         if(Bazar.Check_Lab() == true)
         {
             case 6:
            {
               Lab.Initialize_Labratory(Bazar.Check_Lab(), Amo_Atar);
               break;
            }
         }
         //end Lab *****************************
         case 0:
         {
            cout << "Kharej Shodan Az Bazi..." << endl;
            exit(0);
            break;
         }
            
         default:
         {
            cout << "Itemi Ba In Shomare Vojod Nadarad !" << endl;
            break;
         }
         
      }
   }
}

void App::SaveProcess()
{
   ofstream OutFile("Save.txt", ios::out);
   if (!OutFile)
   {
      cerr << "Save Failed, Attempt Again!" << endl;
   }
   else
   {
      OutFile << Amo_Atar.getReputation_Level();
      OutFile << " " << Amo_Atar.getReputation_amount() << endl;
      OutFile << Amo_Atar.getMoney() << endl;
      OutFile << Bazar.Security << " " << Bazar.Herbs_Level2 << " " << Bazar.Herbs_Level3
      << " " << Bazar.GUI << " " << Bazar.Increasing_Server_Capacity << " " << Bazar.Lab << endl;
      for (int i = 0; i < 22; i++)
      {
         OutFile << Amo_Atar.repository_herbs[i] << " ";
      }
      
      OutFile.close();
   }
}

void App::LoadProcess()
{
   ifstream InFile("Save.txt", ios::in);
   if (!InFile)
   {
      cerr << "Loading Failed,\n Maybe you've deleted the save.txt file or file format's been Corrupted!" << endl;
   }
   else
   {
      int Level, Reputation;
      double Money;
      int Herbs_Amount[22];
      InFile >> Level >> Reputation;
      InFile >> Money;
      bool sec, HLv2, HLv3, GUI, Cap, Lab;
      InFile >> sec >> HLv2 >> HLv3 >> GUI >> Cap >> Lab;
      int i = 0;
      while (InFile >> Herbs_Amount[i])
      {
         i++;
      }
      InFile.close();

      Amo_Atar.setReputation_Level(Level);
      Amo_Atar.setReputation_amount(Reputation);
      Amo_Atar.setMoney(Money);
      Bazar.Security = sec;
      Bazar.Herbs_Level2 = HLv2;
      Bazar.Herbs_Level3 = HLv3;
      Bazar.GUI = GUI;
      Bazar.Increasing_Server_Capacity = Cap;
      Bazar.Lab = Lab;
      for (int i = 0; i < 22; i++)
      {
         Amo_Atar.repository_amount[i] = Herbs_Amount[i];
      }
   }
}
