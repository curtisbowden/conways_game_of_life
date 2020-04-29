
/*== printGeneration.cpp ================-========================================*\
|                                                                                  |
|  Author: Curtis Bowden                    Tutorial: Tuesday, 8:30a               | 
|  Date: 11/13/2001                         Assignment: Lab# 8                     |
|                                                                                  |
|  Purpose: Reads a generation of the mathematical game of life from a file.       |
|           (originally by John Conway)                                            |
|                                                                                  |
\*=======================================-========================================*/

#include <iostream>
#include <fstream>
#include "printGeneration.h"

using namespace std;

void readGeneration(bool generation[ROWS][COLS])
{

  int i = 0;
  int j = 0;

  char c ;

  char* fileName = "generation.txt" ;

  ifstream file;


  file.open(fileName) ;

  if(file.good())
  {

	  
    while(!file.eof())
	{
	
      file.get(c) ;


      if(c == ' ' || c == '.' || c == '\n' || file.eof())
	  {

        generation[i][j] = false ;

	  }
	  else
	  {

        generation[i][j] = true ;

	  }


	  j++ ;


	  if(c == '\n') 
	  {
	    i++ ;
	    j = 0;
	  }


	} //while


  }
  else
  {
    cerr << "An error opening file: " << fileName << endl ;
  }

  return ;

}

/*==== End of file ====*/
