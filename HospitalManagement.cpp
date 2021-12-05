#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<dos.h>
#include<iomanip.h>
#include<fstream.h>
int cb=4;
void admin();
struct day {  short int date;
	      short int month;
	      int year;
	   };
void calc_age(int date,int month,int year)
{
 cout<<"\nAGE (as of Jan 2020) is "<<(2020-year-1)<<" years"<<(12-month)<<" months.";
}
void calc_age(int month,int year)  //Function Overloaded
{
 cout<<"\nAGE (as of Jan 2020) is "<<(2020-year-1)<<" years"<<(12-month)<<" months.";
}

char tips[40][500]=
{
"A healthy outside starts from the inside.",
"Love yourself enough to live a healthy lifestyle.",
"To keep the body in good health is a duty, otherwise we shall not be able to keep our mind strong and clear.",
"Health is not valued till sickness comes.",
"Take care of your body. It's the only place you have to live.",
"Health is the greatest gift.",
"Health is the crown on the well persons head that only the ill person can see.",
"It is health that is real wealth and not pieces of gold and silver.",
"Those who think they have no time for healthy eating will sooner or later have to find time for illness.",
"You can't enjoy wealth if you're not in good health.",
"The mind and body are not separate. what affects one, affects the other.",
"Happiness is the highest form of health.",
"The first wealth is health.",
"Healthy citizens are the greatest asset any country can have.",
"There is no diet that will do what eating healthy does. Skip the diet. Just eat healthy.",
"You learn good health and family are it, and nothing else matters.",
"Your body deserves the best.",
"Take care of yourself, be healthy, and always believe you can be successful in anything you truly want.",
"If you're too busy to workout, your priorities need to change. I can't think of too many things more important than your health.",
"I'm healthy as can be – not an ache or pain. A lot of my prayer is thanking God that I am healthy. I pray for long life and good health.",
"The ingredients of health and long life, and great temperance, open air, easy labor, and little care.",
"A healthy mind does not speak ill of others.",
"What you eat literally becomes you. you have a choice in what you're made of.",
"Think positively and exercise daily, eat healthy, work hard, stay strong, build faith, worry less, read more, and be happy.",
"A fool does not care about his health.",
"We know that food is a medicine, perhaps the most powerful drug on the planet with the power to cause or cure most disease.",
"The food you eat can be either the safest and most powerful form of medicine or the slowest form of poison.",
"If it came from a plant, eat it. If it was made in a plant, don't.",
"If you keep good food in your fridge, you will eat good food.",
"When diet is wrong, medicine is of no use. When diet is correct, medicine is of no need.",
"You can't expect to look like a million bucks if you eat from the dollar menu.",
"Health requires healthy food.",
"Sufficient sleep, exercise, healthy food, friendship, and peace of mind are necessities, not luxuries.",
};
void disp()
{
 randomize();
 int n;
 n=random(32);
 cout<<tips[n];
}

void line()
{
cout<<"\n";
for(int i=0;i<=78;i++)
cout<<char(254);
cout<<"\n";
}
void newpage()
{
 textbackground(cb);
 textcolor(WHITE);
 clrscr();
 cout<<"\n\t\t\t\tABCD HOSPITALS";
 cout<<"\n\t\t\t\t    CHENNAI";
 line();
 disp();
 line();
}
class feedback
{
 private:
 char name[30],town[20],mail[30],content[1000];
 public:
 void putfb()
 {
  cout<<"\nFEEDBACK:";
  cout<<"\nName:"<<name;
  cout<<"\nTown/City:"<<town;
  cout<<"\nMail:"<<mail;
  cout<<"\nContent:"<<content;
 }
 void getfb()
 {
  newpage();
  cout<<"\nWe are glad to know your Feedback\n";
  cout<<"\nEnter the following details:\nName:";
  cin>>name;
  cout<<"\nTown/City:";
  cin>>town;
  cout<<"\nMail:";
  cin>>mail;
  cout<<"\nContent(max 1000 characters):";
  gets(content);
  cout<<"\nYour Feedback has been send succesfully.THANK YOU!!!";
 }
};
void exitpro()
{
 for(int i=0,j=8;i<=8;i++,j--)
 {
  clrscr();
  textbackground(i);
  textcolor(j);
  line();cout<<"\n\n";
  cout<<"\n\n\t\tA PROJECT BY:\n\t\t\tASWATHKRISHNA.G\n\t\t\tDHARANEISH.V.C\n\t\t\tNANDAPRABHU.B\n\n\n\t\t\tXII-SCIENCE(2019-20)\n\n\t\tSAGAR INTERNATIONAL SENIOR SECONDARY SCHOOL\n\t\t\t\tPERUNDURAI";
  cout<<"\n\n\n";line();cout<<"\t\tTHANK YOU...VISIT AGAIN.";
  delay(500);
 }
 getch();
 exit(0);
}
class log
{
 char id[11],password[9];
 public:
 log()
 {
  newpage();
 }
 void signin();
 }i1;
 void log::signin()
{
  cout<<"\n\nEnter UserName:";
  gets(id);
  char test[11],vf='n';
  ifstream fin7("userid.dat",ios::in);
  while((fin7))
 {
  fin7.read((char*)&test,sizeof(test));
  if((strcmp(test,id)==0))
  {
   vf='y';
  }
 }
  fin7.close();
  if(vf!='y')
  {
  cout<<"\nINVALID USERID!!!\nPress any key to exit";
  getch();
  exitpro();
  }
  cout<<"\nEnter Password(case sensitive) : ";
  for(int i=0;i<8;i++)
  {
   password[i]=getch();
   cout<<"*";
  }
  if(!((strcmp(password,"computer")==0)))
  {cout<<"\nINCORRECT PASSWORD!!!\nPress any key to exit";
  getch();
  exitpro();
  }
cout<<"\nLogin Successful.Press any key.";
getch();
}

class personal
{
protected:
char name[30],attender[30],dept[40],town[20];
day dob; unsigned long long int mobile;
};
class patient:private personal
{
private:
void choose_dept();
public:
patient()
{
 token=0;
}
int token;

void new_patient();
void find_patient();
};
void patient::choose_dept()
{
 int ch=0;
 char department[20][40]=
{
"Accident and emergency (A&E)\n",
"Cardiology\n",
"Coronary Care Unit (CCU)\n",
"Critical Care\n",
"Elderly services\n",
"Gastroenterology\n",
"General Services\n",
"Gynecology\n",
"Haematology\n",
"Intensive Care Unit (ICU)\n",
"Maternity\n",
"Nephrology\n",
"Neurology\n",
"Obstetrics/Gynecology\n",
"Oncology\n",
"Ophthalmology\n",
"Otolaryngology\n",
"Psycholopgy\n",
"Radiology\n",
"Urology\n"
};

for(int i=0;i<20;i++)
{
cout<<i+1<<"."<<department[i];
}
cout<<"\nCHOOSE YOUR DEPT:";cin>>ch;
if((ch>20) ||(ch<1))
{cout<<"\nINVALID CHOICE";
 choose_dept();    //Recursive Function
}
cout<<"\n\n"<<department[ch-1][40];
strcpy(dept,department[ch-1]);
}
void patient::new_patient()
{
 newpage();
 cout<<"\nEnter the Patient's Details:";
 tk:
 cout<<"\nToken no(no duplicate entries allowed):";cin>>token;
 patient p7;
 int tkt=token;
 ifstream fin6("dataentry.dat",ios::in);
 fin6.read((char*)&p7,sizeof(p7));
 {
  if(p7.token==tkt)
  {
  cout<<"\nToken Number already exists. Enter a different one";
  goto tk;
  }
 }
 cout<<"\nName:";gets(name);
 cout<<"Enter DATE OF BIRTH:(day):";cin>>dob.date;
 cout<<"(month):";cin>>dob.month;
 cout<<"(Year):";cin>>dob.year;
 cout<<"Attender's name:";gets(attender);
 cout<<"\nChoose Department:";
 choose_dept();
 newpage();

 cout<<"\nName:"<<name;
 calc_age(dob.month,dob.year);
 cout<<"\nAttender's name:"<<attender;
 cout<<"\nDepartment:"<<dept;
 cout<<"\nCity:";gets(town);
 cout<<"\nMobile:";cin>>mobile;
 }
void patient::find_patient()
{
 newpage();
 cout<<"\nThe patient details are as follows:";
 cout<<"\nToken no:"<<token;
 cout<<"\nName:"<<name<<"\nAttender name:"<<attender<<"\nDepartment:"<<dept<<"\nCity:"<<town<<"\nMobile:"<<mobile;
 calc_age(dob.date,dob.month,dob.year);

}
void intro()
 {
  textcolor(GREEN);
  textbackground(WHITE);
  clrscr();
  cout<<"\n\t\t\tABCD HOSPITALS WELCOMES YOU...";
  cout<<"\n\n\n\n\t\t\t\tLOADING...";
  cout<<"\n\t\t\t      Please wait..\n\n\n";
  for(int k=0;k<=78;k++)
  {
  cout<<char(219);
  delay(50);

  }
  textcolor(WHITE);
  textbackground(RED);
  clrscr();
  for(int j=0;j<10;j++)
   {
    clrscr();
    gotoxy(j,3); cputs   ("                        ABCD HOSPITALS");
    gotoxy(j,5); cputs   ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,6); cputs   ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,7); cputs   ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,8); cputs   ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,9);cputs    ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,10);cputs   ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,11);cputs   ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,12);cputs   ("           ЫЫЫЫЫ                                ЫЫЫЫЫ");
    gotoxy(j,13);cputs   (" MEDICAL   ЫЫЫЫЫ                                ЫЫЫЫЫ  CENTRE");
    gotoxy(j,14);cputs   ("           ЫЫЫЫЫ                                ЫЫЫЫЫ");
    gotoxy(j,15);cputs   ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,16);cputs   ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,17);cputs   ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,18);cputs   ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,19);cputs   ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ      ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    gotoxy(j,20); cputs  ("           ЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫЫ");
    delay(90);
   }
  gotoxy(24,23);
  cout<<"  Press any key to continue...";
  getch();

}
void main()
{

intro();
a1:
textcolor(cb);
textbackground(WHITE);
clrscr();
newpage();int cho2;
cout<<"\n\n1.ADMIN\n2.STAFF\n3.CHANGE BACKGROUND COLOUR\nEnter your choice:";
cin>>cho2;
if(cho2==1)
{admin();exit(1);}
if(cho2==3)
{
int chc;
cout<<"\nChoose your color:\n1.Black\n2.Blue\n3.Light Green\n4.Pale Blue\n5.Red\n6.Violet\n7.Yellow\nEnter:";
cin>>chc;
cb=chc-1;
cout<<"\n\nChanged Successfully.";
goto a1;
}
i1.signin();
char c,cho='y';
start:
newpage();
cout<<"\n1.Add new patient\n2.Remove a patient\n3.Edit Patient details\n4.view Patient Details\n5.More Options\n6.Send feedback\n7.Logout\n8.exit\n\nEnter your choice:";
cin>>c;
switch(c)
{
 case '1' :patient p1; cho='y';
	   ofstream fout1("dataentry.dat",ios::app);
	   while((cho=='y')||(cho=='Y'))
	  {cout<<"\nENTER NEW PATIENT DETAILS";
	   p1.new_patient();
	   fout1.write((char*)&p1,sizeof(p1));
	   cout<<"\nPatient Details saved successfully.";
	   cout<<"\nDo you want to continue:(y/n)";cin>>cho;
	  }
	  fout1.close();
	  goto start;

 case '2' :patient p2;cho='y';
	   int tk;char confirm='n',found='n';
	   ofstream fout2("temp.dat",ios::out);
	   ifstream fin1("dataentry.dat",ios::in);


	  while((cho=='y')||(cho=='Y'))
	 {
	  found='n';
	  cout<<"\nEnter the Token no to be deleted :";
	  cin>>tk;
	   while(!(fin1.eof()))
	  {
	   fin1.read((char*)&p2,sizeof(p2));
	   if(tk==p2.token)
	   {
	   found='y';
	   p2.find_patient();
	   cout<<"\nAre you sure want to delete the above patient(y/n):";
	   cin>>confirm;
	    if((confirm=='n')||(confirm=='N'))
	    {
	     cout<<"\nPatient Details not deleted.";
	     fout2.write((char*)&p2,sizeof(p2));
	    }
	   }
	   else
	   {
	     fout2.write((char*)&p2,sizeof(p2));
	   }
	  }
	   if(found=='n')
	   {
	    cout<<"\nRecord not Found in the file.";
	   }
	    cout<<"\nDo you want to continue:(y/n)";
	    cin>>cho;
     }
	  fin1.close();
	  fout2.close();
	  remove("dataentry.dat");
	  rename("temp.dat","dataentry.dat");
	  goto start;

 case '3' :
     {
	   patient p3,p4;
	   fstream fio3("dataentry.dat",ios::in|ios::out);
	   tk=0;long pos;cho='y';found='n';confirm='n';

	   while((cho=='y')||(cho=='Y'))
	   {
	   fio3.seekg(0);
	   found='n';confirm='n';
	  cout<<"\nEnter the Current Token no to be modified :";
	   cin>>tk;

	   while(!(fio3.eof()))
	   {
	   pos = fio3.tellg();
	   fio3.read((char*)&p3,sizeof(p3));


	   if(tk==p3.token)
	   {
	   found='y';

	   p3.find_patient();
	   cout<<"\nAre you sure want to modify the above patient details(y/n):";
	   cin>>confirm;
	    if((confirm=='n')||(confirm=='N'))
	    {
	     cout<<"\nPatient Details saved as it is.";
	     fio3.write((char*)&p3,sizeof(p3));
	    }
	    if((confirm=='y')||(confirm=='Y'))
	    {
	     fio3.seekg(pos);

	     p4.new_patient();
	     fio3.write((char*)&p4,sizeof(p4));
	     cout<<"\nPatient Details saved successfully.";

	     break;
	    }
	   }
	   else
	   {

	    fio3.write((char*)&p3,sizeof(p3));
	   }
	 }
	   if(found=='n')
	   {cout<<"\nRecord not Found in the file.";}
	    fio3.seekg(0);
	   cout<<"\nDo you want to continue:(y/n)";cin>>cho;
	   }

	  if(!((cho=='y')||(cho=='Y')))
	  {
	  goto start;
	  }

	}
 case '4' : patient p5;
	   ifstream fin4("dataentry.dat",ios::in|ios::nocreate);
	   cho='y';
	   while((cho=='y')||(cho=='Y'))
	   {
	    found='n';
	    cout<<"\nEnter the Current Token no to be viewed :";cin>>tk;

	   while(!(fin4.eof()))
	   {
	   fin4.read((char*)&p5,sizeof(p5));
	    if(tk==p5.token)
	    {
	    found='y';
	    p5.find_patient();
	    }
	   }
	   if(found=='n')
	   {cout<<"\nRecord not Found in the file.";}
	   cout<<"\nDo you want to continue:(y/n)";cin>>cho;
	   }
	   goto start;

 case '5' :{
	    newpage();int opt;
	    cout<<"\n1.Delete the entire Database\n2.View all Patients one by one\n3.View All Pending Token Numbers\n Enter your choice:";cin>>opt;

	    if(opt==1)
	    {
	     unsigned long int access=0;
	     cout<<"Enter Access Code:";cin>>access;
	     if(access==2000)
	     {
	     remove("dataentry.dat");
	     cout<<"\nData Base Cleared Succesfully";
	     }
	     else
	     {
	     cout<<"\nWrong Password. Try Again!!!\nPress any key to go to Main Menu.";
	     getch();
	     goto start;
	     }
	    }
	    if(opt==2)
	   {
	    int i=0;patient p6;
	    ifstream fin5("dataentry.dat",ios::in|ios::nocreate);
	    fin5.seekg(0);
	    while(!(fin5.eof()))
	    {
	    fin5.read((char*)&p6,sizeof(p6));
	    p6.find_patient();
	    i++;cout<<"\nPress Enter to next.";getch();
	    }
	    cout<<"\nEnd of the File Reached\nTotal No of Patients:"<<i;
	   }
	   if(opt==3)
	   {
	    int arr[100],i=0; patient p8;
	    ifstream fin6("dataentry.dat",ios::in|ios::nocreate);
	    fin6.seekg(0);
	      int size=0;
	    while(!fin6.eof())
	    {
	    fin6.read((char*)&p8,sizeof(p8));
	    arr[i]=p8.token;
	     i++;
	    }
	    size=i-1;
	    {
	     int small=0,pos,tmp;
	    for(int i=0;i<size-1;i++)
	    {
	     small=arr[i];
	     pos=i;
	     for(int j=i+1;j<size;j++)
	     {
	     if(arr[j]<small)
	     {small=arr[j];pos=j;}
	     }
	      tmp=arr[i];
	      arr[i]=arr[pos];
	      arr[pos]=tmp;
	    }
	    cout<<"\nThe Token Numbers in database are (in ascending order): ";
	    for(int j=0;j<size;j++)
	    cout<<arr[j]<<",";
	    }
	   }
	    cout<<"\nPress any key to goto main menu";
	    getch();goto start;
	   }

 case '6' : feedback f1;
	    f1.getfb();
	    ofstream foutfb("feedback.dat",ios::app);
	    foutfb.write((char*)&f1,sizeof(f1));
	    goto start;
 case '7' : {
	    char cho3='n';
	    cout<<"\nDo you want to Logout??(y/n)";
	    cin>>cho3;
	    if((cho3=='y')||(cho3=='Y'))
	    main();
	    else
	    goto start;
	    break;
	    }
 case '8' : exitpro();
	    break;
 default  : {
	    cout<<"\nPlease enter a correct choice!!!"; getch(); goto start;
	    }
}

  getch();
}

void admin()
{
  int code,i=3;
  newpage();
  cout<<"\n\nADMIN OPTIONS(Authorised person only)";
  p1:
  cout<<"\n\nEnter Code to continue:";cin>>code;
  if(code!=2000)
  {
   if(i>1)
   {
   cout<<"\nWRONG CODE!!!!\nPress any key to Try again."<<i<<" tries left.";
   getch();i--;
   goto p1;
   }
   if(i==1)
   {
   cout<<"\nWRONG CODE!!!\nYOu have crossed the maximun tries.Press any key to goto Main Menu.";
   exitpro();
   }
  }
 p2:
  int c;
  cout<<"\nVerify as HUMAN";int cp1,cp2;
  for(i=0;i<3;i++)
  {
   cout<<'\n'<<3-i<<" tries left";
   randomize();
   cp1=1000+random(999);
   cout<<"\nCapcha:"<<cp1;
   cout<<"\nEnter The Number above:";cin>>cp2;
   if(cp1==cp2)
   {
    cout<<"\nVerified Successfully.";
    goto p3;
   }
   else
   {
   cout<<"\nWrong code!!Try again.";
   }
  }
  if(i==3)
  {
  cout<<"\nYou could not be Verified.";
  getch();goto p1;
  }
  p3:
  newpage();
   cout<<"\n1.Sign up\n2.View all User IDs\n3.Feedback reading\n4.Delete Feedback file\n5.Delete entire Database\n6.Logout\n7.Exit\nEnter your choice:";cin>>c;
  switch(c)
  {
 case 1:
 { char cho='y';
   while((cho=='y')||(cho=='Y'))
  {
   char id1[11];
   cout<<"\nEnter User ID to be added: ";
   gets(id1);
   ofstream fout("userid.dat",ios::app);
   fout.write((char*)&id1,sizeof(id1));
   cout<<"\nUser ID saved successfully\n\nDo you want to Continue(y/n):";
   cin>>cho;
  }
  cout<<"\nPress any key to go to Menu.";
 getch();goto p3;
 break;
 }
 case 2:
 {
  char id2[11];
  ifstream fin("userid.dat",ios::in);
  cout<<"\nUser IDs:\n";
  while(!(fin.eof()))
 {
  fin.read((char*)&id2,sizeof(id2));
  puts(id2);
 }
 cout<<"\nPress any key to go to Menu.";
 getch();goto p3;
 }
 break;
 case 3:
{
  feedback f2;
  ifstream finfb("feedback.dat",ios::in);
  while(!(finfb.eof()))
  {
   finfb.read((char*)&f2,sizeof(f2));
   f2.putfb();
   cout<<"\nPress Enter for Next. ";getch();
  }
  cout<<"\nPress any key to go to Menu.";
  getch();goto p3;
  break;
}
case 4:
{
 char cho;
 cout<<"\nDo you want to Delete Entire Feedback Data(y/n).";
 cin>>cho;
 if((cho=='y')||(cho=='Y'))
 {
  remove("feedback.dat");
  cout<<"\nFeedback DataBase Cleared Successfully.";
  cout<<"\nPress any key to go to Menu.";
  getch();goto p3;
 }
 else
 {
  goto p3;
 }
 break;
}
case 5:
{
 {
 char cho4;
 cout<<"\nAre you sure you want to Delete the Entire DataBase?(y/n):";
 cin>>cho4;
 if((cho4=='y')||(cho4=='Y'))
 {
  remove("database.dat");
  cout<<"\nData base cleared successfully.";
  cout<<"\nPress any key to go to Menu.";
  getch();goto p3;
 }
 else
 {
  goto p3;
 }
 }
 }
case 6:
{
main();
}
case 7:
{
exitpro();
}
 break;
 }
}

