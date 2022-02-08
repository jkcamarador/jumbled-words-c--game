#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>

using namespace std;

void create_box(int n1, int n2, int n3, int n4);

void gotoxy(int,int);

void Menu();

void Four();

void Five();

void Six();

int main()
{
	Menu();
}

void Menu()
{
	char hor=205, ver= 186, tr= 187 , tl= 201, br= 188 , bl= 200;
	int choice;

	create_box(0, 78, 0, 24);
	create_box(28, 20, 2, 2);
    gotoxy(33,3);
    cout<<"JUMBLED WORDS"<< endl;
    create_box(30, 16, 6, 2);
    gotoxy(32,7);
    cout<<"(1) 4 LETTERS";
     create_box(30, 16, 10, 2);
    gotoxy(32,11);
    cout<<"(2) 5 LETTERS";
     create_box(30, 16, 14, 2);
    gotoxy(32,15);
    cout<<"(3) 6 LETTERS";
     create_box(30, 16, 18, 2);
    gotoxy(35,19);
    cout<<"(4) QUIT";

    gotoxy(30,23);
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
    	case 1:
    		Four();
    		break;
    	case 2:
    		Five();
    		break;
    	case 3:
    		Six();
    		break;
    	case 4:
    	    exit(0);
    		break;
    	default:
    		cout<<"Invalid Input!";
    		getch();
    		system("cls");
    		Menu();
	}

}

void Four()
{
    system("cls");
    string JumbledWords[] = {"sasp","aflt","esat","ootl","lefx","ombb","mkae","trem","blae","acrd","igrp","raer","rfim","eder","hicn","hlep","deit","aird","ahlf","saor","laek","nuat","mnok","anld","sitr","cvae","rcew","laed","lsik","awll","tial","oomn","taem","wism","drae","oobk","rcie","plie","tsos","adwn","fmae","hdie","txai","wvae","salm","apwn","plul","baem","bnag","ilme","gril","wceh","elsa","erti","sate","stpa","mtae","elwl","niva","dibn","sewn","evli","itps","ltea","elha","koco","ameb","ameb","otol","rleo","drhe","tahw","rokf","tlso","dowo","kcde","edsi","alwl","bsat","edfa","toro","rype","ydti","odlu","orze","bsun","mtis","otsf","crdo","elmo","sims","ekes","pira","ropu","okwr","mono","edhi","lebl","kflo","mrha","febe"};
    string Words[] =        {"pass","flat","seat","tool","flex","bomb","make","term","able","card","grip","rear","firm","deer","chin","help","diet","raid","half","soar","leak","aunt","monk","land","stir","cave","crew","lead","silk","wall","tail","moon","team","swim","dare","book","rice","pile","toss","dawn","fame","hide","taxi","wave","slam","pawn","pull","beam","bang","mile","girl","chew","sale","tire","seat","past","team","well","vain","bind","news","live","spit","late","heal","cook","beam","goat","loot","roll","herd","thaw","fork","lost","wood","deck","side","wall","stab","fade","root","prey","tidy","loud","zero","snub","mist","soft","cord","mole","miss","seek","pair","pour","work","moon","hide","bell","folk","harm","beef"};
	string ans;
    char hor=205, ver= 186, tr= 187 , tl= 201, br= 188 , bl= 200;
    int taken[50],y,x,r=0,trial=0,z=0,a=10,level=1,life=3;
    float score=0,multiplier=1,added=0;

	create_box(0, 78, 0, 24);
    srand(time(0));
    gotoxy(10,11);
    cout<<"Loading";
    for(y=0;y<50;y++)
    	{
    		gotoxy(a,12);
    		cout<<".";
    	    a++;
    	    sxit:
            Sleep(1);
    	    taken[y]=rand()%100;
    	    for(z=0;z<=y;z++){
    	    if(taken[y]==taken[z]&&y!=z){
    	    goto sxit;    	    }
    	    }
		}

    for (int x=0;x<=49;x++)
    {
    	wrong:
    	if(life==0)
    	{
    		system("cls");
    		create_box(0, 78, 0, 24);
    		gotoxy(35,10);
    		cout<<"Game Over!";
    		gotoxy(35,12);
    		cout<<"Score: "<<score;
    		goto gameover;
		}
    	system("cls");
    	create_box(0, 78, 0, 24);
    	create_box(33, 13, 2, 2);
        gotoxy(37,3);
        cout<<"Life: "<<life;
        create_box(1, 16, 2, 2);
		gotoxy(5,3);
        cout<<"Level: "<<level<<"/50";
        create_box(30, 19, 6, 2);
        gotoxy(34,7);
        cout<<"JUMBLED WORDS";
        create_box(62, 15, 2, 2);
        gotoxy(66,3);
        cout<<"Score: "<<added<<endl<<endl;
        create_box(35, 10, 10, 2);
        gotoxy(39,11);
        cout<<JumbledWords[taken[x]] << endl;
        create_box(35, 10, 14, 2);
        gotoxy(39,15);
        cin>>ans;
        if(ans==Words[taken[x]])
        {
        	create_box(21, 39, 18, 4);
            gotoxy(38,19);
            cout<<"Correct" << endl;
            gotoxy(28,21);
            system("pause");
            gotoxy(28,22);
            cout<<endl;
            system("cls");
            score=score+10;
            added=score*multiplier;
            multiplier=multiplier+0.1;
            level++;
        }
        else
        {
        	create_box(21, 39, 17, 6);
            gotoxy(32,18);
            cout<<"Incorrect Answer";
            gotoxy(36,20);
            cout<<"Try Again?";
            gotoxy(28,22);
            system("pause");
            system("cls");
            multiplier = 1;
            life=life-1;
            goto wrong;

        }
   }
    create_box(0, 78, 0, 24);
	gotoxy(25,10);
	cout<<"Congrats "<<added<<endl;
	gameover:
	getch();
	system("cls");
	Menu();
}

void Five()
{
	system("cls");
    string JumbledWords[] = {"iemla","galss","ogrly","puord","idnex","farud","cloor","ebeld","srtat","gdloe","rrcay","robwn","tcbih","tosat","emeny","oumth","rkbae","matel","flsae","elbss","ghlit","lpnta","otuhc","eknel","tswae","usget","ttaic","ccolk","rlama","tcpah","pashe","ingrd","fnait","silae","ncdae","xaect","oargn","fnail","erecp","naegt","garin","konck","trcak","uueqe","licam","lefet","tstae","tuyoh","rital","ehcat","oeblw","admel","hrsha","bcolk","boacn","briot","hserf","ctham","lsewl","eseht","ctfar","hceke","ohcca","idevo","erayd","voriy","abnci","sacot","rmoaj","antlp","eervn","ecath","ahfti","rscso","sfifn","rhmac","wtohr","bgruy","kcart","kinht","tsorh","sllme","poort","klene","ecsha","sreia","fslei","gaiel","amral","alrex","cesau","cbias","pepla","nrdag","lrevi","husrb","lgoyr","otrue","svuen","raegt","ledpa"};
	 string Words[] =       {"email","glass","glory","proud","index","fraud","color","bleed","start","lodge","carry","brown","bitch","toast","enemy","mouth","brake","metal","false","bless","light","plant","touch","kneel","waste","guest","attic","clock","alarm","patch","shape","grind","faint","aisle","dance","exact","groan","final","creep","agent","grain","knock","track","queue","claim","fleet","taste","youth","trial","cheat","elbow","medal","harsh","block","bacon","orbit","fresh","match","swell","sheet","craft","cheek","coach","video","ready","ivory","cabin","coast","major","plant","nerve","teach","faith","cross","sniff","charm","throw","rugby","track","think","short","smell","troop","kneel","chase","arise","files","agile","alarm","relax","cause","basic","apple","grand","liver","brush","glory","outer","venus","great","plead"};
	 string ans;
    char hor=205, ver= 186, tr= 187 , tl= 201, br= 188 , bl= 200;
    int taken[50],y,x,r=0,trial=0,z=0,a=10,level=1,life=4;
    float score=0,multiplier=1,added=0;

	create_box(0, 78, 0, 24);
    srand(time(0));
    gotoxy(10,11);
    cout<<"Loading";
    for(y=0;y<50;y++)
    	{
    		gotoxy(a,12);
    		cout<<".";
    	    a++;
    	    sxit:
            Sleep(1);
    	    taken[y]=rand()%100;
    	    for(z=0;z<=y;z++){
    	    if(taken[y]==taken[z]&&y!=z){
    	    goto sxit;
    	    }
    	    }
		}

    for (int x=0;x<=49;x++)
    {
    	wrong:
    	if(life==0)
    	{
    		system("cls");
    		create_box(0, 78, 0, 24);
    		gotoxy(35,10);
    		cout<<"Game Over!";
    		gotoxy(35,12);
    		cout<<"Score: "<<score;
    		goto gameover;
		}
    	system("cls");
    	create_box(0, 78, 0, 24);
    	create_box(33, 13, 2, 2);
        gotoxy(37,3);
        cout<<"Life: "<<life;
        create_box(1, 16, 2, 2);
		gotoxy(5,3);
        cout<<"Level: "<<level<<"/50";
        create_box(30, 19, 6, 2);
        gotoxy(34,7);
        cout<<"JUMBLED WORDS";
        create_box(62, 15, 2, 2);
        gotoxy(66,3);
        cout<<"Score: "<<added<<endl<<endl;
        create_box(34, 11, 10, 2);
        gotoxy(38,11);
        cout<<JumbledWords[taken[x]] << endl;
        create_box(34, 11, 14, 2);
        gotoxy(38,15);
        cin>>ans;
        if(ans==Words[taken[x]])
        {
        	create_box(21, 39, 18, 4);
            gotoxy(38,19);
            cout<<"Correct" << endl;
            gotoxy(28,21);
            system("pause");
            gotoxy(28,22);
            cout<<endl;
            system("cls");
            score=score+10;
            added=score*multiplier;
            multiplier=multiplier+0.1;
            level++;
        }
        else
        {
        	create_box(21, 39, 17, 6);
            gotoxy(32,18);
            cout<<"Incorrect Answer";
            gotoxy(36,20);
            cout<<"Try Again?";
            gotoxy(28,22);
            system("pause");
            system("cls");
            multiplier = 1;
            life=life-1;
            goto wrong;

        }
   }
    create_box(0, 78, 0, 24);
	gotoxy(25,10);
	cout<<"Congrats "<<added<<endl;
	gameover:
	getch();
	system("cls");
	Menu();
}

void Six()
{
    system("cls");
    string JumbledWords[] = {"efginr","wseanr","oosppe","naeput","snabet","eorfgt","tduile","oniotn","ucpocy","gihhet","tgrwoh","aerbmk","emusum","cousre","evusry","kcesth","kcepat","tiudso","ewdanr","atehrd","uurtfe","hoiren","rcusee","ebkast","rbsbuu","uellbt","cohosl","aubswy","eufbft","ppaear","olpsih","rsthut","hoswer","delnee","lidmde","ruccth","chseme","ooipsn","lsepae","csexue","hesnot","eadelr","igbrde","carsem","ctloae","cesard","aerbrl","ilsevr","esedrt","osmaln","mredia","nuamla","ahnvee","lrftie","eidvca","troocd","awhlet","dteicr","smyier","siaper","mtlehe","rneseu","nerinw","ongasl","adrlee","spxeoe","ttslae","cnijte","tsesrs","nrbeok","umcuva","efyast","ngierl","naluna","tgonrs","preseh","epeals","mitums","cjykoe","yetatr","nciicl","icavet","iwtgeh","pirtsi","shaktn","rfrome","nyloco","crejte","lcttea","ujtads","wfooll","eculqi","bahrcn","eeourp","orssth","tohrwg","islnat","oedtev","mnraen","msurem"};
	string Words[] =        {"finger","answer","oppose","peanut","absent","forget","dilute","notion","occupy","height","growth","embark","museum","source","survey","sketch","packet","studio","wander","thread","future","heroin","rescue","basket","suburb","bullet","school","subway","buffet","appear","polish","thrust","shower","needle","middle","crutch","scheme","poison","please","excuse","honest","dealer","bridge","scream","locate","sacred","barrel","silver","desert","salmon","admire","manual","heaven","filter","advice","doctor","wealth","credit","misery","praise","helmet","ensure","winner","slogan","dealer","expose","latest","inject","stress","broken","vacuum","safety","linger","annual","strong","sphere","please","summit","jockey","treaty","clinic","active","weight","spirit","thanks","reform","colony","reject","cattle","adjust","follow","clique","branch","europe","shorts","growth","instal","devote","manner","summer"};
	string ans;
    char hor=205, ver= 186, tr= 187 , tl= 201, br= 188 , bl= 200;
    int taken[50],y,x,r=0,trial=0,z=0,a=10,level=1,life=5;
    float score=0,multiplier=1,added=0;

	create_box(0, 78, 0, 24);
    srand(time(0));
    gotoxy(10,11);
    cout<<"Loading";
    for(y=0;y<50;y++)
    	{
    		gotoxy(a,12);
    		cout<<".";
    	    a++;
    	    sxit:
            Sleep(1);
    	    taken[y]=rand()%100;
    	    for(z=0;z<=y;z++){
    	    if(taken[y]==taken[z]&&y!=z){
    	    goto sxit;
    	    }
    	    }
		}

    for (int x=0;x<=49;x++)
    {
    	wrong:
    	if(life==0)
    	{
    		system("cls");
    		create_box(0, 78, 0, 24);
    		gotoxy(35,10);
    		cout<<"Game Over!";
    		gotoxy(35,12);
    		cout<<"Score: "<<score;
    		goto gameover;
		}
    	system("cls");
    	create_box(0, 78, 0, 24);
    	create_box(33, 13, 2, 2);
        gotoxy(37,3);
        cout<<"Life: "<<life;
        create_box(1, 16, 2, 2);
		gotoxy(5,3);
        cout<<"Level: "<<level<<"/50";
        create_box(30, 19, 6, 2);
        gotoxy(34,7);
        cout<<"JUMBLED WORDS";
        create_box(62, 15, 2, 2);
        gotoxy(66,3);
        cout<<"Score: "<<added<<endl<<endl;
        create_box(35, 10, 10, 2);
        gotoxy(38,11);
        cout<<JumbledWords[taken[x]] << endl;
        create_box(35, 10, 14, 2);
        gotoxy(38,15);
        cin>>ans;
        if(ans==Words[taken[x]])
        {
        	create_box(21, 39, 18, 4);
            gotoxy(38,19);
            cout<<"Correct" << endl;
            gotoxy(28,21);
            system("pause");
            gotoxy(28,22);
            cout<<endl;
            system("cls");
            score=score+10;
            added=score*multiplier;
            multiplier=multiplier+0.1;
            level++;
        }
        else
        {
        	create_box(21, 39, 17, 6);
            gotoxy(32,18);
            cout<<"Incorrect Answer";
            gotoxy(36,20);
            cout<<"Try Again?";
            gotoxy(28,22);
            system("pause");
            system("cls");
            multiplier = 1;
            life=life-1;
            goto wrong;

        }
   }
    create_box(0, 78, 0, 24);
	gotoxy(25,10);
	cout<<"Congrats "<<added<<endl;
	gameover:
	getch();
	system("cls");
	Menu();
}

void gotoxy(int xpos, int ypos)
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos; scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput,scrn);
}

void create_box(int n1, int n2, int n3, int n4)
{
	char hor=205, ver= 186, tr= 187 , tl= 201, br= 188 , bl= 200;
	int nl = n1+n2+1, nd= n3+n4;

	gotoxy(n1, n3);
	cout<< tl;
	gotoxy(nl, n3);
	cout<< tr;
	gotoxy(n1, nd);
	cout<< bl;
	gotoxy(nl, nd);
	cout<< br;

	for(int x=(n1+1); x< nl; x++){
		gotoxy(x, n3);
		cout<< hor;
		gotoxy(x, nd);
		cout<< hor;
	}

	for(int z=(n3+1); z<nd; z++){
		gotoxy(n1, z);
		cout << ver;
		gotoxy(nl, z);
		cout << ver;
	}
}
