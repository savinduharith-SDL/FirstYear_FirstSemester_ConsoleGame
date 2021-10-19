#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include<conio.h> // cls
#include <windows.h>
#include<iomanip>
using namespace std;

void welcomeScreen();
void GameCore();
void QuitGame();
void Export();
void InvalidInput();
void HighScoreViewer();
void CompareSelection(char n);
bool gameLogic(int pcGenrated, int userSelection); 
void printScissor();
void print_rock();
void credits();
void print_welcome();
void Select_elements_inline();
void print_paper();
void print_main_menu();
void loading();
void youWin();
void youLoss();

int main()
{ 
    // Get console window handle
  HWND wh = GetConsoleWindow();
 
    // Move window to required position
  MoveWindow(wh, 200, 0, 1200, 830, TRUE);
  
  print_welcome();
  usleep(999999);
  usleep(99999);
  usleep(99999);
  usleep(99999);
  system("CLS");
  welcomeScreen();  
}



void welcomeScreen()
{ 
  mainMenu:
  system("CLS");
  print_main_menu(); 
  switch(getch())
  {
    case '1':
      {
        GameCore();
        break;
      }
    case '2':
      {
        Export();
        break;
      }
    case '3':
      {
        HighScoreViewer();
        break;
      }
    case '4':
      {
        credits();
        break;
      }
    case '5':
      {
        QuitGame();
        break;        
      }
    default :
      {
        goto mainMenu;
        break;
      }
  }
}
  
void GameCore()
{
  
  
//selection part 
while(true)
{ 


  Select_elements_inline();
  char selection = getch();
  system("CLS");
  switch(selection)
  {
    case '1' :
      {
        cout << "You have selected Rock.\n" ;
        print_rock();
        break;
      }
      
    case '2' :
      {
        cout << "You have selected paper.\n" ;
        print_paper();
        break;
      }
    case '3' :
      {
        cout << "You have selected Scissor.\n" ;
        printScissor();
        break;
      } 
      
    case '4' :
      {
				welcomeScreen() ;
        break;
        
      }   
    default :  //invalid ekata danna
      {
  			cout << "Invalid input.please select again\n" ;
        GameCore(); 
  			break;
      }
  }
  
    CompareSelection(selection);
  
  	cout << "\n.............................................................................\n";  
}

}


void Export()
{
  
 
  
}

void credits()
{
  const char rocket[] =
"                         Production crew: \n\
          \n\
          \n\
                        IM/2019/009-Malshan\n\
          \n\
                        IM/2019/023-Tharuka\n\
          \n\
                        IM/2019/025-Savindu\n\
          \n\
                        IM/2019/067-Isal\n\
          \n\
";
for (int i = 0; i < 50; i ++)
{
	printf("\n"); // go to the bottom of the console while creating free spaces 
}
printf("%s", rocket);
int j = 399999;
for (int i = 0; i < 30; i ++) {
        usleep(j);
        printf("\n"); // move rocket a line upward
    }
	printf("Thanks you for playing!");
  usleep(999999);
  usleep(99999); 
  system("CLS");
  welcomeScreen();
    
}


void QuitGame()
{	
  system("CLS");
  cout << "Good bye !" ;
  exit(0);
}


void InvalidInput()
{
  cout << "Something went wrong!\n";
  cout << "Please enter a valid input !";
  
}




void HighScoreViewer()
{
	
}



void CompareSelection(char n)
{
  
  cout << "\nComputer is thinking about his openion XD" ;
  loading();
//	delay(2000) ;  
  
  //randomly generate;
  int randomNum;
  randomNum = (rand() % 3) + 1;
	switch(randomNum)
  {
    case 1 :        
      {
				cout << "\npc has selected rock\n";
        print_rock();
        break;
      }
    case 2 :        
      {
				cout << "\npc has selected paper\n";
        print_paper();
        break;
      }		
    case 3:
      {
        cout << "\npc has selected scissor\n";
        printScissor();
        break;
      }
     default:
     {
   			cout << "Internal error! debug log" ;    //debug log   
     }  
    
  }
  

  int integerN = n ;
  integerN = integerN - 48 ;
  
  
  if(integerN != randomNum)
  {
    bool status = gameLogic(randomNum, integerN);
    if(status)
    {
      youWin() ;
    }
    else
    {
     youLoss() ;
    }
  }
  else if(integerN == randomNum)
  {
    cout << "\nDraw\n";
  }
  

  cout << "\nPress 1 to quit to title screen or press any number to replay.\n" ;
  
  if(getch()== '1'){
  	welcomeScreen();
  }

}


bool gameLogic(int pcGenrated, int userSelection) 
{
  //1-rock,2-paper,3-scissor
  //userWin - 1
  //Pc win - 0
  
  //User win conditions
  if(pcGenrated == 1 && userSelection == 2)
  {
    return true;
  }
  else if(pcGenrated == 2 && userSelection == 3)
  {
    return true;
  }
  else if(pcGenrated == 3 && userSelection == 1)
  {
    return true;
  }
  
  //PC win conditions
  else if(pcGenrated == 2 && userSelection == 1)
  {
    return false;
  }
  else if(pcGenrated == 3 && userSelection == 2)
  {
    return false;
  }
  else if(pcGenrated == 1 && userSelection == 3)
  {
    return false;
  }
}


void printScissor()
{
	cout<<" . . . . . . . . . . . . . . . .  . . . . . . \n" ;
	cout<<" . . .@@@@@@ . . . .  SCISSOR  . . . . . . . .\n" ; 
	cout<<" . . @@@ @@@@@ . . . . . . . . . . . . .@@@@@.\n" ; 
	cout<<". . @@       @@ . . . . . . . . . @@@@@@@@. ..\n" ; 
	cout<<". . . @@@@  @@@ . . . . . . . @@@@@@@@. . . ..\n" ;  
	cout<<" . . . . .@@@@@@ . . . . .@@@@@@@@ . . . . . .\n" ;
	cout<<" . . . . . . . @@@@@ .@@@@@@@. . . . . . . . .\n" ;
	cout<<". . . . . . . . . @@@@@@@ . . . . . . . . . ..\n" ; 
	cout<<". . . . . . . @@@@@@@ .@@@@@@ . . . . . . . ..\n" ;
	cout<<" . . . . @@@@@@@@@ . . . . @@@@@@@ . . . . . .\n" ;
	cout<<" . . @@@@       @@ . . . . . . @@@@@@@ . . . .\n" ;
	cout<<". .@@@        @@@ . . . . . . . .  @@@@@@@  ..\n" ; 
	cout<<". . @@@@@@@@@@@ . . . . . . . . . . . .@@@@@..\n" ; 
	cout<<" . . . . . . . . . . . . . . . . . . . . . .  \n" ;
}

void print_rock()
{
	cout << "..............@@@@@@@@@@@@..............\n";
	cout << ".........  @@@@@@@@@@@@@@@@@............\n";
	cout << "........@@@@@@@@@@@@@@@@@@@@@@@.........\n";
	cout << "......@@@@@@@@@@@@@@@@@@@@@@@@@@........\n";
	cout << "....@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@......\n";
	cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.....\n";
	cout << ".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@....\n";
	cout << ".@@@@@@@@@@@@   ROCK   @@@@@@@@@@@@@....\n";
	cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.....\n";
	cout << "....@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.......\n";
	cout << ".....@@@@@@@@@@@@@@@@@@@@@@@@@@@........\n";
	cout << ".......@@@@@@@@@@@@@@@@@@@@@@@..........\n";
	cout << ".. ......@@@@@@@@@@@@@@@@@@@............\n";
	cout << "...........@@@@@@@@@@@@@@@..............\n";
}

void print_paper()
{
	cout << "..................................\n" ;
	cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..\n" ;
	cout << "..@@@@@@@@@@@@@@@@           @@@..\n" ;
	cout << "..@@@@@@@@@@@@@@@@   Paper   @@@..\n" ;
	cout << "..@@@@@@@@@@@@@@@@           @@@..\n" ;
	cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..\n" ;
	cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..\n" ;
	cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..\n" ;
	cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..\n" ;
	cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..\n" ;
	cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..\n" ;
	cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..\n" ;
	cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..\n" ;
	cout << "..................................\n" ;
}


void print_welcome()
{
cout << endl;cout << endl;
cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;  
cout <<  "       `8.`888b                 ,8' 8 8888888888   8 8888         ,o888888o.        ,o888888o.           ,8.      ,8.          8 888888888888   \n ";
cout <<  "       `8.`888b               ,8'  8 8888         8 8888        8888     `88.   . 8888     `88.        ,888.     ,888.         8 8888         \n ";
cout <<  "        `8.`888b             ,8'   8 8888         8 8888     ,8 8888       `8. ,8 8888       `8b      .`8888.   .`8888.        8 8888         \n ";
cout <<  "         `8.`888b     .b    ,8'    8 8888         8 8888     88 8888           88 8888        `8b    ,8.`8888. ,8.`8888.       8 8888         \n ";
cout <<  "          `8.`888b    88b  ,8'     8 888888888888 8 8888     88 8888           88 8888         88   ,8'8.`8888,8^8.`8888.      8 888888888888 \n ";
cout <<  "           `8.`888b .`888b,8'      8 8888         8 8888     88 8888           88 8888         88  ,8' `8.`8888' `8.`8888.     8 8888         \n ";
cout <<  "            `8.`888b8.`8888'       8 8888         8 8888     88 8888           88 8888        ,8P ,8'   `8.`88'   `8.`8888.    8 8888         \n ";
cout <<  "             `8.`888`8.`88'        8 8888         8 8888     `8 8888       .8' `8 8888       ,8P ,8'     `8.`'     `8.`8888.   8 8888         \n ";
cout <<  "              `8.`8' `8,`'         8 8888         8 8888        8888     ,88'   ` 8888     ,88' ,8'       `8        `8.`8888.  8 8888         \n ";
cout <<  "               `8.`   `8'          8 888888888888 8 888888888888 `8888888P'        `8888888P'  ,8'         `         `8.`8888. 8 888888888888 \n ";
}

void Select_elements_inline()
{
system("CLS");
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "                                                     Press the corresponding number\n";
cout << "\n";
cout << "\n";
cout << "           ..............@@@@@@@@@@@@.............|...................................|. . . . . . . . . . . . . . . .  . . . . . . .\n";
cout << "           .........  @@@@@@@@@@@@@@@@@...........|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. . . @@@@@@ . . . .  SCISSOR  . . . . . . . .\n";
cout << "           ........@@@@@@@@@@@@@@@@@@@@@@@........|...@@@@@@@@@@@@@@@@           @@@..| . . @@@ @@@@@ . . . . . . . . . . . . .@@@@@.\n";
cout << "           ......@@@@@@@@@@@@@@@@@@@@@@@@@@.......|...@@@@@@@@@@@@@@@@   Paper   @@@..|. . @@       @@ . . . . . . . . . @@@@@@@@. ..\n";
cout << "           ....@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.....|...@@@@@@@@@@@@@@@@           @@@..|. . . @@@@  @@@ . . . . . . . @@@@@@@@. . . ..\n";
cout << "           ..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@....|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. . . . .@@@@@@ . . . . .@@@@@@@@ . . . . . .\n";
cout << "           .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@...|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..| . . . . . . . @@@@@ .@@@@@@@. . . . . . . . .\n";
cout << "           .@@@@@@@@@@@@   ROCK   @@@@@@@@@@@@@...|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. . . . . . . . . @@@@@@@ . . . . . . . . . ..\n";
cout << "           ..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@....|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. . . . . . . @@@@@@@ .@@@@@@ . . . . . . . ..\n";
cout << "           ....@@@@@@@@@@@@@@@@@@@@@@@@@@@@@......|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..| . . . . @@@@@@@@@ . . . . @@@@@@@ . . . . . .\n";
cout << "           .....@@@@@@@@@@@@@@@@@@@@@@@@@@@.......|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..| . . @@@@       @@ . . . . . . @@@@@@@ . . . .\n";
cout << "           .......@@@@@@@@@@@@@@@@@@@@@@@.........|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. .@@@        @@@ . . . . . . . .  @@@@@@@  ..\n";
cout << "           .........@@@@@@@@@@@@@@@@@@@...........|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. . @@@@@@@@@@@ . . . . . . . . . . . .@@@@@..\n";
cout << "           ...........@@@@@@@@@@@@@@@.............|...................................| . . . . . . . . . . . . . . . . . . . . . .  \n";
cout << endl;  
cout << "                        | 1.Rock |                              |2.paper|                                   |3.Scissor|                \n";
cout << endl;

}

void print_main_menu()
{cout << endl;cout << endl;
cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;cout << endl;  
cout<< setw (100) << "88,dPYba,,adPYba,   ,adPPYba, 8b,dPPYba,  88       88\n" ;  
cout<< setw (100) << "88P     88      8a a8P_____88 88P      8a 88       88\n" ; 
cout<< setw (100) << "88      88      88 8PP        88       88 88       88\n" ; 
cout<< setw (100) << "88      88      88  8b,   ,aa 88       88  8a,   ,a88\n" ;  
cout<< setw (100) << "88      88      88    Ybbd8   88       88    YbbdP Y8\n" ; 
cout << endl; 
cout << "                                             __| |____________________________________________| |__\n";
cout << "                                            (__   ____________________________________________   __)\n";
cout << "                                               | |                                            | |\n";
cout << "                                               | |                 1.Start                    | |\n";
cout << "                                               | |                 2.Export                   | |\n";
cout << "                                               | |                 3.High Score               | |\n";
cout << "                                               | |                 4.Credits                  | |\n";
cout << "                                               | |                 5.Quit                     | |\n";
cout << "                                             __| |____________________________________________| |__\n";
cout << "                                            (__   ____________________________________________   __)\n";
cout << "                                               | |                                            | |\n";
}

void loading()
{
  for(int i=0; i< 3;i++)
  {
    cout <<" .";
    usleep(999999);
  }
  cout <<"\n";
}



void youWin()
{
usleep(999999);
usleep(999999);
system("CLS");  
cout << "YYYYYYY       YYYYYYY     OOOOOOOOO     UUUUUUUU     UUUUUUUU     WWWWWWWW                           WWWWWWWW     OOOOOOOOO     NNNNNNNN        NNNNNNNN\n";
cout << "Y:::::Y       Y:::::Y   OO:::::::::OO   U::::::U     U::::::U     W::::::W                           W::::::W   OO:::::::::OO   N:::::::N       N::::::N\n";
cout << "Y:::::Y       Y:::::Y OO:::::::::::::OO U::::::U     U::::::U     W::::::W                           W::::::W OO:::::::::::::OO N::::::::N      N::::::N\n";
cout << "Y::::::Y     Y::::::YO:::::::OOO:::::::OUU:::::U     U:::::UU     W::::::W                           W::::::WO:::::::OOO:::::::ON:::::::::N     N::::::N\n";
cout << "YYY:::::Y   Y:::::YYYO::::::O   O::::::O U:::::U     U:::::U       W:::::W           WWWWW           W:::::W O::::::O   O::::::ON::::::::::N    N::::::N\n";
cout << "   Y:::::Y Y:::::Y   O:::::O     O:::::O U:::::D     D:::::U        W:::::W         W:::::W         W:::::W  O:::::O     O:::::ON:::::::::::N   N::::::N\n";
cout << "    Y:::::Y:::::Y    O:::::O     O:::::O U:::::D     D:::::U         W:::::W       W:::::::W       W:::::W   O:::::O     O:::::ON:::::::N::::N  N::::::N\n";
cout << "     Y:::::::::Y     O:::::O     O:::::O U:::::D     D:::::U          W:::::W     W:::::::::W     W:::::W    O:::::O     O:::::ON::::::N N::::N N::::::N\n";
cout << "      Y:::::::Y      O:::::O     O:::::O U:::::D     D:::::U           W:::::W   W:::::W:::::W   W:::::W     O:::::O     O:::::ON::::::N  N::::N:::::::N\n";
cout << "       Y:::::Y       O:::::O     O:::::O U:::::D     D:::::U            W:::::W W:::::W W:::::W W:::::W      O:::::O     O:::::ON::::::N   N:::::::::::N\n";
cout << "       Y:::::Y       O:::::O     O:::::O U:::::D     D:::::U             W:::::W:::::W   W:::::W:::::W       O:::::O     O:::::ON::::::N    N::::::::::N\n";
cout << "       Y:::::Y       O::::::O   O::::::O U::::::U   U::::::U              W:::::::::W     W:::::::::W        O::::::O   O::::::ON::::::N     N:::::::::N\n";
cout << "       Y:::::Y       O:::::::OOO:::::::O U:::::::UUU:::::::U               W:::::::W       W:::::::W         O:::::::OOO:::::::ON::::::N      N::::::::N\n";
cout << "    YYYY:::::YYYY     OO:::::::::::::OO   UU:::::::::::::UU                 W:::::W         W:::::W           OO:::::::::::::OO N::::::N       N:::::::N\n";
cout << "    Y:::::::::::Y       OO:::::::::OO       UU:::::::::UU                    W:::W           W:::W              OO:::::::::OO   N::::::N        N::::::N\n";
cout << "    YYYYYYYYYYYYY         OOOOOOOOO           UUUUUUUUU                       WWW             WWW                 OOOOOOOOO     NNNNNNNN         NNNNNNN\n";  
cout << endl ;  
cout << endl ;
cout << "                                                                            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶                 \n" ;
cout << "                                                                           ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶                \n" ;
cout << "                                                                      ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶           \n" ;
cout << "                                                                     ¶¶¶¶¶¶¶               ¶¶¶¶¶¶¶          \n" ;
cout << "                                                                  ¶¶¶¶¶                         ¶¶¶¶¶       \n" ;
cout << "                                                                 ¶¶¶¶¶                           ¶¶¶¶¶      \n" ;
cout << "                                                               ¶¶¶¶                                 ¶¶¶¶    \n" ;
cout << "                                                               ¶¶¶¶                                 ¶¶¶¶    \n" ;
cout << "                                                               ¶¶¶¶     ¶¶¶¶¶¶¶         ¶¶¶¶¶¶¶     ¶¶¶¶    \n" ;
cout << "                                                              ¶¶¶       ¶¶¶¶¶¶¶         ¶¶¶¶¶¶¶       ¶¶¶¶¶¶\n" ;
cout << "                                                            ¶¶¶¶        ¶¶¶¶¶¶¶         ¶¶¶¶¶¶¶         ¶¶¶¶\n" ;
cout << "                                                            ¶¶¶¶                                        ¶¶¶¶\n" ;
cout << "                                                            ¶¶¶¶                                        ¶¶¶¶\n" ;
cout << "                                                            ¶¶¶¶                                        ¶¶¶¶\n" ;
cout << "                                                            ¶¶¶¶                                        ¶¶¶¶\n" ;
cout << "                                                            ¶¶¶¶                                        ¶¶¶¶\n" ;
cout << "                                                            ¶¶¶¶      ¶                         ¶       ¶¶¶¶\n" ;
cout << "                                                            ¶¶¶¶     ¶¶¶¶                     ¶¶¶¶      ¶¶¶¶\n" ;
cout << "                                                              ¶¶¶     ¶¶¶¶¶                 ¶¶¶¶¶     ¶¶¶¶¶¶\n" ;
cout << "                                                               ¶¶¶¶     ¶¶¶¶               ¶¶¶¶     ¶¶¶¶    \n" ;
cout << "                                                               ¶¶¶¶       ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶       ¶¶¶¶    \n" ;
cout << "                                                               ¶¶¶¶         ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶         ¶¶¶¶    \n" ;
cout << "                                                                 ¶¶¶¶¶                           ¶¶¶¶¶      \n" ;
cout << "                                                                  ¶¶¶¶¶                         ¶¶¶¶¶       \n" ;
cout << "                                                                     ¶¶¶¶¶¶¶               ¶¶¶¶¶¶¶          \n" ;
cout << "                                                                      ¶¶¶¶¶¶               ¶¶¶¶¶¶           \n" ;
cout << "                                                                            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶                 \n" ;
cout << "                                                                            ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶                 \n" ;
                                                      
  
}





void youLoss()
{
usleep(999999);
usleep(999999);  
system("CLS");  
cout << "YYYYYYY       YYYYYYY     OOOOOOOOO     UUUUUUUU     UUUUUUUU     LLLLLLLLLLL                  OOOOOOOOO        SSSSSSSSSSSSSSS TTTTTTTTTTTTTTTTTTTTTTT\n" ;
cout << "Y:::::Y       Y:::::Y   OO:::::::::OO   U::::::U     U::::::U     L:::::::::L                OO:::::::::OO    SS:::::::::::::::ST:::::::::::::::::::::T\n" ;
cout << "Y:::::Y       Y:::::Y OO:::::::::::::OO U::::::U     U::::::U     L:::::::::L              OO:::::::::::::OO S:::::SSSSSS::::::ST:::::::::::::::::::::T\n" ;
cout << "Y::::::Y     Y::::::YO:::::::OOO:::::::OUU:::::U     U:::::UU     LL:::::::LL             O:::::::OOO:::::::OS:::::S     SSSSSSST:::::TT:::::::TT:::::T\n" ;
cout << "YYY:::::Y   Y:::::YYYO::::::O   O::::::O U:::::U     U:::::U        L:::::L               O::::::O   O::::::OS:::::S            TTTTTT  T:::::T  TTTTTT\n" ;
cout << "   Y:::::Y Y:::::Y   O:::::O     O:::::O U:::::D     D:::::U        L:::::L               O:::::O     O:::::OS:::::S                    T:::::T        \n" ;
cout << "    Y:::::Y:::::Y    O:::::O     O:::::O U:::::D     D:::::U        L:::::L               O:::::O     O:::::O S::::SSSS                 T:::::T        \n" ;
cout << "     Y:::::::::Y     O:::::O     O:::::O U:::::D     D:::::U        L:::::L               O:::::O     O:::::O  SS::::::SSSSS            T:::::T        \n" ;
cout << "      Y:::::::Y      O:::::O     O:::::O U:::::D     D:::::U        L:::::L               O:::::O     O:::::O    SSS::::::::SS          T:::::T        \n" ;
cout << "       Y:::::Y       O:::::O     O:::::O U:::::D     D:::::U        L:::::L               O:::::O     O:::::O       SSSSSS::::S         T:::::T        \n" ;
cout << "       Y:::::Y       O:::::O     O:::::O U:::::D     D:::::U        L:::::L               O:::::O     O:::::O            S:::::S        T:::::T        \n" ;
cout << "       Y:::::Y       O::::::O   O::::::O U::::::U   U::::::U        L:::::L         LLLLLLO::::::O   O::::::O            S:::::S        T:::::T        \n" ;
cout << "       Y:::::Y       O:::::::OOO:::::::O U:::::::UUU:::::::U      LL:::::::LLLLLLLLL:::::LO:::::::OOO:::::::OSSSSSSS     S:::::S      TT:::::::TT      \n" ;
cout << "    YYYY:::::YYYY     OO:::::::::::::OO   UU:::::::::::::UU       L::::::::::::::::::::::L OO:::::::::::::OO S::::::SSSSSS:::::S      T:::::::::T      \n" ;
cout << "    Y:::::::::::Y       OO:::::::::OO       UU:::::::::UU         L::::::::::::::::::::::L   OO:::::::::OO   S:::::::::::::::SS       T:::::::::T      \n" ;
cout << "    YYYYYYYYYYYYY         OOOOOOOOO           UUUUUUUUU           LLLLLLLLLLLLLLLLLLLLLLLL     OOOOOOOOO      SSSSSSSSSSSSSSS         TTTTTTTTTTT  	\n" ;
cout << endl ;
cout << endl ;
cout << "                                                          ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶      \n "; 
cout << "                                                       ¶¶¶¶¶¶             ¶¶¶¶¶¶        \n "; 
cout << "                                                      ¶¶¶¶¶                 ¶¶¶¶¶¶       \n ";
cout << "                                                     ¶¶¶¶                     ¶¶¶¶¶      \n ";
cout << "                                                    ¶¶¶¶                       ¶¶¶¶¶     \n ";
cout << "                                                   ¶¶¶¶     ¶¶¶¶       ¶¶¶¶      ¶¶¶     \n ";
cout << "                                                   ¶¶¶     ¶¶¶¶¶¶     ¶¶¶¶¶¶     ¶¶¶¶    \n ";
cout << "                                                  ¶¶¶¶     ¶¶¶¶¶¶     ¶¶¶¶¶¶      ¶¶¶    \n ";
cout << "                                                  ¶¶¶       ¶¶¶¶       ¶¶¶¶       ¶¶¶¶   \n ";
cout << "                                                  ¶¶¶                              ¶¶¶   \n ";
cout << "                                                  ¶¶¶                              ¶¶¶   \n ";
cout << "                                                  ¶¶¶                              ¶¶¶   \n ";
cout << "                                                  ¶¶¶            ¶¶¶¶¶            ¶¶¶¶   \n ";
cout << "                                                  ¶¶¶¶        ¶¶¶¶¶¶¶¶¶¶¶         ¶¶¶    \n ";
cout << "                                                   ¶¶¶      ¶¶¶¶¶     ¶¶¶¶¶      ¶¶¶¶    \n ";
cout << "                                                   ¶¶¶¶    ¶¶¶           ¶¶¶    ¶¶¶¶     \n ";
cout << "                                                    ¶¶¶¶   ¶¶             ¶¶   ¶¶¶¶      \n ";
cout << "                                                     ¶¶¶¶                    ¶¶¶¶¶       \n ";
cout << "                                                      ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶        \n ";
cout << "                                                        ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶          \n ";
    
}





      
 












