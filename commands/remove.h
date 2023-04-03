#include <iostream>
#include <fstream>

using namespace std;

namespace Commands {
  void remove(int task) {
    string home = getenv("HOME");
    string todoFileName = home + "/.todo.txt";
    string tempFileName = home + "/.temp.txt";
    cout << "Removing task: " << task << endl;
    ifstream todoFile;
    ofstream tempFile;
    todoFile.open(todoFileName);
    tempFile.open(tempFileName);
    string line;
    int i = 1;
    while (getline(todoFile, line)) {
      if (i != task) {
        tempFile << line << endl;
      }
      i++;
    }
    todoFile.close();
    tempFile.close();
    std::remove(todoFileName.c_str());
    rename(tempFileName.c_str(), todoFileName.c_str());
  }
}
