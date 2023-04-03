#include <iostream>
#include <fstream>

using namespace std;

namespace Commands {
  void list() {
    char* home = getenv("HOME");
    const char* todoFileName = strcat(home, "/.todo.txt");
    cout << "Listing tasks" << endl;
    ifstream todoFile;
    todoFile.open(todoFileName);
    string line;
    int i = 1;
    while (getline(todoFile, line)) {
      cout << i << ". " << line << endl;
      i++;
    }
    todoFile.close();
  }
}
