#include "./list-file-content.h"

using namespace std;

namespace Commands {
#ifndef LIST_H
#define LIST_H
  void list() {
    string home = getenv("HOME");
    const string todoFileName = home + "/.todo.txt";
    CommandUtility::listFileContent(todoFileName, "Tasks");
  }
#endif
}
