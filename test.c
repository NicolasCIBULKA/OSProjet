#include <stdio.h>
#include "utils/memory.h"


int main(int argc, char const *argv[])
{
   int n = initMemory(100);
   printf("%d\n", n);
   return 0;
}
