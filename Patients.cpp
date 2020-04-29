#include<vector>
#include"Patients.h"
#include"Atar.h"
#include<string>
#include<iostream>
#include<iomanip>
// #include<random> #Check , tabe rand khodesh hast

ostream operator<<(ostream &output,Patients patient)
{

}

void Patients::Patients_refer(int,bool)
{

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
    p.Herb[1]="KhareMaryam";
    p.Herb[2]="Narenj";
   
    p.cost[0]=12500;
    p.cost[1]=12500;
    p.cost[2]=8000;

    p.Amount[0]=1;
    p.Amount[1]=3;
    p.Amount[2]=1;
    this->patients_vect[0].push_back(p);

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
    this->patients_vect[0].push_back(p);

    p.Ill="Zaf System Defaie Badan";
    p.Herb[0]="Avishan";
    p.Herb[1]="JoDoSar";
    p.Herb[2]="Sir";

    p.cost[0]=10000;
    p.cost[1]=20000;
    p.cost[2]=8000;

    p.Amount[0]=5;
    p.Amount[1]=1;
    p.Amount[2]=1;
    this->patients_vect[0].push_back(p);
    
    p.Ill="Khoshk Mazaji (Ubosat)";
    p.Herb[0]="KhakShir";
    p.Herb[1]="Karchak";
    p.Herb[2]="Goon";
   
    p.cost[0]=5000;
    p.cost[1]=15000;
    p.cost[2]=12000;

    p.Amount[0]=1;
    p.Amount[1]=1;
    p.Amount[2]=1;
    this->patients_vect[0].push_back(p);
    /*
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
    *                                                             *
    * * * * * * * * * *         LEVEL2        * * * * * * * * * * * 
    *                                                             *
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
    */
    p.Ill="Moshkelate Poosti";
    p.Herb[0]="Asal";
    p.Herb[1]="ShirinBayan";
    p.Herb[2]="AloEvera";
   
    p.cost[0]=35500;
    p.cost[1]=7000;
    p.cost[2]=15500;

    p.Amount[0]=1;
    p.Amount[1]=1;
    p.Amount[2]=3;
    this->patients_vect[1].push_back(p);

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
    this->patients_vect[1].push_back(p);

    p.Ill="Afsordegi va NaArami";
    p.Herb[0]="Zaferan";
    p.Herb[1]="GolGavZaban";
    p.Herb[2]="Ostokhodoos";
   
    p.cost[0]=95000;
    p.cost[1]=8000;
    p.cost[2]=15000;

    p.Amount[0]=1;
    p.Amount[1]=5;
    p.Amount[2]=5;
    this->patients_vect[1].push_back(p);
    /*
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
    *                                                             *
    * * * * * * * * * *         LEVEL3        * * * * * * * * * * * 
    *                                                             *
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
    */
    p.Ill="Alcool";
   
    p.cost[0]=30000;

    p.Amount[0]=1;

    this->patients_vect[2].push_back(p);

    p.Ill="Naftalin";
  
    p.cost[0]=5000;
    
    p.Amount[0]=1;
    this->patients_vect[2].push_back(p);

    p.Ill="Kafoor";
  
    p.cost[0]=5000;
    
    p.Amount[0]=1;

    this->patients_vect[2].push_back(p);

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

    tolow
    discount
    =
    geran
    tomuch
    false
    */

    if(in_cost<const_cost-5000)
    {
        return "tolow";
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
        return "tomuch";
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

    tolow
    kamforoshi
    =
    hedye
    tomuch
    false
    */

    if(in_amount<1)
    {
        return "tolow";
    }
    else if(in_amount>=1&&in_amount<const_amount)
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