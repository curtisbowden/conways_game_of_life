
/*== randomGeneration.cpp ===============-========================================*\
|                                                                                  |
|  Author: Curtis Bowden                    Tutorial: Tuesday, 8:30a               | 
|  Date: 11/13/2001                         Assignment: Lab# 8                     |
|                                                                                  |
|  Purpose: Randomly populates a generation for the mathematical game of life.     |
|           (originally by John Conway)                                            |
|                                                                                  |
\*=======================================-========================================*/

#include "randomGeneration.h"
#include "stdlib.h"
#include "time.h"

void randomGeneration(bool generation[ROWS][COLS])
{

  srand(time(0));

  
  for(int i = 0; i < ROWS; i++)
  {
    for(int j = 0; j < COLS; j++)
    {
      
	  int n = rand() % 30 ;

	  if(n > 20)
        generation[i][j] = true ;
		
	}

  }


  return ;

}

/*==== End of file ====*/

