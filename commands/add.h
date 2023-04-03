#include <iostream>
#include <fstream>

using namespace std;

namespace Commands {
  void add(string task) {
    char* home = getenv("HOME");
    const char* todoFileName = strcat(home, "/.todo.txt");
    cout << "Adding task: " << task << endl;
    ofstream todoFile;
    todoFile.open(todoFileName, std::ios_base::app);
    todoFile << task << endl;
    todoFile.close();
    cout << "Task added." << endl;
  }
}
