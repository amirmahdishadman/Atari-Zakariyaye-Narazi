#include <ctime>
#include "Patients.h"
#include<iomanip>

using namespace std;

ostream &operator<<(ostream &output,Patients &patients) //#Check. sample o barat sakhtam, edamaro boro
{  
     // alan ino uncoment kon va tedade bimaraye sathe yek o bezari kar mikone
    //***************************Herbs show start*********************************
    cout<<"Herbs: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {//instance-vector-sathebimari-kole bimariya dar in sath-giyaha az 1 ta3
        if(i==3&&j==0)
        {
            continue;
        }
            cout<< setw(12) << patients.patients_vect[0][i].Herb[j] << " ";
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
            cout<< setw(12) << patients.patients_vect[1][i].Herb[j] << " ";
        }
        
    }
     for (int i = 0; i < 3; i++)
    {
        cout<< setw(12) << patients.patients_vect[2][i].Herb[0] << " ";
    }
    //*****************************Herbs show end************************************


    //*****************************cost show start************************************
    cout<<"Fair Cost: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {//instance-vector-sathebimari-kole bimariya dar in sath-giyaha az 1 ta3
        if(i==3&&j==0)
        {
            continue;
        }
            cout<< setw(12) << patients.patients_vect[0][i].cost[j] << " ";
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
            cout<< setw(12) << patients.patients_vect[1][i].cost[j] << " ";
        }
        
    }
     for (int i = 0; i < 3; i++)
    {
        cout<< setw(12) << patients.patients_vect[2][i].cost[0] << " ";
    }


    //*****************************cost show end*************************************

    //*****************************amount show start************************************
    cout<<"Fair Amount: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {//instance-vector-sathebimari-kole bimariya dar in sath-giyaha az 1 ta3
        if(i==3&&j==0)
        {
            continue;
        }
            cout<< setw(12) << patients.patients_vect[0][i].Amount[j] << " ";
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
            cout<< setw(12) << patients.patients_vect[1][i].Amount[j] << " ";
        }
        
    }
     for (int i = 0; i < 3; i++)
    {
        cout<< setw(12) << patients.patients_vect[2][i].Amount[0] << " ";
    }


    //*****************************cost show end*************************************


    // to hamin tabe man bare herb o zadam hala to baraye meghdar o gheymat hame sathaye dg to hamin bzn
}


Patients::Patients()
{
    set_patients_vect();
}

//******************Refer************************
void Patients::Patients_refer(int Level,bool Server_Capacity,Atar &amoo_atar,Notebook &notebook)
{
    bool herbbool=true,amountisok=true,costisok=true;
    char notelist;
    char herbcount;
    int herbcountint=0;
    Patients P;
    set_number_of_patients(Level,Server_Capacity);
    cout<<"Tedad "<<Number_of_patients<<" Moshtari Morajee Karde and."<<endl<<endl<<endl;
    cout<<"-> Sharh Daroo Ha:"<<endl;
    cout<<P<<endl<<endl<<endl;
    cout<<">Be Atari Zakariyaye Narazi Khosh Amadid."<<endl<<">Moshkel Khod Ra Befarmaid :"<<endl;//can be beautiful mode
    //---------------------------------------------------------------
    for(int i=1;i<=Number_of_patients;i++)
    {
        bool save_customer=true;
        double Reputation_Change=0;
        double Money_change=0;
        P=get_patient(Level);
        cout<<"Salam. Man Moshkel "<<P.Ill<<"Ra Daram."<<endl;
        cout<<"Atar aziz Ba Tavajoh be Bimari , Mavared zir ra Javab Dahid."<<endl;



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

            int herbindex=Herbs_system_check(P,herb);
            string costpos;
            string amountpos;
            if (herbindex==-1)
            {
                herbbool=false;
                cout<<"Daroye Tajviz Shode ba Bimari Motabeghat Nadarad."<<endl<<"Shoma Moshtari Ra Az Dast Dadid!"<<endl<<"Age chizi forkhti halalet vali dg raft !"<<endl;
                Reputation_Change-=5;
                break;
                //ok
            }
            else
            {
                costpos=Cost_system_check(P.cost[herbindex],cost);
                amountpos=Amount_system_check(P.Amount[herbindex],amount);

                if(amoo_atar.get_repository_amount(herb)<amount)
                {
                    cout<<"Enghad Daro Nadarim "<<endl<<"Shoma Moshtari Ra Az Dast Dadid."<<endl<<"Age chizi forkhti halalet vali dg raft !"<<endl;
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
                        Money_change=((cost/P.Amount[herbindex])*amount);
                    }
                    else if(amountpos=="=")
                    {
                        cout<<"Agha nokaram takhfif dadi damet garm"<<endl<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change+=4;
                        Reputation_Change+=2;
                        amoo_atar.set_repository_amount(herb,amoo_atar.get_repository_amount(herb)-amount);
                        Money_change=(((cost/P.Amount[herbindex])*amount));
                    }
                    else if(amountpos=="hedye")
                    {
                        cout<<"Aghaaaaa Kheyli Chakeram Khoda Kheyret bede Dam Shoma Garm"<<endl<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change+=4;
                        Reputation_Change+=4;
                        amoo_atar.set_repository_amount(herb,(amoo_atar.get_repository_amount(herb))-(P.Amount[herbindex]));
                        Money_change=(((cost/P.Amount[herbindex])*amount));
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
                        Money_change=(((cost/P.Amount[herbindex])*amount));
                    }
                    else if(amountpos=="=")
                    {
                        cout<<"Agha Mersi "<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change+=2;
                        Reputation_Change+=2;
                        amoo_atar.set_repository_amount(herb,amoo_atar.get_repository_amount(herb)-amount);
                       Money_change=(((cost/P.Amount[herbindex])*amount));
                    }
                    else if(amountpos=="hedye")
                    {
                        cout<<"Haji Khoda Kheyret bede"<<endl<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change+=4;
                        Reputation_Change+=2;
                        amoo_atar.set_repository_amount(herb,(amoo_atar.get_repository_amount(herb))-(P.Amount[herbindex]));
                        Money_change=(((cost/P.Amount[herbindex])*amount));
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
                        Money_change=(((cost/P.Amount[herbindex])*amount));
                    }
                    else if(amountpos=="=")
                    {
                        cout<<"geron midi vali chare chie ?"<<endl<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change-=4;
                        Reputation_Change+=2;
                        amoo_atar.set_repository_amount(herb,amoo_atar.get_repository_amount(herb)-amount);
                        Money_change=(((cost/P.Amount[herbindex])*amount));
                    }
                    else if(amountpos=="hedye")
                    {
                        cout<<"Chon Hedye dadi Mikharam vali dg Geron nade haji."<<endl<<"Inaro Baram Kenar Bezar"<<endl;
                        Reputation_Change-=4;
                        Reputation_Change+=4;
                        amoo_atar.set_repository_amount(herb,(amoo_atar.get_repository_amount(herb))-(P.Amount[herbindex]));
                        Money_change=(((cost/P.Amount[herbindex])*amount));
                    }
                }
                else if(costpos=="toomuch")
                {
                    cout<<"Mage Sar Gardanas ???!!! ."<<endl<<"Shoma Moshtari Ra Az Dast Dadid!"<<endl;
                    Reputation_Change-=5;
                    break;
                }
            }

        }
        amoo_atar.setReputation_amount(amoo_atar.getReputation_amount+Reputation_Change);
        cout<<"Sath Shohrat Shoma Dar in Forosh "<<Reputation_Change<<" Taghir Kard."<<endl;
        amoo_atar.setMoney(amoo_atar.getMoney+(Money_change));
        cout<<"You get "<<Money_change<<" Money in this deal.";







    }
}













void Patients::set_patients_vect()//level 3 monde --dar initializer
{
    Patients p;
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
   
    p.cost[0]=12500;
    p.cost[1]=12500;
    p.cost[2]=8000;

    p.Amount[0]=1;
    p.Amount[1]=3;
    p.Amount[2]=1;
    this->patients_vect[0][0]=p;

    p.Ill="Shekam ravi";
    p.Herb[0]="Marze";
    p.Herb[1]="KhakShir";
    p.Herb[2]="Darchin";

    p.cost[0]=8000;
    p.cost[1]=5000;
    p.cost[2]=10000;

    p.Amount[0]=5;
    p.Amount[1]=1;
    p.Amount[2]=1;
    this->patients_vect[0][1]=p;

    p.Ill="Zaf System Defaie Badan";
    p.Herb[0]="Avishan";
    p.Herb[1]="Jo dosar";
    p.Herb[2]="Sir";

    p.cost[0]=10000;
    p.cost[1]=20000;
    p.cost[2]=8000;

    p.Amount[0]=5;
    p.Amount[1]=1;
    p.Amount[2]=1;
    this->patients_vect[0][2]=p;
    
    p.Ill="Khoshk Mazaji (Ubosat)";
    p.Herb[0]="KhakShir";
    p.Herb[1]="Karchak";
    p.Herb[2]="Gon";
   
    p.cost[0]=5000;
    p.cost[1]=15000;
    p.cost[2]=12000;

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
   
    p.cost[0]=35500;
    p.cost[1]=7000;
    p.cost[2]=15500;

    p.Amount[0]=1;
    p.Amount[1]=1;
    p.Amount[2]=3;
    this->patients_vect[1][0]=p;

    p.Ill="Ekhtelalat Dastgah Tanafosi";
    p.Herb[0]="GolGavZaban";
    p.Herb[1]="Jinsing";
    p.Herb[2]="Ocaliptoos";
   
    p.cost[0]=8000;
    p.cost[1]=25000;
    p.cost[2]=14700;

    p.Amount[0]=5;
    p.Amount[1]=1;
    p.Amount[2]=1;
    this->patients_vect[1][1]=p;

    p.Ill="Afsordegi va Na Arami";
    p.Herb[0]="Zaferan";
    p.Herb[1]="Gol Gavzabon";
    p.Herb[2]="Ostokhoddos";
   
    p.cost[0]=95000;
    p.cost[1]=8000;
    p.cost[2]=15000;

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
    p.Ill="Alcohol";
   
    p.cost[0]=30000;

    p.Amount[0]=1;

    this->patients_vect[2][0]=p;

    p.Ill="Naphtaline";
  
    p.cost[0]=5000;
    
    p.Amount[0]=1;
    this->patients_vect[2][1]=p;

    p.Ill="Kafoor";
  
    p.cost[0]=5000;
    
    p.Amount[0]=1;

    this->patients_vect[2][2]=p;

}


Patients Patients::get_patient(int level)//end 
{
    srand(time(0));
    switch (level)
    {
        case 1:
        {  
            int cn;
            cn=rand()%4;
            return this->patients_vect[0][cn];
            break; 
        }
        case 2:
        {
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
            break;
        }
        case 3:
        {
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
                return this->patients_vect[3][cn3];
            }
            break;
        }

    }

}



void Patients::set_number_of_patients(int level,bool server_is_byed)//end aval ino seda mizanim
{
    srand(time(0));
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