#include "./list-file-content.h"
#include <filesystem>

using namespace std;

namespace Commands {
#ifndef HISTORICAL_H
#define HISTORICAL_H
  void historicalList(string previousDate) {
    string home = getenv("HOME");
    const string todoFileName = home + "/.todo/" + previousDate + ".txt";
    CommandUtility::listFileContent(todoFileName, "Historical tasks for " + previousDate);
  }

  void listAllDates() {
    string home = getenv("HOME");
    const string directory = home + "/.todo/";
    // List files in directory
    for (const auto & entry : filesystem::directory_iterator(directory)) {
      cout << entry.path().filename() << endl;
    }
  }
#endif
}
