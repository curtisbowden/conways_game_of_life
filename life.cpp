
/*== life.cpp ===========================-========================================*\
|                                                                                  |
|  Author: Curtis Bowden                    Tutorial: Tuesday, 8:30a               | 
|  Date: 11/13/2001                         Assignment: Lab# 8                     |
|                                                                                  |
|  Purpose: The mathematical game of life. (originally by John Conway)             |
|                                                                                  |
\*=======================================-========================================*/

#include <iostream>
#include <stdlib.h>
//#include <ncurses.h>
#include "printGeneration.h"
#include "readGeneration.h"
#include "calcNextGeneration.h"
#include "randomGeneration.h"
#include "config.h"

using std::cout;
using std::cin;
using std::endl;


int main()
{

  int MAX = 0 ;
  int selection = 0 ;
  
  bool generation[ROWS][COLS] = {false} ;


  cout << endl ;

  cout << "The Game Of Life!" << endl << endl << endl  ;

  cout << "You can edit \"generation.txt\" to make custom patterns." << endl << endl ;

  
  while(selection != 1 && selection != 2)
  {
    cout << "Type 1 to read a generation from a file" << endl ;
    cout << "Type 2 to create a random generation." << endl ;

    cin >> selection ;
  }



  if(selection == 1)
    readGeneration(generation) ;
  

  if(selection == 2)
    randomGeneration(generation) ;


  printGeneration(generation) ;


  cout << "How many generatioins would you like to draw? : " ;
  
  cin >> MAX ;


  for(int i=0; i < MAX; i++)  
  {

    // system("cls") ;  //dos

	system("clear") ;  // UNIX
	
		  
	calcNextGeneration(generation) ;
	

    printGeneration(generation) ;

	cout << "Generation: " << i+1 << endl ;
        //printw("Generation %d", i+1);

	// system("pause") ;  //dos

	//system("stty raw -echo") ;
      
	//  char x ;
	//  cin >> x ;

	

  }
  
  //endwin();


  return 0 ;

}

/*==== End of file ====*/

