
#include <cstring>
#include <cstdio>
#include <cstdlib>

int main(int argc, char ** argv) {

  const char * number = "13.2";

  printf("in double: %.2lf\n", strtod(number, NULL));

  return 0;
}
