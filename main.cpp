//Author: aralmheiri
#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
 int whole_number;
 int winner;
      cout<<"how many times do you want to play?\n";
      cin>>whole_number;
       for( int index=0; index<whole_number; index++)
       {
        game.newGame();
        game.guessDoorC();
        game.guessDoorC();
       if(game.isWinner() == true)
       {
        winner++;
       }
       }
       cout<<"how many times you won?\n"<<winner<<endl;

  return 0;
}
