
/*== calcNextGeneration.cpp =============-========================================*\
|                                                                                  |
|  Author: Curtis Bowden                    Tutorial: Tuesday, 8:30a               | 
|  Date: 11/13/2001                         Assignment: Lab# 8                     |
|                                                                                  |
|  Purpose: Calculates the next generation of the mathematical game of life.       |
|           (originally by John Conway)                                            |
|                                                                                  |
\*=======================================-========================================*/

#include "calcNextGeneration.h"


void calcNextGeneration(bool generation[ROWS][COLS])
{
  
  int liveNeighbors = 0 ;

  bool newGeneration[ROWS][COLS] = {false} ;


  for(int i = 0; i < ROWS; i++)
  {

    for(int j = 0; j < COLS; j++)
    {
  

	  //one statement for each surrounding cell
		  
	  if(generation[i-1][j-1] && i > 0 && j > 0)            liveNeighbors ++ ;

	  if(generation[i-1][j] && i > 0)                       liveNeighbors ++ ;
	
	  if(generation[i-1][j+1] && i > 0 && j+1 < COLS)       liveNeighbors ++ ;


  	  if(generation[i][j-1] && j > 0)                       liveNeighbors ++ ;
	  
	  if(generation[i][j+1] && j+1 < COLS)                  liveNeighbors ++ ;


	  if(generation[i+1][j-1] && i+1 < ROWS && j > 0)       liveNeighbors ++ ;

	  if(generation[i+1][j] && i+1 < ROWS)                  liveNeighbors ++ ;
	  
	  if(generation[i+1][j+1] && i+1 < ROWS && j+1 < COLS)  liveNeighbors ++ ;

      
	  //cell births and deths
      
	  if( (generation[i][j] && liveNeighbors == 2) || liveNeighbors == 3)
	    newGeneration[i][j] = true ;


      if(!generation[i][j] && liveNeighbors == 3)
        newGeneration[i][j] = true ;
	  

	  liveNeighbors = 0 ;
	  	  
	}

  }

  
  //the new generation becomes the present generation

  for(int x = 0; x < ROWS; x++)
  {

    for(int y = 0; y < COLS; y++)
    {
      generation[x][y] = newGeneration[x][y] ;
	}

  }

  
  return ;

}

/*==== End of file ====*/

