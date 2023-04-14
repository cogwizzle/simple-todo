#include <iostream>
#include <fstream>

using namespace std;

namespace Commands {
#ifndef ADD_H
#define ADD_H
  void add(string task) {
    string home = getenv("HOME");
    const string todoFileName = home + "/.todo.txt";
    ofstream todoFile;
    todoFile.open(todoFileName, std::ios_base::app);
    todoFile << task << endl;
    todoFile.close();
    cout << "Task added." << endl;
  }
#endif
}
