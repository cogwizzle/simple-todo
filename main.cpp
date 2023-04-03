#include <iostream>
#include <string>
#include "./commands/help.h"
#include "./commands/list.h"
#include "./commands/add.h"
#include "./commands/remove.h"

using namespace std;

int main(int argc, char* argv[]) {
  if (argc == 1) {
    Commands::help();
    return 0;
  }

  if (argc >=2) {
    string command = argv[1];
    if (command == "-l") {
      Commands::list();
    } else if (command == "-a") {
      string task = "";
      int length = argc;
      for (int i = 2; i < length; i++) {
        task += argv[i];
        if (i < length - 1) {
          task += " ";
        }
      }
      Commands::add(task);
    } else if (command == "-r") {
      Commands::remove(atoi(argv[2]));
    } else if (command == "-c") {
      Commands::remove(atoi(argv[2]));
    } else {
      cout << "Unsupported argument" << endl;
      Commands::help();
    }
  }
  return 0;
}

