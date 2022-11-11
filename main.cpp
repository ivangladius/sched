
#include <iostream>
#include <string>
#include <vector>

#include <cstdio>
#include <cstring>
#include <cstdlib>

#include "sched.hpp"
#include "edf.hpp"

int main(int argc, char ** argv) {

  Sched sched1;
   for (int i = 1; i < argc; ++i) {
     sched1.add_task(argv[i]);
   }

   sched1.debug();

  return 0;
}
