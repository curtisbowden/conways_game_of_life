
/*== printGeneration.cpp ================-========================================*\
|                                                                                  |
|  Author: Curtis Bowden                    Tutorial: Tuesday, 8:30a               | 
|  Date: 11/13/2001                         Assignment: Lab# 8                     |
|                                                                                  |
|  Purpose: Prints a generation of the mathematical game of life.                  |
|           (originally by John Conway)                                            |
|                                                                                  |
\*=======================================-========================================*/

#include <iostream>
//#include <ncurses.h>
#include <unistd.h>
#include "printGeneration.h"

using std::cout;
using std::endl;



void printGeneration(bool generation[ROWS][COLS])
{

  //initscr();

  //clear();

  for(int i = 0; i < ROWS; i++)
  {
    for(int j = 0; j < COLS; j++)
    {
	  if(generation[i][j])
	  {
	    cout << "#" ;
            //printw("#") ;
	  }
	  else
	  {
	    cout << " " ;
	    //printw(" ") ;
	  }

	}
	//cout << endl ;
	//printw("\n") ;

  }
  cout << endl ;
  //printw("\n") ;
  
  //refresh();
  
  //sleep(1);


  return ;

}

/*==== End of file ====*/

