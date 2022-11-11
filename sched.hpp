
#ifndef SCHED_HEADER
#define SCHED_HEADER

#include <vector>
#include <utility>
#include <initializer_list>

#include <cstdio>

typedef std::vector<std::pair<double, double>> task_list_t;
typedef std::pair<double, double> task_t;

class Sched {
private:
  task_list_t tasks;
public:
  Sched();
  Sched(std::initializer_list<const char*>);
  virtual ~Sched();


  void add_task(char *);

  void debug() const {
    for (const auto& t : tasks) {
      std::printf("T(%.2lf,%.2lf)\n",
                  t.first, t.second);

    }
  }

};



#endif
