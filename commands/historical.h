#include "./list-file-content.h"

using namespace std;

namespace Commands {
#ifndef HISTORICAL_H
#define HISTORICAL_H
  void historicalList(string previousDate) {
    string home = getenv("HOME");
    const string todoFileName = home + "/.todo/" + previousDate + ".txt";
    CommandUtility::listFileContent(todoFileName, "Historical tasks for " + previousDate);
  }
#endif
}
