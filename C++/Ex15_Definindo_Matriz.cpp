#include <iostream>
#include <stdio.h>
#include <conio.h>

int main (void )
{
  int matriz[10][2],i, j;
  
  printf ("\nDigite os n\243meros para os elementos da matriz\n");
  
  for ( i=0; i<10; i++ )
    for ( j=0; j<2; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i, j);
      scanf ("%d", &matriz[ i ][ j ]);
    }
  
  printf("\n******************* Matriz *********************\n");
  
  for ( i=0; i<10; i++ )
    for ( j=0; j<2; j++ )
    {
      printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[ i ][ j ]);
    }
  
  getch();
  return(0);
}
