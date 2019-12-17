#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'c';
  float c = 5.627;
  double d = 325245;
  unsigned int e = 23454;
  long int f = 1234; 

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %c and size %d bytes\n", b, sizeof(b));
  printf("float c value: %f and size %d bytes\n", c, sizeof(c));
  printf("double d value: %f and size %d bytes\n", d, sizeof(d));
  printf("unsigned int value: %d and size %d bytes\n", e, sizeof(e));
  printf("long int value: %d and size %d bytes\n", f, sizeof(f));

}

