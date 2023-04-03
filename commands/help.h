#include <iostream>

using namespace std;

namespace Commands {
  void help() {
    cout << "Todo tool" << endl;
    cout << "====================" << endl;
    cout << "Command line arguments:" << endl; cout << " -l   Lists all the tasks" << endl;
    cout << " -a   Adds a new task" << endl;
    cout << " -r   Removes a task" << endl;
    cout << " -c   Completes a task" << endl;
  }
}
