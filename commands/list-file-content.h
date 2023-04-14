#include <iostream>
#include <fstream>

using namespace std;

namespace CommandUtility {
#ifndef COMMAND_UTILITY_H
#define COMMAND_UTILITY_H
  void listFileContent(string fileName, string header) {
    cout << header << endl;
    const int headerLength = header.length();
    for (int i = 0; i < headerLength; i++) {
      cout << "-";
    }
    cout << endl;
    ifstream todoFile;
    try {
      todoFile.open(fileName);
      string line;
      int i = 1;
      while (getline(todoFile, line)) {
        cout << i << ". " << line << endl;
        i++;
      }
      todoFile.close();
    } catch (const ifstream::failure& e) {
      cout << "No tasks found for that date." << endl;
    }
  }
#endif
}
