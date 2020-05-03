#include "App.h"

void App::ShowMenu()
{
   cout << "============================== Game Initialized! ==============================" << endl;
   //Initializing Vectors
   Patient.set_patients_vect();
   
   //User Choice
   int listnumber;
   
   //Game Loop
   while (true)
   {
      
      //Check whether Lab is Unlocked or not
      if (Bazar.Check_Lab() == true)
      {
         cout << "\nLotfan Az Item haye Zir Entekhab Konid: " << endl
           << "1-Morajee Moshtari" << endl
           << "2-Internet" << endl
           << "3-Moshahede Vaziyat" << endl
           << "4-Bazar" << endl
           << "5-NoteBook" << endl
           << "6-Azmayeshgah" << endl
           << "7-Game Loading" << endl
           << "0-Kharej Shodan Az Bazi" << endl;
      }
      else
      {
         cout << "\nLotfan Az Item haye Zir Entekhab Konid: " << endl
           << "1-Morajee Moshtari" << endl
           << "2-Internet" << endl
           << "3-Moshahede Vaziyat" << endl
           << "4-Bazar" << endl
           << "5-NoteBook" << endl
           << "6-Game Loading" << endl
           << "0-Kharej Shodan Az Bazi" << endl;
      }

      cout << "Menu?: ";
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
            Amo_Atar.Show_State();
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

          case 6:
         {
            if (Bazar.Check_Lab() == true)
            {
               Lab.Initialize_Labratory(Bazar.Check_Lab(), Amo_Atar);
            }
            else
            {
               LoadProcess();
            }
            break;
         }

         case 7:
         {
            if (Bazar.Check_Lab() == true)
            {
               LoadProcess();
            }
            else
            {
               cout << "Itemi Ba In Shomare Vojod Nadarad !" << endl;
            }
            break;
         }

         case 0:
         {
            cout << "\tSaving The Game..." << endl;
            SaveProcess();
            cout << "============================== GoodBye! ==============================" << endl;


            // cout << "    _____                      _____   __                " << endl;
            // cout << "   /  _  \\   _____   ____     /  _  \\_/  |______ _______ " << endl;
            // cout << "  /  /_\\  \\ /     \\ /  _ \\   /  /_\\  \\   __\\__  \\_  __ \\" << endl;
            // cout << " /    |    \\  Y Y  (  <_> ) /    |    \\  |  / __ \\|  | \\/" << endl;
            // cout << " \\____|__  /__|_|  /\\____/  \\____|__  /__| (____  /__|   " << endl;
            // cout << "         \\/      \\/                 \\/          \\/       " << endl;

            exit(0);
            break;
         }
            
         default:
         {
            cout << "Itemi Ba In Shomare Vojod Nadarad !" << endl;
            break;
         }
         
      }

      //Saving The Game
      SaveProcess();
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
      double Amount;
      for (int i = 0; i < 22; i++)
      {
         Amount = Amo_Atar.get_repository_amount(i);
         OutFile << Amount << " ";
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
      //Reading Inputs
      int Level, Reputation;
      double Money;
      double Herbs_Amount[22];
      InFile >> Level >> Reputation;
      InFile >> Money;
      bool sec, HLv2, HLv3, GUI, Cap, Lab;
      InFile >> sec >> HLv2 >> HLv3 >> GUI >> Cap >> Lab;
      int i = 0;
      while (InFile >> Herbs_Amount[i])
      {
         i++;
      }
      //Close File For Saving Memory
      InFile.close();
      //Setting Values
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
         Amo_Atar.set_repository_amount(Herbs_Amount[i], i);
      }
      cout << "_-_-_-_-Loading Completed!_-_-_-_-" << endl;
   }
}

void App::Hacker()
{
   if (Bazar.Check_Security() == false)
   {
      double increament;
      increament = (rand() % 11) * 1000;
      Amo_Atar.setMoney(Amo_Atar.getMoney() - increament);
      cout << "\n Az Hesabe shoma Pol bardasht Shode\nHarche Zod Tar Option Security ra Bekharid!" << endl;
   }
}
