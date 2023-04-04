#include <iostream>
#include <fstream>

using namespace std;

namespace Commands {
  void complete(int task) {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int day = ltm->tm_mday;
    int month = 1 + ltm->tm_mon;
    int year = 1900 + ltm->tm_year;
    string home = getenv("HOME");
    system(("mkdir -p " + home + "/.todo").c_str());
    string todoFileName = home + "/.todo.txt";
    string tempFileName = home + "/.temp.txt";
    string doneFileName = home + "/.todo/" + to_string(day) + "-" + to_string(month) + "-" + to_string(year) + ".txt";
    cout << "Completing task: " << task << endl;
    ifstream todoFile;
    ofstream tempFile;
    ofstream doneFile;
    todoFile.open(todoFileName);
    tempFile.open(tempFileName);
    doneFile.open(doneFileName, std::ios_base::app);
    string line;
    int i = 1;
    while (getline(todoFile, line)) {
      if (i != task) {
        tempFile << line << endl;
      } else {
        doneFile << line << endl;
      }
      i++;
    }
    todoFile.close();
    tempFile.close();
    doneFile.close();
    std::remove(todoFileName.c_str());
    rename(tempFileName.c_str(), todoFileName.c_str());
  }
}
