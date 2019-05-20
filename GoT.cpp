// Lawrence Scroggs 05/12/2019 CS202 Program #3

// This will be the main file of the program.  It is here that 
// the game will be played and the user will pass in the objects
// throughout the binary tree that will determine who gets the 
// Iron Throne

#include "event.h"


int main(){

  char * a_first = new char[100];
  char * a_last = new char[100];


  cout << "Please enter your characters first name: ";
  cin.get(a_first,100);
  cin.ignore(100,'\n');
  
  cout << "Please enter your characters last name: ";
  cin.get(a_last,100);
  cin.ignore(100,'\n');

  first_name player1(a_first,a_last);


  player1.stats();

  player1.set_special();

  player1.stats();

  speech jon(player1.view_name());
  player1.set_script(jon);

  battle the_war;

  the_war.battles_in();

  the_war.display_battles();





  return 0;

}

