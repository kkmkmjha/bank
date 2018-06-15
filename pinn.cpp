#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
#include<cstdlib>
#include<dos.h>
#include<windows.h>
#include<ctime>
using namespace std;
int wikb()
         {char wik[56]={"******************WELCOME IN KMJ Bank ****************"};
            for(int w=0;w<=55;w++)
            {
                cout<<wik[w];Sleep(5);
            }
         }
int main()
{
     int kmj=1;
     int dd,mm,yyyy;
     ShellExecute(NULL, "open", "c:\\pro\\wcinkmj.mp3",NULL ,NULL,SW_HIDE);Sleep(200);
     

     while(kmj==1)
    {
        wikb();
        Sleep(1500);
        cout<<endl<<endl<<endl;
        ShellExecute(NULL, "open", "c:\\pro\\sec.mp3",NULL, NULL,SW_HIDE);
        
        cout<<"If you have an account press enter "<<endl;
		Sleep(2000);
        ShellExecute(NULL, "open", "c:\\pro\\bs.mp3",NULL, NULL,SW_HIDE);
        cout<<"If you want to create account press Backspace"<<endl;



        int a;
        a=getch();
        if(a==13)
        {
            cout<<endl;
            system("cls");
            wikb();
            cout<<endl;
            ShellExecute(NULL, "open", "c:\\pro\\acn.mp3",NULL, NULL,SW_HIDE);Sleep(2000);
            cout<<"Enter your account no : ";
            string account,account1;
            cin>>account;
            ifstream in1(account.c_str());
            string pass1;
            in1>>pass1;
            in1.close();
            account1=account;
            account1.insert(0,"a");
            double withdrawal_amount,deposit_amount,balance=0;int temp;
            int another_transaction=1;
            char c=' ';
            string pass="";
            ShellExecute(NULL, "open", "c:\\pro\\ep.mp3",NULL, NULL,SW_HIDE);Sleep(2000);
            cout<<"Enter password :  ";
            while (c!=13)
                {
                    c=getch();
                    if (c!=13)
                    {
                        pass+=c;
                        cout<<"*";Beep(526,100);
                    }
                }

                cout<<endl<<endl;
                if (pass!=pass1)
                    return 0;
            while(another_transaction==1)
            {

                        system("cls");
                        wikb();
                        ShellExecute(NULL, "open", "c:\\pro\\option.mp3",NULL, NULL,SW_HIDE);Sleep(2000);

                        cout<<endl<<"Kindly select your option"<<endl;
                        ShellExecute(NULL, "open", "c:\\pro\\be.mp3",NULL, NULL,SW_HIDE);Sleep(2500);
                        cout<<"1. Balance enquiry "<<endl;
                        ShellExecute(NULL, "open", "c:\\pro\\da.mp3",NULL, NULL,SW_HIDE);Sleep(2000);
                        cout<<"2. Deposit amount "<<endl;
                        ShellExecute(NULL, "open", "c:\\pro\\cw.mp3",NULL, NULL,SW_HIDE);Sleep(2000);
                        cout<<"3. Cash withdraw "<<endl;
                        ShellExecute(NULL, "open", "c:\\pro\\cp.mp3",NULL, NULL,SW_HIDE);Sleep(2100);
                        cout<<"4. Change password "<<endl;
                        ShellExecute(NULL, "open", "c:\\pro\\ms.mp3",NULL, NULL,SW_HIDE);Sleep(2000);
                        cout<<"5. Menu statement "<<endl;
                        ShellExecute(NULL, "open", "c:\\pro\\eis.mp3",NULL, NULL,SW_HIDE);Sleep(2000);
                        cout<<"6. Enjoy Internet Service "<<endl;
                        cin>>temp;


                        if(temp==1)
                        {
                            ifstream bin(account.c_str());
                            string s11;double b11;
                            bin>>s11;
                            bin>>b11;
                            Sleep(900);Beep(526,100);
                            cout<<"Your account balance is : ";Sleep(900);Beep(526,100);cout<<b11<<endl;
                            bin.close();Sleep(900);Sleep(900);
                        }
                        else if (temp==2)
                        {
                            ifstream di(account.c_str());
                            string de1;double de2;
                            di>>de1;
                            di>>de2;
                            di.close();
                            cout<<"Your account balance is : "<<de2<<endl;Sleep(900);Sleep(900);
                            time_t now = time(0);
                            char* dt = ctime(&now);


                            fstream obj(account1.c_str(),ios::in|ios::out|ios::app);
                            obj<<dt<<"\t";
                            ShellExecute(NULL, "open", "c:\\pro\\emwd.mp3",NULL, NULL,SW_HIDE);Sleep(2000);
                            cout<<"Enter amount that you want to deposit : ";Beep(526,300);Sleep(900);Sleep(900);
                            cin>>deposit_amount;Beep(526,56);
                            cout<<endl;
                            obj<<deposit_amount<<"  DA"<<endl;
                            de2=de2+deposit_amount;
                            cout<<"Now your account balance is : "<<de2<<endl;Beep(526,300);Sleep(900);Sleep(900);
                            ofstream do1(account.c_str());
                            do1<<de1<<" "<<de2;
                            do1.close();
                            obj.close();
                        }
                        else if(temp==3)
                        {
                            ifstream wi(account.c_str());
                            string w1;double w2;
                            wi>>w1;
                            wi>>w2;
                            wi.close();

                            time_t now = time(0);
                            char* dt = ctime(&now);

                            ShellExecute(NULL, "open", "c:\\pro\\hmwd.mp3",NULL, NULL,SW_HIDE);Sleep(2000);
                            cout<<"How much you want to withdraw : ";
                            cin>>withdrawal_amount;
                            if(withdrawal_amount<=w2)
                            {
                                w2=w2-withdrawal_amount;Sleep(1000);Beep(526,100);
                                cout<<"You have successfully withdrawn"<<withdrawal_amount<<endl;Sleep(1000);Beep(526,100);
                                cout<<"Now your account balance is : "<<w2<<endl;Sleep(1000);

                            ofstream wo1(account.c_str());
                            wo1<<w1<<" "<<w2;
                            wo1.close();
                            fstream obj1(account1.c_str(),ios::in|ios::out|ios::app);
                            obj1<<dt<<"\t"<<withdrawal_amount<<"  WA"<<endl;
                            obj1.close();
                            }
                            else
                                {
                                    Sleep(1000);Beep(526,100);
                                    cout<<"you have not enough money";
                                }
                        }
                        else if(temp==4)
                        {
                            ifstream pi(account.c_str());
                            string p1;double p2;
                            pi>>p1;
                            pi>>p2;
                            pi.close();
                            string po,pn;
                            Sleep(1000);Beep(526,100);
                            ShellExecute(NULL, "open", "c:\\pro\\op.mp3",NULL, NULL,SW_HIDE);Sleep(2000);
                            cout<<"enter your old password : ";
                            char po1,po2;
                            while(po1!=13)
                            {
                                po1=getch();
                                if(po1!=13)
                                {
                                    po+=po1;
                                    cout<<"*";
                                }
                            }
                            if(po==p1)


                            {
                                Sleep(1000);
                                ShellExecute(NULL, "open", "c:\\pro\\np.mp3",NULL, NULL,SW_HIDE);Sleep(2000);
                                cout<<"enter new password : ";
                                while(po2!=13)
                                {
                                    po2=getch();
                                    if(po2!=13)
                                    {
                                        pn+=po2;
                                        cout<<"*";
                                    }
                                }
                            ofstream po(account.c_str());
                            po<<pn<<" "<<p2;
                            po.close();
                            }
                        }
                        else if(temp==5)
                        {
                            Sleep(1500);
                            ifstream ms;
                            ms.open(account1.c_str());
                            string m;
                            while(ms.good())
                            {
                                getline(ms,m);
                                cout<<m<<endl;
                            }
                            ms.close();
                            Sleep(1500);
                            cout<<"Your current balance is : ";
                            ifstream bin(account.c_str());
                            string s11;double b11;
                            bin>>s11;
                            bin>>b11;
                            cout<<b11<<endl;
                            bin.close();
                        }
                        else if (temp==6)
                        {
                            ShellExecute(NULL, "open", "https://www.google.co.in/",NULL, NULL,SW_HIDE);
                        }

                    another_transaction=0;
                    while(another_transaction !=1&&another_transaction!=2)
                        {
                            Sleep(1000);
                            cout<<endl<<endl<<endl<<"Do you want to another transaction"<<endl;Beep(526,1000);
                            cout<<"1 -Yes"<<endl;Sleep(1000);Beep(526,300);
                            cout<<"2 -No"<<endl;
                            cin>>another_transaction;Sleep(2000);
                            system("cls");
                        }

            }
        }
        else if(a==127||a==8)
        {
            string hname;
            string fname;
            string gen;
            int dd1,mm1,yy1;
            string occupation_profession;
            system("cls");
            string pan;
            string uid;
            double mo;
            string add;
            int pin;
            string mail;
            double annul_income;
            string place;
            int d,m,y; //date of account opening
            string name_of_nominee;
            string relationship;
            int age;
            string name;
            char P;
            double b=0;
            int bank_data;
            ShellExecute(NULL, "open", "c:\\pro\\enterd.mp3",NULL, NULL,SW_HIDE);Sleep(3000);
            ShellExecute(NULL, "open", "c:\\pro\\name.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Name : ";
            cin>>hname;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\fandhname.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Father/Husband name : ";
            cin>>fname;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\gender.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Gender(M/F/Other) : ";
            cin>>gen;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\dob.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"enter date of birth (dd mm yyyy) : ";
            cin>>dd1>>mm1>>yy1;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\oandp.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Occupation/Profession : ";
            cin>>occupation_profession;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\pan.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Enter PAN number : ";
            cin>>pan;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\uid.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Enter UID : ";
            cin>>uid;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\mo.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Enter mobile number : ";
            cin>>mo;
            system("cls");
             ShellExecute(NULL, "open", "c:\\pro\\Address.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Address : ";
            cin>>add;
            system("cls");
             ShellExecute(NULL, "open", "c:\\pro\\pin.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"PIN Code : ";
            cin>>pin;
            system("cls");
             ShellExecute(NULL, "open", "c:\\pro\\mail.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"E-Mail : ";
            cin>>mail;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\ai.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Annul income : ";
            cin>>annul_income;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\Place.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Place : ";
            cin>>place;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\non.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Name of Nominee : ";
            cin>>name_of_nominee;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\Relationship.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Relationship : ";
            cin>>relationship;
            system("cls");
            ShellExecute(NULL, "open", "c:\\pro\\an.mp3",NULL, NULL,SW_HIDE);Sleep(1000);
            cout<<"Age : ";
            cin>>age;

            system("cls");Beep(526,300);
            wikb();
            cout<<endl;Beep(526,100);Sleep(200);
            cout<<"Name : ";
            cout<<hname;Beep(526,600);
            cout<<endl;
            cout<<"Father/Husband name : ";
            cout<<fname<<endl;Beep(526,600);
            cout<<"Gender : ";
            cout<<gen<<endl;Beep(526,600);
            cout<<"Date of birth : ";
            cout<<dd1<<"."<<mm1<<"."<<yy1<<endl;Beep(526,600);
            cout<<"Occupation/Profession : ";
            cout<<occupation_profession<<endl;Beep(526,600);
            cout<<"PAN number : ";
            cout<<pan<<endl;Beep(526,600);
            cout<<"UID : ";
            cout<<uid<<endl;Beep(526,600);
            cout<<"Mobile number : ";
            cout<<mo<<endl;Beep(526,600);
            cout<<"Address : ";
            cout<<add<<endl;Beep(526,600);
            cout<<"PIN Code : ";
            cout<<pin<<endl;Beep(526,600);
            cout<<"E-Mail : ";
            cout<<mail<<endl;Beep(526,600);
            cout<<"Annul income : ";
            cout<<annul_income<<endl;Beep(526,600);
            cout<<"Place : ";
            cout<<place<<endl;Beep(526,600);
            cout<<"Date (day mm dd m hh mm ss yyyy) : ";
            time_t now = time(0);
            char* dt = ctime(&now);

            cout<<dt<<endl;Beep(526,600);
            cout<<"Name of Nominee : ";
            cout<<name_of_nominee<<endl;Beep(526,600);
            cout<<"Relationship : ";
            cout<<relationship<<endl;Beep(526,600);
            cout<<"Age : ";
            cout<<age<<endl;Beep(526,600);
            cout<<endl<<endl;Beep(526,600);
            cout<<"\t\t\t\t\t\t\t\t\tSUBMIT"<<endl;
            char temp1;
            temp1=getch();
            if(temp1==13)
            {


                ShellExecute(NULL, "open", "c:\\pro\\ep.mp3",NULL, NULL,SW_HIDE);
				Sleep(2000);
                cout<<"Enter password : ";
                while(P!=13)
                {
                    P=getch();
                    if(P!=13)
                    {
                        name+=P;
                        cout<<"*";Beep(526,100);
                    }
                }

                ifstream in("Bank.cpp");
                in>>bank_data;
                string s;
                in.close();
                int bank_data1=bank_data;
                cout<<endl<<"your account no is  : ";Beep(526,600);
                cout<<bank_data<<endl;
                string ac,ac1,ac2;
                int km=0;
                cout<<"enter your account no : ";Beep(526,600);
                cin>>ac;

                            ofstream out(ac.c_str());
                            out<<name<<" "<<b;
                            out.close();
                            ac1=ac;
                            ac2=ac;
                            ac1.insert(0,"a");
                            ac2.insert(0,"Details_of_account_holder-");
                            ofstream cou(ac2.c_str());
                            cou<<"Name : ";
                            cou<<hname;
                            cou<<endl;
                            cou<<"Father/Husband name : ";
                            cou<<fname;
                            cou<<"Gender : ";
                            cou<<gen<<endl;
                            cou<<"Date of birth : ";
                            cou<<dd1<<"."<<mm1<<"."<<yy1<<endl;
                            cou<<"Occupation/Profession : ";
                            cou<<occupation_profession<<endl;
                            cou<<"PAN number : ";
                            cou<<pan<<endl;
                            cou<<"UID : ";
                            cou<<uid<<endl;
                            cou<<"Mobile number : ";
                            cou<<mo<<endl;
                            cou<<"Address : ";
                            cou<<add<<endl;
                            cou<<"PIN Code : ";
                            cou<<pin<<endl;
                            cou<<"E-Mail : ";
                            cou<<mail<<endl;
                            cou<<"Annul income : ";
                            cou<<annul_income<<endl;
                            cou<<"Place : ";
                            cou<<place<<endl;
                            cou<<"Date (dd mm yyyy) : ";
                            cou<<dt<<endl;Beep(526,600);
                            cou<<"Name of Nominee : ";
                            cou<<name_of_nominee<<endl;
                            cou<<"Relationship : ";
                            cou<<relationship<<endl;
                            cou<<"Age : ";
                            cou<<age<<"\n";
                            cou.close();

                            ofstream outm(ac1.c_str());
                            outm.close();
                            bank_data1++;
                            ofstream out1("Bank.cpp");
                            out1<<bank_data1;
                            out1.close();

            }

        }
        kmj=0;
        while(kmj!=1&&kmj!=2)
        {
            system("cls");Beep(526,900);
            cout<<"Do you want to continue banking process "<<endl;Beep(526,600);
            cout<<"1-Yes"<<endl;Beep(526,600);
            cout<<"2-No"<<endl;
            cin>>kmj;Beep(526,300);
            cout << "\x1b[2J\x1b[1;1H" << flush;
        }
    }
    return 0;
}
