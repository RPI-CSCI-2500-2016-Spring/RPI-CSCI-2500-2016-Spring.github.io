#include <stdio.h>

int main()
{
  char *c;
  int i;
  int x = 0xFFFFFFFF;   // Insert your magic number here with ASCII newline
                        // You only need to change the F's for the first part

  c = (char *)&x;

  printf("%c", *c++);
  printf("%c", *c++);
  printf("%c", *c++);
  printf("%c", *c++);
  
  return 0;
}
