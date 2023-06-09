#include <iostream>
#include <string>
#include "./commands/help.h"
#include "./commands/list.h"
#include "./commands/add.h"
#include "./commands/remove.h"
#include "./commands/complete.h"
#include "./commands/historical.h"

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
      Commands::complete(atoi(argv[2]));
    } else if (command == "-h") {
      Commands::help();
    } else if (command == "-H") {
      if (argc > 2)
        Commands::historicalList(argv[2]);
      else
        Commands::listAllDates();
    } else {
      cout << "Unsupported argument" << endl;
      Commands::help();
    }
  }
  return 0;
}

