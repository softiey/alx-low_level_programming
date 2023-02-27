#include "main.h"

/**
 * THe program swap two variables
 * @c 
 * @j
 * return: 0
 */

void swap_int(int *c, int *j)
{
  *c = 98;
  *j = 42;

  c = &j;
  return (0);
}
