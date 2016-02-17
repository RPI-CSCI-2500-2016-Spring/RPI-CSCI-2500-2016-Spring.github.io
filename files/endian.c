#include <stdio.h>

int main()
{
  int i;
  int x = 0xFFFFFFFF;   // Insert your magic number here with ascii newline
  char *c;

  c = (char *)&x;

  printf("%c", *c++);
  printf("%c", *c++);
  printf("%c", *c++);
  printf("%c", *c++);
  
  return 0;
}
