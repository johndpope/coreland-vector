#include <math.h>

int main(int argc, char *argv[])
{
  long double x;
  x = fmodl((long double) argc, (long double) argc);
  return 0;
}
