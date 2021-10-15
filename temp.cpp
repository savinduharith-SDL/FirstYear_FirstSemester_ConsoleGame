#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include<conio.h> // cls

using namespace std;

void welcomeScreen();
void GameCore();
void QuitGame();
void Export();
void InvalidInput();
void HighScoreViewer();
void CompareSelection(int n);
bool gameLogic(int pcGenrated, int userSelection); 
void printScissor();
void print_rock();
void credits();
void print_welcome();
void Select_elements_inline();
void print_paper();
void print_main_menu();
int main()
{	
  print_welcome();
  usleep(999999);
  usleep(99999);
  system("CLS");
  welcomeScreen();  
}



void welcomeScreen()
{
  system("CLS");
  int userSelection;
  print_main_menu();
  cout << "1. Start\n2. Export\n3. HighScore\n4. Quit\n5. Credits :";
  cin >> userSelection;
  switch(userSelection)
  {
    case 1:
      {
        GameCore();
        break;
      }
    case 2:
      {
        Export();
        break;
      }
    case 3:
      {
        HighScoreViewer();
        break;
      }
    case 4:
      {
        QuitGame();
        break;
      }
    case 5:
      {
        credits();
        break;
      }
    default :
      {
        InvalidInput();
        break;
      }
  }
}
  
void GameCore()
{
  
  
//selection part 
while(true)
{ 

  int selection ;
  Select_elements_inline();
  cin >> selection;
  
  switch(selection)
  {
    case 1 :
      {
        cout << "You have selected Rock." ;
        print_rock();
        break;
      }
      
    case 2 :
      {
        cout << "You have selected paper." ;
        print_paper();
        break;
      }
    case 3 :
      {
        cout << "You have selected Scissor." ;
        printScissor();
        break;
      } 
      
    case 4 :
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



void CompareSelection(int n)
{
  int wait;
  cout << "\nComputer is thinking about his openion XD\n" ;
//	delay(2000) ;  
  
  //randomly generate;
  int randomNum;
  randomNum = (rand() % 3) + 1;
	switch(randomNum)
  {
    case 1 :        
      {
				cout << "\npc has selected rock";
        break;
      }
    case 2 :        
      {
				cout << "\npc has selected paper";
        break;
      }		
    case 3:
      {
        cout << "\npc has selected scissor";
        break;
      }
     default:
     {
   			cout << "Internal error! debug log" ;    //debug log   
     }  
    
  }
  
  
  if(randomNum != n)
  {
    bool status = gameLogic(randomNum, n);
    if(status)
    {
      cout<< "\nYou won the game!\n";
    }
    else
    {
      cout<< "\nYou lose the game!\n";
    }
  }
  else if(randomNum == n)
  {
    cout << "\nDraw\n";
  }
  

  cout << "\nPress 1 to quit to title screen or press any number to replay.\n" ;
  cin >> wait;
  if(wait== 1){
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
cout <<  "`8.`888b                 ,8' 8 8888888888   8 8888         ,o888888o.        ,o888888o.           ,8.       ,8.          8 8888888888   \n ";
cout <<  " `8.`888b               ,8'  8 8888         8 8888        8888     `88.   . 8888     `88.        ,888.     ,888.         8 8888         \n ";
cout <<  "  `8.`888b             ,8'   8 8888         8 8888     ,8 8888       `8. ,8 8888       `8b      .`8888.   .`8888.        8 8888         \n ";
cout <<  "   `8.`888b     .b    ,8'    8 8888         8 8888     88 8888           88 8888        `8b    ,8.`8888. ,8.`8888.       8 8888         \n ";
cout <<  "    `8.`888b    88b  ,8'     8 888888888888 8 8888     88 8888           88 8888         88   ,8'8.`8888,8^8.`8888.      8 888888888888 \n ";
cout <<  "     `8.`888b .`888b,8'      8 8888         8 8888     88 8888           88 8888         88  ,8' `8.`8888' `8.`8888.     8 8888         \n ";
cout <<  "      `8.`888b8.`8888'       8 8888         8 8888     88 8888           88 8888        ,8P ,8'   `8.`88'   `8.`8888.    8 8888         \n ";
cout <<  "       `8.`888`8.`88'        8 8888         8 8888     `8 8888       .8' `8 8888       ,8P ,8'     `8.`'     `8.`8888.   8 8888         \n ";
cout <<  "        `8.`8' `8,`'         8 8888         8 8888        8888     ,88'   ` 8888     ,88' ,8'       `8        `8.`8888.  8 8888         \n ";
cout <<  "         `8.`   `8'          8 888888888888 8 888888888888 `8888888P'        `8888888P'  ,8'         `         `8.`8888. 8 888888888888 \n ";
}

void Select_elements_inline()
{
system("CLS");
cout << "\n";
cout << "..............@@@@@@@@@@@@.............|...................................|. . . . . . . . . . . . . . . .  . . . . . . .\n";
cout << ".........  @@@@@@@@@@@@@@@@@...........|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. . . @@@@@@ . . . .  SCISSOR  . . . . . . . .\n";
cout << "........@@@@@@@@@@@@@@@@@@@@@@@........|...@@@@@@@@@@@@@@@@           @@@..| . . @@@ @@@@@ . . . . . . . . . . . . .@@@@@.\n";
cout << "......@@@@@@@@@@@@@@@@@@@@@@@@@@.......|...@@@@@@@@@@@@@@@@   Paper   @@@..|. . @@       @@ . . . . . . . . . @@@@@@@@. ..\n";
cout << "....@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.....|...@@@@@@@@@@@@@@@@           @@@..|. . . @@@@  @@@ . . . . . . . @@@@@@@@. . . ..\n";
cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@....|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. . . . .@@@@@@ . . . . .@@@@@@@@ . . . . . .\n";
cout << ".@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@...|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..| . . . . . . . @@@@@ .@@@@@@@. . . . . . . . .\n";
cout << ".@@@@@@@@@@@@   ROCK   @@@@@@@@@@@@@...|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. . . . . . . . . @@@@@@@ . . . . . . . . . ..\n";
cout << "..@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@....|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. . . . . . . @@@@@@@ .@@@@@@ . . . . . . . ..\n";
cout << "....@@@@@@@@@@@@@@@@@@@@@@@@@@@@@......|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..| . . . . @@@@@@@@@ . . . . @@@@@@@ . . . . . .\n";
cout << ".....@@@@@@@@@@@@@@@@@@@@@@@@@@@.......|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..| . . @@@@       @@ . . . . . . @@@@@@@ . . . .\n";
cout << ".......@@@@@@@@@@@@@@@@@@@@@@@.........|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. .@@@        @@@ . . . . . . . .  @@@@@@@  ..\n";
cout << ".. ......@@@@@@@@@@@@@@@@@@@...........|...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..|. . @@@@@@@@@@@ . . . . . . . . . . . .@@@@@..\n";
cout << "...........@@@@@@@@@@@@@@@.............|...................................| . . . . . . . . . . . . . . . . . . . . . .  \n";
cout << endl;  
cout << "             | 1.Rock |                              |2.paper|                                   |3.Scissor|                \n";
cout << endl;
cout << "Enter the corresponding number : ";
  
}

void print_main_menu()
{
cout<<  "88,dPYba,,adPYba,   ,adPPYba, 8b,dPPYba,  88       88\n" ;  
cout<<  "88P     88      8a a8P_____88 88P      8a 88       88\n" ; 
cout<<  "88      88      88 8PP        88       88 88       88\n" ; 
cout<<  "88      88      88  8b,   ,aa 88       88  8a,   ,a88\n" ;  
cout<<  "88      88      88    Ybbd8   88       88    YbbdP Y8\n" ;   
}





 























