#include<iostream>
#include<cstdlib>

using namespace std;

void welcomeScreen();
void GameCore();
void QuitGame();
void Export();
void InvalidInput();
void HighScoreViewer();

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
  int selection ;
  
  cout << "Please select the item\n" ;
  cout << "1.Rock\n2.paper\n3.scisor ";
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
  //randomly generate;
  int randomNum;
  randomNum = (rand() % 3) + 1;
  cout << randomNum << "\n";
  }

  
  
  
  
}


void Export()
{
}


void QuitGame()
{
}


void InvalidInput()
{
  cout << "Something went wrong!\n";
  cout << "Please enter a valid input !";
}


void HighScoreViewer()
{
	
}









