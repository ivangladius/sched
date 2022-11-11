
#include "sched.hpp"


#include <cstring>
#include <cstdlib>
#include <cstdio>

#include <vector>
#include <utility>
#include <initializer_list>
#include <iostream>

Sched::Sched() {}

Sched::~Sched() {
  // std::printf("deleted");

}


void Sched::add_task(char * task) {

  double e = std::strtod(std::strtok(task, ","), NULL);
  double P = std::strtod(std::strtok(NULL, ","), NULL);

  tasks.push_back({e, P});

//   std::printf("e: %.2lf\n", e);
//   std::printf("P: %.2lf\n", P);
 }
