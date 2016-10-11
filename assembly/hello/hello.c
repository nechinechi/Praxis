#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void sighandler()
{
  printf("OK\n");
  exit(0);
}

__asm__("check00:\n\
  mov $0x564D5868, %eax\n\
  mov $0xa, %cx\n\
  mov $0x5658, %dx\n\
  in %dx, %eax\n\
  ret\n\
");
void hello();

int main(int argc, char **argv)
{
  hello();
  return 0;
}

