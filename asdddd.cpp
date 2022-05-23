//libraies
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

//funtions prototype
void getnames();
void shownames();
void toss();
void menu();
void team1name();
void team2name();
void team1batting();
void team2batting();
void swap();
void players();
void teams();
void filehandling();


//variables
int score = 0 , score_1 = 0 , target = 0 , overs = 0 ,overs_1 = 0 , wicket = 0 ,wicket1=0 , balls = 0 , balls_1=0  ;
char STRIKER , NONSTRIKER , BOWLER , status;
int striker , nonstriker , bowler ;
char tosss;
string team_1 , team_2 ;
const int n_players=6;


//arrays
string name_1[n_players];
int scored_1[n_players];
int ballsfaced_1[n_players];
int runs_1[n_players];
int over_1[n_players];
int wicket_1[n_players];

string name_2[n_players];
int scored_2[n_players];
int ballsfaced_2[n_players];
int runs_2[n_players];
int over_2[n_players];
int wicket_2[n_players];

int main()
{
    cout<<"ENnter the total overs for THE Match "<<endl;
    cin>>overs;	
    overs_1=overs;
	teams();
	getnames();
	shownames();
	toss();
	if(tosss==1)
	{
		team1batting();
		team2batting();
    }
	else
	{
		team2batting();
		team1batting();
	}
	 filehandling();
	return 0;
}

//funtions defination
void teams()
{
	cout<<"ENter TEAM-1 NAme:";
	cin>>team_1;
	cout<<"Enter the TEAM-2 Name:";
	cin>>team_2;
}
void getnames()
{   
    system("cls");
	
	cout<<">>>>>>  Enter the player Name's for "<< team_1 <<  "<<<<<"<<endl<<endl<<endl;
	cin.ignore();
	for(int i = 0 ; i<6 ; i++)
	{
		cout<<"Player #"<<i+1<<"    ";
		getline(cin , name_1[i]);
	}
	system("cls");
	
	cout<<">>>>>>  Enter the player Name's for  "<< team_2 <<  "<<<<<"<<endl<<endl<<endl;
	for(int i = 0 ; i<6 ; i++)
	{
		cout<<"Player #"<<i+1<<"    ";
		getline(cin , name_2[i]);
	}	
	system("cls");
}

void shownames()
{
		
	cout<<">>>>>>  player Name's for "<< team_1 <<  "  <<<<<"<<endl<<endl<<endl;

	for(int i = 0 ; i<6 ; i++)
	{
		cout<<"Player #"<<i+1<<"    "<<name_1[i]<<endl;
	}

	
	cout<<endl<<endl<<endl<<">>>>>>  Player Name's for "<< team_2 <<  " <<<<<"<<endl<<endl<<endl;
	
	for(int i = 0 ; i<6 ; i++)
	{
		cout<<"Player #"<<i+1<<"    "<<name_2[i]<<endl;
	}
	system("pause");
	system("cls");
	}

void toss()
{ 
    do 
	{
		cout<<"Enter Toss Results \n For "<< team_1 <<  "batting press----1 \n For "<< team_2 <<  "batting press----2"<<endl;
		cin>>tosss;
    	if (tosss != '1' && tosss != '2')
    		cout<<"PLEASE ENTER THE RIGHT NUMBER...."<<endl;
	}
    while(tosss != '1' && tosss != '2')  ;
    
    if (tosss =='1')
    	cout<<endl<<endl<<endl<<"                    >>>>> "<<   team_1 <<"is going to BAT first    <<<<<"<<endl;
    else 
    	cout<<"                    >>>>>   "<<   team_2 <<" is going to BAT first    <<<<<"<<endl;
}

void menu()
{   do
   {
    system("cls");
	cout<<"			________"<<endl;
	cout<<"			|    >>>>>>>>                   Press 1 for Single                 |"<<endl;
	cout<<"			|    >>>>>>>>                   Press 2 for Doubl                  |"<<endl;
	cout<<"			|    >>>>>>>>                   Press 3 for Triple                 |"<<endl;
	cout<<"			|    >>>>>>>>                   Press 4 for For                    |"<<endl;
	cout<<"			|    >>>>>>>>                   Press 5 for Wide+four              |"<<endl;
	cout<<"			|    >>>>>>>>                   Press 6 for Six                    |"<<endl;
	cout<<"			|    >>>>>>>>                   Press 7 for Wicket                 |"<<endl;
	cout<<"			|    >>>>>>>>                   Press 8 for Wide/NO-BALL           |"<<endl;
	cout<<"			``"<<endl;
	cout<<endl<<endl<<endl;
	cin>>status;
    if (status == '0' || status >= '8' )
    cout<<"Please Enter From the Above Menu"<<endl;
    system ("pause") ;
}
    while (status == '0' || status >= '8');
	
}

void team1name()
{
	cout<<">>>>>>  player Name's for  "<<   team_1 <<"   <<<<<"<<endl<<endl<<endl;

	for(int i = 0 ; i<6 ; i++)
	{
		cout<<"Player #"<<i+1<<"    "<<name_1[i]<<endl;
	}

}

void team2name()
{
	cout<<">>>>>>  player Name's for "<<   team_2 <<"<<<<<"<<endl<<endl<<endl;

	for(int i = 0 ; i<6 ; i++)
	{
		cout<<"Player #"<<i+1<<"    "<<name_2[i]<<endl;
	}

}

void swap()
{   cout<<"STIKER CHANGED !!!!"<<endl;
    int temp = striker;
	striker = nonstriker;
	nonstriker = temp ;
}

void players()
{   
	system("cls");
	if (target==0)
    {cout<<"TOTAL = "<<score<<"      Wickets = "<<wicket<<"      OVERS LEFT = "<<overs<<endl;}
	else 
{	cout<<"TOTAL = "<<score_1<<"      Wickets = "<<wicket1<<"      OVERS LEFT = "<<overs_1<<"      TO WIN = "<<target-score<<endl;	}
    cout<<"BALLS LEFT FOR THIS OVER : "<<6-balls<<endl;
	cout<<"STRIKER = "<<name_1[striker]<<endl;
	cout<<"NON-STRIKER = "<<name_1[nonstriker]<<endl;
	cout<<"BOWLER = "<<name_2[bowler]<<endl<<endl;
    system("pause");
    if (score <= target && target != 0)
    {
    system("cls");
    cout<<"Congratulations !!!! you have won the match "<<endl;
    exit(1);
	}
}
void team1batting()
{   
	system("cls");
	do 
	{
		system("cls");
    	team1name();
    	cout<<endl<<endl<<endl<<"Enter the STRIKER NUmber"<<endl;
    	cin>>STRIKER;
    	if (STRIKER == '0' || STRIKER >= '6' )
    	cout<<"Please choose from the given players"<<endl;
    	system("pause");
	} 
 	while (STRIKER == '0' || STRIKER >= '6' ) ;
	do
	{
		cout<<endl<<"Enter the NON-STRIKER NUmber"<<endl;
    	cin>>NONSTRIKER;
    	if (STRIKER == '0' || STRIKER >= '6' || STRIKER == NONSTRIKER )
    		cout<<"Please choose the right player"<<endl;
	} 
 	while (STRIKER == '0' || STRIKER >= '6' || STRIKER == NONSTRIKER )	;
	    
	do 
	{
		system("cls");
		team2name();
		cout<<endl<<endl<<endl<<"ENTER THE BOWLER :  ";
		cin>>BOWLER;
		if (BOWLER == '0' || BOWLER >= '6')
			cout<<"Please Enter the right Player Number !!!"<<endl;
		system("pause");
	} 
   	while (BOWLER == '0' || BOWLER >= '6') ;
   	
    striker = STRIKER-49 ; nonstriker = NONSTRIKER-49 ; bowler = BOWLER-49 ;
	system("cls");
	cout<<"STRIKER = "<<name_1[striker]<<endl;
	cout<<"NON-STRIKER = "<<name_1[nonstriker]<<endl;
	cout<<"BOWLER = "<<name_2[bowler]<<endl;

if (overs !=0 )
{   
do
{
do
{    
	menu();
    switch (status)
{
    case '1':
{   score = score+1;
	scored_1[striker] = scored_1 [striker] + 1 ;
	ballsfaced_1[striker] = ballsfaced_1 [striker] + 1 ;
	runs_2[bowler] = runs_2[bowler] + 1 ;
	swap(); 
	balls=balls+1;
	players();
	break;
}
	case '2':
{ 
    score = score+2;
	scored_1[striker] = scored_1 [striker] + 2 ;
	ballsfaced_1[striker] = ballsfaced_1 [striker] + 1 ;
	runs_2[bowler] = runs_2[bowler] + 2 ; 
	balls=balls+1;
	players();
	break;
}
    case '3':
{   score = score+3;
	scored_1[striker] = scored_1 [striker] + 3 ;
	ballsfaced_1[striker] = ballsfaced_1 [striker] + 1 ;
	runs_2[bowler] = runs_2[bowler] + 3 ;
	swap(); 
	balls=balls+1;
	players();
	break;
}
	case '4':
{ 
    score = score+4;
	scored_1[striker] = scored_1 [striker] + 4 ;
	ballsfaced_1[striker] = ballsfaced_1 [striker] + 1 ;
	runs_2[bowler] = runs_2[bowler] + 4 ; 
	balls=balls+1;
	players();
	break;
}		
	case '5':
{ 
    score = score+5;
	scored_1[striker] = scored_1 [striker] + 0 ;
	ballsfaced_1[striker] = ballsfaced_1 [striker] + 0 ;
	runs_2[bowler] = runs_2[bowler] + 5 ; 
	balls=balls+0;
	players();
	break;
}
	case '6':
{ 
    score = score+6;
	scored_1[striker] = scored_1 [striker] + 6 ;
	ballsfaced_1[striker] = ballsfaced_1 [striker] + 1 ;
	runs_2[bowler] = runs_2[bowler] + 6 ; 
	balls=balls+1;
	players();
	break;
}
	case '8':
{ 
    score = score+1;
	scored_1[striker] = scored_1 [striker] + 0 ;
	ballsfaced_1[striker] = ballsfaced_1 [striker] + 0 ;
	runs_2[bowler] = runs_2[bowler] + 1 ; 
	balls=balls+0;
	players();
	break;
}
	case '7':
{ 
    wicket = wicket+1;
    wicket_2[bowler] = wicket_2[bowler] +1 ;
    ballsfaced_1[striker] = ballsfaced_1[striker] +1 ;
	balls=balls+1;
    
    if (wicket == 5)
{
    cout<<"ALL PLAYERS HAVE BEEN DISMISSWED !!!!"<<endl;
    cout<<"TARGET = "<<score<<endl;
    break;
}
	else 
{
	do 
{
	system("cls");
    team1name();
    cout<<endl<<endl<<endl<<"Enter the STRIKER NUmber"<<endl;
    cin>>STRIKER;
    if (STRIKER == '0' || STRIKER >= '6' )
    cout<<"Please choose from the given players"<<endl;
	system("pause");
} 
	while (STRIKER == '0' || STRIKER >= '6' ) ;
}
    striker = STRIKER-49 ; nonstriker = NONSTRIKER-49 ; bowler = BOWLER-49 ;
    
    players();
    break;
}

	}
}
while (balls != 6) ;
if (overs>1)
{
	
}
overs=overs-1;
balls=0;
cout<<endl<<endl<<"OVER ENDED\nCHOOSE THE NEXT BOWLER"<<endl;
system("pause");

	do 
{
	system("cls");
	team2name();
	cout<<endl<<endl<<endl<<"ENTER THE BOWLER :  ";
	cin>>BOWLER;
	if (BOWLER == '0' || BOWLER >= '6')
	cout<<"Please Enter the right Player Number !!!"<<endl;
	system("pause");
} 
while (BOWLER == '0' || BOWLER >= '6') ;
   	
    striker = STRIKER-49 ; nonstriker = NONSTRIKER-49 ; bowler = BOWLER-49 ;
swap();
players();
}
while (overs!=0);
	cout<<"INNINGS FINISHED !!!!"<<endl;
	cout<<"TARGET = "<<score<<endl;
	target = score;
	cout<<wicket;
}
}

void team2batting()
{   
	system("cls");
	do 
	{
		system("cls");
    	team2name();
    	cout<<endl<<endl<<endl<<"Enter the STRIKER NUmber"<<endl;
    	cin>>STRIKER;
    	if (STRIKER == '0' || STRIKER >= '6' )
    	cout<<"Please choose from the given players"<<endl;
    	system("pause");
	} 
 	while (STRIKER == '0' || STRIKER >= '6' ) ;
	do
	{
		cout<<endl<<"Enter the NON-STRIKER NUmber"<<endl;
    	cin>>NONSTRIKER;
    	if (STRIKER == '0' || STRIKER >= '6' || STRIKER == NONSTRIKER )
    		cout<<"Please choose the right player"<<endl;
	} 
 	while (STRIKER == '0' || STRIKER >= '6' || STRIKER == NONSTRIKER )	;
	    
	do 
	{
		system("cls");
		team1name();
		cout<<endl<<endl<<endl<<"ENTER THE BOWLER :  ";
		cin>>BOWLER;
		if (BOWLER == '0' || BOWLER >= '6')
			cout<<"Please Enter the right Player Number !!!"<<endl;
		system("pause");
	} 
   	while (BOWLER == '0' || BOWLER >= '6') ;
   	
    striker = STRIKER-49 ; nonstriker = NONSTRIKER-49 ; bowler = BOWLER-49 ;
	system("cls");
	cout<<"STRIKER = "<<name_2[striker]<<endl;
	cout<<"NON-STRIKER = "<<name_2[nonstriker]<<endl;
	cout<<"BOWLER = "<<name_1[bowler]<<endl;

if (overs_1 !=0 )

{   
do
{
do
{    
	menu();
    switch (status)
{
    case '1':
{   score_1  = score_1 +1;
	scored_2[striker] = scored_2 [striker] + 1 ;
	ballsfaced_2[striker] = ballsfaced_2 [striker] + 1 ;
	runs_1[bowler] = runs_1[bowler] + 1 ;
	swap();
	balls_1=balls_1+1;
	players();
	break;
}
	case '2':
{ 
    score_1  = score_1 +2;
	scored_2[striker] = scored_2 [striker] + 2 ;
	ballsfaced_2[striker] = ballsfaced_2 [striker] + 1 ;
	runs_1[bowler] = runs_1[bowler] + 2 ; 
	balls_1=balls_1+1;
	players();
	break;
}
    case '3':
{   score_1  = score_1 +3;
	scored_2[striker] = scored_2 [striker] + 3 ;
	ballsfaced_2[striker] = ballsfaced_2 [striker] + 1 ;
	runs_1[bowler] = runs_1[bowler] + 3 ;
	swap(); 
	balls_1=balls_1+1;
	players();
	break;
}
	case '4':
{ 
    score_1  = score_1 +4;
	scored_2[striker] = scored_2 [striker] + 4 ;
	ballsfaced_2[striker] = ballsfaced_2 [striker] + 1 ;
	runs_1[bowler] = runs_1[bowler] + 4 ; 
	balls_1=balls_1+1;
	players();
	break;
}		
	case '5':
{ 
    score_1  = score_1 +5;
	scored_2[striker] = scored_2 [striker] + 0 ;
	ballsfaced_2[striker] = ballsfaced_2 [striker] + 0 ;
	runs_1[bowler] = runs_1[bowler] + 5 ; 
	balls_1=balls_1+0;
	players();
	break;
}
	case '6':
{ 
    score_1  = score_1 +6;
	scored_2[striker] = scored_2 [striker] + 6 ;
	ballsfaced_2[striker] = ballsfaced_2 [striker] + 1 ;
	runs_1[bowler] = runs_1[bowler] + 6 ; 
	balls=balls+1;
	players();
	break;
}
	case '8':
{ 
    score_1  = score_1 +1;
	scored_2[striker] = scored_2 [striker] + 0 ;
	ballsfaced_2[striker] = ballsfaced_2 [striker] + 0 ;
	runs_1[bowler] = runs_1[bowler] + 1 ; 
	balls_1=balls_1+0;
	players();
	break;
}
	case '7':
{ 
    wicket1 = wicket1+1;
    wicket_1[bowler] = wicket_1[bowler] +1 ;
    ballsfaced_2[striker] = ballsfaced_2[striker] +1 ;
	balls_1=balls_1+1;
    
    if (wicket1 == 5)
{
    cout<<"ALL PLAYERS HAVE BEEN DISMISSWED !!!!"<<endl;
    cout<<"TARGET = "<<score<<endl;
    break;
}
	else 
{
	do 
{
	system("cls");
    team2name();
    cout<<endl<<endl<<endl<<"Enter the STRIKER NUmber"<<endl;
    cin>>STRIKER;
    if (STRIKER == '0' || STRIKER >= '6' )
    cout<<"Please choose from the given players"<<endl;
	system("pause");
} 
	while (STRIKER == '0' || STRIKER >= '6' ) ;
}
    striker = STRIKER-49 ; nonstriker = NONSTRIKER-49 ; bowler = BOWLER-49 ;
    
    players();
    break;
}

	}
}
while (balls_1 != 6) ;
overs_1=overs_1-1;
balls_1=0;
cout<<endl<<endl<<"OVER ENDED\nCHOOSE THE NEXT BOWLER"<<endl;
system("pause");
	do 
{
	system("cls");
	team1name();
	cout<<endl<<endl<<endl<<"ENTER THE BOWLER :  ";
	cin>>BOWLER;
	if (BOWLER == '0' || BOWLER >= '6')
	cout<<"Please Enter the right Player Number !!!"<<endl;
	system("pause");
} 
while (BOWLER == '0' || BOWLER >= '6') ;
   	
    striker = STRIKER-49 ; nonstriker = NONSTRIKER-49 ; bowler = BOWLER-49 ;
swap();
players();
}
while (overs_1!=0);
	cout<<"INNINGS FINISHED !!!!"<<endl;
	cout<<"TARGET = "<<score<<endl;
	target = score_1  ;
	cout<<wicket1;
}
}
void filehandling(){
	
	ofstream pro;
	pro.open("d:/axc/pro.txt",ios::trunc);
	if(pro.is_open()){
		for(int i=0;i<10;i++){
		
			}
			cout<<"data saved in file";
			pro<<"team 1 name:\n";
			pro<<team_1<<"\n";
			pro<<"team 2 name:\n";
			pro<<team_2<<"\n";
			pro<<"team 1 players names:\n";
			for(int i=0;i<6;i++)
			pro<<i<<")"<<name_1[i]<<"\n";
			pro<<"--------------------------\n";
			pro<<"team 2 names:\n";
			for(int i=0;i<6;i++)
			pro<<i<<")"<<name_2[i]<<"\n";
			pro<<"total runs of first innings\n";
			pro<<score<<"\n";
			pro<<"wickets of first team: \n";
			pro<<wicket<<"\n";
			pro<<"target\n";
			pro<<score;
			pro.close();
	}
	else
	cout<<"error";

	
}
