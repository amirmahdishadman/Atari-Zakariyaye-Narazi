#include <ctime>
#include<iomanip>
#include "Patients.h"
//#define TestCase         //<<<---------->>> For Using TestCase Oncomment it!
using namespace std;

ostream &operator<<(ostream &output,Patients &patients) //#Check. sample o barat sakhtam, edamaro boro
{  
     // alan ino uncoment kon va tedade bimaraye sathe yek o bezari kar mikone
    //***************************Herbs-cost-amount show start*********************************
    cout<<"            ____________________________________________________________________________________"<<endl;

            cout<<setw(30)<<"Esme Daroo"<< " ";
            cout<<setw(30)<<"Gheymat Monsefane"<< " ";
            cout<<setw(30)<<"Meghdar Monsefane"<< " ";
            cout<<endl;
            cout<<endl;
            cout<<"            ____________________________________________________________________________________"<<endl;


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {//instance-vector-sathebimari-kole bimariya dar in sath-giyaha az 1 ta3
            if(i==3&&j==0)
            {
                continue;
            }
            cout<<setw(30)<<patients.patients_vect[0][i].Herb[j] << " ";
            cout<<setw(30)<<patients.patients_vect[0][i].cost[j] << " ";
            cout<<setw(30)<<patients.patients_vect[0][i].Amount[j] << " ";
            cout<<endl;
            cout<<"            ____________________________________________________________________________________"<<endl;
            
        }
        
    }
     for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {//instance-vector-sathebimari-kole bimariya dar in sath-giyaha az 1 ta3
         if(i==2&&j==2)
        {
            continue;
        }
            cout<<setw(30)<<patients.patients_vect[1][i].Herb[j] << " ";
            cout<<setw(30)<<patients.patients_vect[1][i].cost[j] << " ";
            cout<<setw(30)<<patients.patients_vect[1][i].Amount[j] << " ";
            cout<<endl;
            cout<<"            ____________________________________________________________________________________"<<endl;
        }
        
    }
     for (int i = 0; i < 3; i++)
    {
        cout<<setw(30)<<patients.patients_vect[2][i].Herb[0] << " ";
        cout<<setw(30)<<patients.patients_vect[2][i].cost[0] << " ";
        cout<<setw(30)<<patients.patients_vect[2][i].Amount[0] << " ";
        cout<<endl;
        cout<<"            ____________________________________________________________________________________"<<endl;
    }
    //*****************************Herbs-cost-amount show end************************************


    return output;
}



//******************Refer************************
void Patients::Patients_refer(int Level,bool Server_Capacity,Atar &amoo_atar,Notebook &notebook,Patients &patient)
{
    bool herbbool=true,amountisok=true,costisok=true;
    char notelist;
    char herbcount;
    int herbcountint=0;
    patient.set_number_of_patients(Level,Server_Capacity);
    cout<<endl<<endl<<endl<<endl<<"Tedad "<<this->Number_of_patients<<" Moshtari Morajee Karde Ast."<<endl<<endl;
    cout<<"-> Sharh Daroo Ha:"<<endl;
    cout<<patient<<endl<<endl<<endl;
    cout<<" ~>Be Atari Zakariyaye Narazi Khosh Amadid."<<endl<<endl;//can be beautiful mode
    //---------------------------------------------------------------
    for(int i=1;i<=this->Number_of_patients;i++)
    {
        bool save_customer=true;
        double Reputation_Change=0;
        double Money_change=0;
        patient=get_patient(Level);
        cout<<"Salam. Man "<<patient.Ill<<" Daram."<<endl<<endl;
        cout<<"Atar aziz Ba Tavajoh be Bimari , Mavared zir ra Javab Dahid."<<endl<<endl;



        //**********************Manage NoteBook****************************
        cout<<"Aya Mikhahid Az Daftar Yaddasht Estefade Konid ?"<<endl<<"1-Bale"<<endl<<"2-Kheir"<<endl;
        bool notebookrepeat=true;
        while(notebookrepeat)
        {
            cin>>notelist;
                if(notelist=='1')
            {
                Reputation_Change-=1;

                notebook.Initialize_NoteBook();

                notebookrepeat=false;
            }
            else if(notelist=='2')
            {
                notebookrepeat=false;
            }
            else
            {
                cout<<" ~> Lotfan Vorodi Dorost Vared Konid :) "<<endl;
                cout<<"Aya Mikhahid Az Daftar Yaddasht Estefade Konid ?"<<endl<<"1-Bale"<<endl<<"2-Kheir"<<endl;
            }
            
        }
        //**********************end of Manage NoteBook************************



        //**********************Manage Number of Herbs************************

        cout<<" ~> Chand Daro Tajviz Mikonid ? (Enter Betwin 1,2,3):"<<endl;
        bool herbcountrepeat=true;
        while(herbcountrepeat)
        {
        cin>>herbcount;
        if(herbcount=='1')
        {
            herbcountint=1;
            herbcountrepeat=false;
        }
        else if(herbcount=='2')
        {
            herbcountint=2;
            herbcountrepeat=false;
        }
        else if(herbcount=='3')
        {
            herbcountint=3;
            herbcountrepeat=false;
        }
        else
        {
            cout<<" ~> Lotfan Vorodi Dorost Vared Konid :) "<<endl;
            cout<<" ~> Chand Daro Tajviz Mikonid ? (Max 3 and Min 1):"<<endl;
        }

        }

        //*******************end of Manage Number of Herbs**********************

        //**************************Manage Patient******************************
        string ill;
        string herb;
        double amount;
        double cost;
        for(int j=1;j<=herbcountint;j++)
        {
            cout<<"Lotfan Esme Daroye shomare "<<j<<" ra Bar Asas Jadval Vared Konid:"<<endl;
            cin>>herb;
            cout<<"Lotfan Meghdar Mored Nazar Daroye shomare "<<j<<" Ra Bar Asas Jadval Vared Konid:(Shoma nemitavanid kamtar az 1 vared konid.)"<<endl;
            cin>>amount;
            cout<<"Lotfan Gheymat Mored Nazar Daroye shomare "<<j<<" Ra Bar Asas Jadval Vared Konid:"<<endl;
            cin>>cost;

            int herbindex=Herbs_system_check(patient,herb);
            string costpos;
            string amountpos;
            if (herbindex==-1)
            {
                herbbool=false;
                cout<<"Daroye Tajviz Shode ba Bimari Motabeghat Nadarad."<<endl<<endl<<"Shoma Moshtari Ra Az Dast Dadid!"<<endl<<endl<<"Age chizi forkhti halalet vali dg raft !"<<endl;
                Reputation_Change-=5;
                break;
                //ok
            }
            else
            {
                costpos=Cost_system_check(patient.cost[herbindex],cost);
                amountpos=Amount_system_check(patient.Amount[herbindex],amount);

                if(amoo_atar.get_repository_amount(herb)<amount)
                {
                    cout<<" ******* Enghad Daro Nadarim ! ******* "<<endl<<"Shoma Moshtari Ra Az Dast Dadid."<<endl<<"Age chizi forkhti halalet vali dg raft !"<<endl;
                    break;
                }
                else if(costpos=="toolow")
                {

                        cout<<"Moft Khori Be Ma Nayomade!!  (Gheymat Kamtar az had Mojaz bood) ."<<endl<<"Shoma Moshtari Ra Az Dast Dadid!"<<endl<<"Age chizi forkhti halalet vali dg raft !"<<endl;
                        Reputation_Change-=5;
                        break;
                }
                else if(costpos=="discount")
                {
                    if(amountpos=="toolow")
                    {
                        cout<<"Yatim Gir Avordi? (Meghdar Daroo Kamtar az had Mojaz Bood!) ."<<endl<<"Shoma Moshtari Ra Az Dast Dadid!"<<endl<<"Age chizi forkhti halalet vali dg raft !"<<endl;
                        Reputation_Change-=5;
                        break;
                    }
                    else if(amountpos=="kamforoshi")
                    {
                        cout<<"Agha Takhfif Midi Dige Chera Esfahani Bazi Dar Miyari ?"<<endl<<"Inaro baram Kenar bezar."<<endl;
                        Reputation_Change-=8;
                        Reputation_Change+=4;
                        amoo_atar.set_repository_amount(herb,amoo_atar.get_repository_amount(herb)-amount);
                        Money_change=((cost/patient.Amount[herbindex])*amount);
                    }
                    else if(amountpos=="=")
                    {
                        cout<<"Agha nokaram takhfif dadi damet garm"<<endl<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change+=4;
                        Reputation_Change+=2;
                        amoo_atar.set_repository_amount(herb,amoo_atar.get_repository_amount(herb)-amount);
                        Money_change=(((cost/patient.Amount[herbindex])*amount));
                    }
                    else if(amountpos=="hedye")
                    {
                        cout<<"Aghaaaaa Kheyli Chakeram Khoda Kheyret bede Dam Shoma Garm"<<endl<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change+=4;
                        Reputation_Change+=4;
                        amoo_atar.set_repository_amount(herb,(amoo_atar.get_repository_amount(herb))-(patient.Amount[herbindex]));
                        Money_change=(((cost/patient.Amount[herbindex])*amount));
                    }
                }
                else if(costpos=="=")
                {
                    if(amountpos=="toolow")
                    {
                        cout<<"Yatim Gir Avordi? (Meghdar Daroo Kamtar az had Mojaz Bood!) ."<<endl<<"Shoma Moshtari Ra Az Dast Dadid!"<<endl<<"Age chizi forkhti halalet vali dg raft !"<<endl;
                        Reputation_Change-=5;
                        break;
                    }
                    else if(amountpos=="kamforoshi")
                    {
                        cout<<"Haji Kam midi Halalet Nabashe."<<endl<<"Inaro Baram Kenar bezar"<<endl;
                        Reputation_Change-=8;
                        Reputation_Change+=2;
                        amoo_atar.set_repository_amount(herb,amoo_atar.get_repository_amount(herb)-amount);
                        Money_change=(((cost/patient.Amount[herbindex])*amount));
                    }
                    else if(amountpos=="=")
                    {
                        cout<<"Agha Mersi "<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change+=2;
                        Reputation_Change+=2;
                        amoo_atar.set_repository_amount(herb,amoo_atar.get_repository_amount(herb)-amount);
                       Money_change=(((cost/patient.Amount[herbindex])*amount));
                    }
                    else if(amountpos=="hedye")
                    {
                        cout<<"Haji Khoda Kheyret bede"<<endl<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change+=4;
                        Reputation_Change+=2;
                        amoo_atar.set_repository_amount(herb,(amoo_atar.get_repository_amount(herb))-(patient.Amount[herbindex]));
                        Money_change=(((cost/patient.Amount[herbindex])*amount));
                    }
                }
                else if(costpos=="geran")
                {
                    if(amountpos=="toolow")
                    {
                        cout<<"Yatim Gir Avordi Geronam midi ? (Meghdar Daroo Kamtar az had Mojaz Bood!) ."<<endl<<"Shoma Moshtari Ra Az Dast Dadid!"<<endl<<"Age chizi forkhti halalet vali dg raft !"<<endl;
                        Reputation_Change-=5;
                        break;
                    }
                    else if(amountpos=="kamforoshi")
                    {
                        cout<<"Baba In Che Vazeshe ? Ham kam foroshi mikoni Ham geron midi ??? chon majboram mikharam ."<<endl<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change-=4;
                        Reputation_Change-=8;
                        amoo_atar.set_repository_amount(herb,amoo_atar.get_repository_amount(herb)-amount);
                        Money_change=(((cost/patient.Amount[herbindex])*amount));
                    }
                    else if(amountpos=="=")
                    {
                        cout<<"geron midi vali chare chie ?"<<endl<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change-=4;
                        Reputation_Change+=2;
                        amoo_atar.set_repository_amount(herb,amoo_atar.get_repository_amount(herb)-amount);
                        Money_change=(((cost/patient.Amount[herbindex])*amount));
                    }
                    else if(amountpos=="hedye")
                    {
                        cout<<"Chon Hedye dadi Mikharam vali dg Geron nade haji."<<endl<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change-=4;
                        Reputation_Change+=4;
                        amoo_atar.set_repository_amount(herb,(amoo_atar.get_repository_amount(herb))-(patient.Amount[herbindex]));
                        Money_change=(((cost/patient.Amount[herbindex])*amount));
                    }
                }
                else if(costpos=="toomuch")
                {
                    cout<<"Mage Sar Gardanas ?!"<<endl<<"Shoma Moshtari Ra Az Dast Dadid!"<<endl;
                    Reputation_Change-=5;
                    break;
                }
            }

        }
        amoo_atar.setReputation_amount(amoo_atar.getReputation_amount()+Reputation_Change);
        cout<<"----------------------------------------------------------------------------"<<endl
        <<"Sath Shohrat Shoma Dar in Foroosh "<<Reputation_Change<<" Vahed Taghir Kard."<<endl;

        amoo_atar.setMoney(amoo_atar.getMoney()+(Money_change));
         cout<<endl<<"Frosh Shoma Dar In Kharid  ~> "<<Money_change<<" Bood."<<endl;

        cout<<"----------------------------------------------------------------------------"<<endl;





    }
    if(amoo_atar.getReputation_amount()>=150)
    {
        cout<<"####################################################################"<<endl;
        cout<<"# -- -- -- -- -- -- -- -- --  YOU WON!  -- -- -- -- -- -- -- -- -- #"<<endl;
        cout<<"####################################################################"<<endl;
        amoo_atar.setReputation_Level(4);
        exit(0);
    }
    else if(amoo_atar.getReputation_amount()>=70&&amoo_atar.getReputation_Level()==2)
    {
        cout<<"############################################################################"<<endl;
        cout<<"# -- -- -- -- -- -- -- -- --  You Are Level 3!  -- -- -- -- -- -- -- -- -- #"<<endl;
        cout<<"############################################################################"<<endl;
        amoo_atar.setReputation_Level(3);
    }
    else if(amoo_atar.getReputation_amount()>=30&&amoo_atar.getReputation_Level()==1)
    {
        cout<<"###########################################################################"<<endl;
        cout<<"# -- -- -- -- -- -- -- -- -- You Are Level 2!  -- -- -- -- -- -- -- -- -- #"<<endl;
        cout<<"###########################################################################"<<endl;
        amoo_atar.setReputation_Level(2);
    }
}



void Patients::set_patients_vect()//level 3 monde --dar initializer
{
    Patients p;
    patients_vect.reserve(3);
    patients_vect[0].reserve(4);
    patients_vect[1].reserve(3);
    patients_vect[2].reserve(3);

    /*
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
    *                                                             *
    * * * * * * * * * *         LEVEL1        * * * * * * * * * * * 
    *                                                             *
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
    */
    p.Ill="Alerji";
    p.Herb[0]="Shahtare";
    p.Herb[1]="khar maryam";
    p.Herb[2]="Narenj";
   
    p.cost[0]=15500;
    p.cost[1]=15500;
    p.cost[2]=10000;

    p.Amount[0]=1;
    p.Amount[1]=3;
    p.Amount[2]=1;
    this->patients_vect[0][0]=p;

    p.Ill="Shekam ravi";
    p.Herb[0]="Marze";
    p.Herb[1]="KhakShir";
    p.Herb[2]="Darchin";

    p.cost[0]=9500;
    p.cost[1]=6000;
    p.cost[2]=12000;

    p.Amount[0]=5;
    p.Amount[1]=1;
    p.Amount[2]=1;
    this->patients_vect[0][1]=p;

    p.Ill="Zaf System Defaie Badan";
    p.Herb[0]="Avishan";
    p.Herb[1]="Jo dosar";
    p.Herb[2]="Sir";

    p.cost[0]=12000;
    p.cost[1]=24000;
    p.cost[2]=9000;

    p.Amount[0]=5;
    p.Amount[1]=1;
    p.Amount[2]=1;
    this->patients_vect[0][2]=p;
    
    p.Ill="Khoshk Mazaji (Ubosat)";
    p.Herb[0]="KhakShir";
    p.Herb[1]="Karchak";
    p.Herb[2]="Gon";
   
    p.cost[0]=57000;
    p.cost[1]=17500;
    p.cost[2]=14000;

    p.Amount[0]=1;
    p.Amount[1]=1;
    p.Amount[2]=1;
    this->patients_vect[0][3]=p;
    /*
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
    *                                                             *
    * * * * * * * * * *         LEVEL2        * * * * * * * * * * * 
    *                                                             *
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
    */
    p.Ill="Moshkelate Poosti";
    p.Herb[0]="Asal";
    p.Herb[1]="Shirin Bayan";
    p.Herb[2]="Barg Aloevera";
   
    p.cost[0]=40500;
    p.cost[1]=8000;
    p.cost[2]=17900;

    p.Amount[0]=1;
    p.Amount[1]=1;
    p.Amount[2]=3;
    this->patients_vect[1][0]=p;

    p.Ill="Ekhtelalat Dastgah Tanafosi";
    p.Herb[0]="GolGavZaban";
    p.Herb[1]="Jinsing";
    p.Herb[2]="Ocaliptoos";
   
    p.cost[0]=9300;
    p.cost[1]=31000;
    p.cost[2]=16100;

    p.Amount[0]=5;
    p.Amount[1]=1;
    p.Amount[2]=1;
    this->patients_vect[1][1]=p;

    p.Ill="Afsordegi va Na Arami";
    p.Herb[0]="Zaferan";
    p.Herb[1]="Gol Gavzabon";
    p.Herb[2]="Ostokhoddos";
   
    p.cost[0]=110000;
    p.cost[1]=9500;
    p.cost[2]=17000;

    p.Amount[0]=1;
    p.Amount[1]=5;
    p.Amount[2]=5;
    this->patients_vect[1][2]=p;
    /*
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
    *                                                             *
    * * * * * * * * * *         LEVEL3        * * * * * * * * * * * 
    *                                                             *
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
    */
    p.Ill="Niyaz Be Alcohol";

    p.Herb[0]="Alcohol";
   
    p.cost[0]=30000;

    p.Amount[0]=1;

    this->patients_vect[2][0]=p;
    p.Ill="Niyaz Be Naphtaline";

    p.Herb[0]="Naphtaline";
  
    p.cost[0]=5000;
    
    p.Amount[0]=1;
    this->patients_vect[2][1]=p;
    p.Ill="Niyaz Be Kafoor";

    p.Herb[0]="Kafoor";
  
    p.cost[0]=5000;
    
    p.Amount[0]=1;

    this->patients_vect[2][2]=p;

}


Patients Patients::get_patient(int level)//end 
{
    switch (level)
    {
        case 1:
        {  
            
            #ifndef TestCase
            int cn;
            cn=rand()%4;
            return this->patients_vect[0][cn];
            #endif
            #ifdef TestCase
            return this->patients_vect[0][0];
            #endif
            break; 
        }
        case 2:
        {
            #ifndef TestCase
            int cn1,cn2,cn3;
            cn1=rand()%4;
            cn2=rand()%3;
            cn3=rand()%2;
            if(cn3==0)
            {
                return this->patients_vect[0][cn1];
            }
            else
            {
                return this->patients_vect[1][cn2];
            }
            #endif
            #ifdef TestCase
            return this->patients_vect[1][0];
            #endif
            break;
        }
        case 3:
        {
            #ifndef TestCase
            int cn1,cn2,cn3,cn4;
            cn1=rand()%4;
            cn2=rand()%3;
            cn3=rand()%3;
            cn4=rand()%3;
            if(cn4==0)
            {
                return this->patients_vect[0][cn1];
            }
            else if(cn4==1)
            {
                return this->patients_vect[1][cn2];
            }
            else
            {
                return this->patients_vect[2][cn3];
            }
            #endif
            #ifdef TestCase
            return this->patients_vect[2][0];
            #endif
            break;
        }
        
    }
    return *this;
}



void Patients::set_number_of_patients(int level,bool server_is_byed)//end aval ino seda mizanim
{
    #ifndef TestCase
    int num=0;
    if(server_is_byed)
    {
        num=rand()%2+1; //num=random()%2+1 , random() na. rand yes. #Check
    }
    else
    {
        num=rand()%4+1;
    }
    this->Number_of_patients=num;
    #endif
    #ifdef TestCase
    this->Number_of_patients=1;
    #endif
}





string Patients::Cost_system_check(double const_cost,double in_cost)//saghf geran foroshi = 5000 toman //saghf takhfif =5000 toman
{
    /*
    Return Values:

    toolow
    discount
    =
    geran
    toomuch
    false
    */

    if(in_cost<const_cost-5000)
    {
        return "toolow";
    }
    else if(in_cost<const_cost)
    {
        return "discount";
    }
    else if(in_cost==const_cost)
    {
        return "=";
    }
    else if(in_cost>const_cost&&in_cost<const_cost+5000)
    {
        return "geran";
    }
    else if(in_cost>const_cost+5000)
    {
        return "toomuch";
    }
    else
    {
        return "false";
    }





}


int Patients::Herbs_system_check(Patients p,string in_herb)
{

  /*
    Return Values:

    0 index
    1 index
    2 index
    -1 = false
    */

  if(in_herb==p.Herb[0])
  {
      return 0;
  }
  else if (in_herb==p.Herb[1])
  {
      return 1;
  }
  else if(in_herb==p.Herb[2])
  {
      return 2;
  }
  else
  {
      return -1;
  }
  
  

}


string Patients::Amount_system_check(double const_amount,double in_amount)//had aghal bayad 1 vahed befroshad dar gheyr in sorat eroor va sagh heydye dadan namahdood ast .
{

     /*
    Return Values:

    toolow
    kamforoshi
    =
    hedye
    false
    */

    if(in_amount<1)
    {
        return "toolow";
    }
    else if(in_amount >= 1 && in_amount < const_amount)
    {
        return "kamforoshi";
    }
    else if(in_amount==in_amount)
    {
        return "=";
    }
    else if(in_amount>const_amount)
    {
        return "hedye";
    }
    else 
    {
        return "false";
    }

}