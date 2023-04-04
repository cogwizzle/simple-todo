#include <iostream>
#include <fstream>

using namespace std;

namespace Commands {
  void list() {
    string home = getenv("HOME");
    const string todoFileName = home + "/.todo.txt";
    cout << "Listing tasks" << endl;
    cout << "-------------" << endl;
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
