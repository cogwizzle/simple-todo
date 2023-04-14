#include <iostream>

using namespace std;

namespace Commands {
#ifndef HELP_H
#define HELP_H
  void help() {
    cout << "Todo tool" << endl;
    cout << "=========" << endl;
    cout << "Command line arguments:" << endl;
    cout << " -l         Lists all the tasks" << endl;
    cout << " -a {task}  Adds a new task" << endl;
    cout << " -r {index} Removes a task" << endl;
    cout << " -c {index} Completes a task" << endl;
    cout << " -H {date}  Lists all the tasks for a given date" << endl;
    cout << " -H         Lists all days where previous task were complete" << endl;
    cout << " -h         Prints out this help" << endl;
  }
#endif
}
