#include "App.h"

void App::ShowMenu()
{
   //Initializing Vectors
   Patient.set_patients_vect();
   
   //User Choice
   int listnumber;

   //Welcome
   if (Bazar.Check_Lab() == true)
   {
   cout << "============================== Game Initialized! ==============================" << endl;
   cout << "    _____                      _____   __                " << endl;
   cout << "   /  _  \\   _____   ____     /  _  \\_/  |______ _______ " << endl;
   cout << "  /  /_\\  \\ /     \\ /  _ \\   /  /_\\  \\   __\\__  \\_  __ \\" << endl;
   cout << " /    |    \\  Y Y  (  <_> ) /    |    \\  |  / __ \\|  | \\/" << endl;
   cout << " \\____|__  /__|_|  /\\____/  \\____|__  /__| (____  /__|   " << endl;
   cout << "         \\/      \\/                 \\/          \\/       " << endl;
   cout << "  ██████   █████  ███    ███ ███████ " << endl;
   cout << " ██       ██   ██ ████  ████ ██      " << endl;
   cout << " ██   ███ ███████ ██ ████ ██ █████   " << endl;
   cout << " ██    ██ ██   ██ ██  ██  ██ ██      " << endl;
   cout << "  ██████  ██   ██ ██      ██ ███████" << endl;
   }

   //Game Loop
   while (true)
   {
      //GUI
      if (Bazar.Check_GUI() == true)
      {
         cout << "╔═━────━▒      ۞      ▒━────━═╗" << endl;
                                  
         cout << "   /\\/\\   ___ _ __  _   _  " << endl;
         cout << "  /    \\ / _ \\ '_ \\| | | | " << endl;
         cout << " / /\\/\\ \\  __/ | | | |_| | " << endl;
         cout << " \\/    \\/\\___|_| |_|\\__,_| " << endl;
      }
      
      //Check whether Lab is Unlocked or not
      if (Bazar.Check_Lab() == true)
      {
         cout << "Lotfan Az Item haye Zir Entekhab Konid: " << endl
           << "-_*[1-Morajee Moshtari" << endl
           << "-_*[2-Internet" << endl
           << "-_*[3-Moshahede Vaziyat" << endl
           << "-_*[4-Bazar" << endl
           << "-_*[5-NoteBook" << endl
           << "-_*[6-Azmayeshgah" << endl
           << "-_*[7-Game Loading" << endl
           << "-_*[0-Kharej Shodan Az Bazi" << endl;
         //GUI
         if (Bazar.Check_GUI() == true)
         {
            cout << "╚═━────━▒      ۞      ▒━────━═╝" << endl;
         }
      }
      else
      {
         cout << "Lotfan Az Item haye Zir Entekhab Konid: " << endl
           << "1-Morajee Moshtari" << endl
           << "2-Internet" << endl
           << "3-Moshahede Vaziyat" << endl
           << "4-Bazar" << endl
           << "5-NoteBook" << endl
           << "6-Game Loading" << endl
           << "0-Kharej Shodan Az Bazi" << endl;
         //GUI
         if (Bazar.Check_GUI() == true)
         {
            cout << "╚═━────━▒      ۞      ▒━────━═╝" << endl;
         }
      }

      cout << "Choice?: ";
      cin >> listnumber;

      //GUI
      if (Bazar.Check_GUI() == true)
      {
         cout << "------------" << endl;
      }

      //Control Inputs
      switch (listnumber)
      {
         case 1:
         {
            //GUI
            if (Bazar.Check_GUI() == true)
            {
               cout << "     ▅▄▃▁▁▁▁▁▁▁▁▁▁▁▁PATIENTS▁▁▁▁▁▁▁▁▁▂▃▄▅" << endl;
               cout << "                     /:""|       .@@@@@," << endl;
               cout << "     |: 66|_      @@@@@@@@, " << endl;
               cout << "     C     _)     aa`@@@@@@ " << endl;
               cout << "      \\ ._|      (_   ?@@@@ " << endl;
               cout << "       ) /        =' @@@@" << endl;
               cout << "      /`\\         \\(``` " << endl;
               cout << "     || |Y|       //`\\        .""~~~~~"". " << endl;
               cout << "     || |#|      / | ||       |  .:.  | " << endl;
               cout << "     || |#|      \\ | ||    A  | /6 6\\ | " << endl;
               cout << "     || |#|      / | ||   |~|_|_\\ e /_|_     .@@@@, " << endl;
               cout << "     :| |=:     /  | |\\   |_|)___`""`___(8    aa`@@@," << endl;
               cout << "     ||_|,|    |   |_| \\     |~~~~~~~~~|     =  `@@@ " << endl;
               cout << "     \\)))||    |   (((  |    \\_________/       )_/`@' " << endl;
               cout << "  |~~~`-`~~~|  `~\\~~~~~~|     |/ /_\\ \\|       / || @ " << endl;
               cout << "  |         |     `\\   /      ()/___\\()       | || @ " << endl;
               cout << "  |_________|       ( ||      ||~~~~~||       /~|| " << endl;
               cout << "  |_________|       | ||      ||     ||      /__W_\\ " << endl;
               cout << "      | ||          | ||      ||     ||        ||| " << endl;
               cout << "      |_||__      __|_||      ||_____||       _||| " << endl;
               cout << " jgs  (____))    (:;:;))      ||-----||      ((___) " << endl;
               cout << "------------------------------------------------ " << endl;
            }
            Patient.Patients_refer(Amo_Atar.getReputation_Level(),Bazar.Check_Increasing_Server_Capacity(),Bazar.Check_GUI(),Amo_Atar,NoteBook,Patient);
            if(Bazar.Check_Ai())
            {
               Amo_Atar.Ai();
            }
            break;
         }
         case 2:
         {
            //GUI
            if (Bazar.Check_GUI() == true)
            {
               cout << "     ▅▄▃▁▁▁▁▁▁▁▁▁▁▁▁INTERNET▁▁▁▁▁▁▁▁▁▂▃▄▅" << endl;
               cout << "        .__________________________. " << endl;
               cout << "        | .___________________. |==| " << endl;
               cout << "        | | ................. | |  | " << endl;
               cout << "        | | ::::INTERNET::::: | |  | " << endl;
               cout << "        | | ::::::::::::::::: | |  | " << endl;
               cout << "        | | :::::GITHUB:::::: | |  | " << endl;
               cout << "        | | ::::::::::::::::: | |  | " << endl;
               cout << "        | | ::::::::::::::::: | |  | " << endl;
               cout << "        | | ::::::::::::::::: | | ,| " << endl;
               cout << "        | !___________________! |(c| " << endl;
               cout << "        !_______________________!__! " << endl;
               cout << "       /                            \\ " << endl;
               cout << "      /  [][][][][][][][][][][][][]  \\ " << endl;
               cout << "     /  [][][][][][][][][][][][][][]  \\ " << endl;
               cout << "    (  [][][][][____________][][][][]  ) " << endl;
               cout << "     \\ ------------------------------ / " << endl;
               cout << "      \\______________________________/ " << endl;
            }
            
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
            //GUI
            if (Bazar.Check_GUI() == true)
            {
               cout << "       ▅▄▃▁▁▁▁▁▁▁▁▁▁▁▁NOTEBOOK▁▁▁▁▁▁▁▁▁▂▃▄▅" << endl;
               cout << "    (`/\" " << endl;
               cout << "    `=\\/\\ __...--~~~~~-._   _.-~~~~~--...__" << endl;
               cout << "     `=\\/\\               \\ /               \\" << endl;
               cout << "      `=\\/                V                 \\" << endl;
               cout << "      //_\\___--~~~~~~-._  |  _.-~~~~~~--...__\\" << endl;
               cout << "     //  ) (..----~~~~._\\ | /_.~~~~----.....__\\" << endl;
               cout << "    ===( INK )==========\\|//====================" << endl;
               cout << "   _____\\___/__________`---`_____________________" << endl;

            }
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
            cout << "Saving The Game..." << endl;
            SaveProcess();
            cout << "============================== GoodBye! ==============================" << endl;
            //GUI
            if (Bazar.Check_GUI() ==  true)
            {
               cout << "         wWWWw               wWWWw" << endl;
               cout << "   vVVVv (___) wWWWw         (___)  vVVVv  " << endl;
               cout << "   (___)  ~Y~  (___)  vVVVv   ~Y~   (___)  " << endl;
               cout << "    ~Y~   \\|    ~Y~   (___)    |/    ~Y~" << endl;
               cout << "    \\|   \\ |/   \\| /  \\~Y~/   \\|    \\ |/" << endl;
               cout << "   \\\\|// \\\\|// \\\\|/// \\\\|//  \\\\|// \\\\|/// " << endl;
               cout << "   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            }
            exit(0);
            break;
         }
            
         default:
         {
            cout << "Itemi Ba In Shomare Vojod Nadarad !" << endl;
            break;
         }
         
      }
      Hacker();

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
      cerr << "Loading Failed, Maybe you've deleted the save.txt file or file format's been Corrupted!" << endl;
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
      cout << "Loading Completed!" << endl;
   }
}

void App::Hacker()
{
   if (Bazar.Check_Security() == false)
   {
      double increament;
      increament = 10 * 1000;
      Amo_Atar.setMoney(Amo_Atar.getMoney() - increament);
      cout << " Az Hesabe shoma Pol bardasht ShodeHarche Zod Tar Option Security ra Bekharid!" << endl;
   }
}
