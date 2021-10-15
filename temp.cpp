#include<iostream>
#include<cstdlib>
#include<stdlib.h>

using namespace std;

void welcomeScreen();
void GameCore();
void QuitGame();
void Export();
void InvalidInput();
void HighScoreViewer();
void CompareSelection(int n);
int main()
{
  welcomeScreen();
  
  
  
  
}



void welcomeScreen()
{
  int userSelection;
  cout << "1 . Start\n2. Export\n3. HighScore\n4. Quit\n :";
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
  
  cout << "\nPlease select the item\n" ;
  cout << "1.Rock\n2.paper\n3.scisor \n :";
  cin >> selection ;
  
  switch(selection)
  {
    case 1 :
      {
        cout << "You have selected Rock." ;
        break;
      }
      
    case 2 :
      {
        cout << "You have selected paper." ;
        break;
      }
    case 3 :
      {
        cout << "You have selected Scissor." ;
        break;
      } 
    
    default :  //invalid ekata danna
      {
  			cout << "Invalid input" ;
  			break;
      }
  }
  
    CompareSelection(selection);
  
  
}
}


void Export()
{
}


void QuitGame()
{
  exit(0);
  cout << "Debugging - quit"; //for debugging
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















