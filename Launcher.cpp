#include "CommodityMarketSystem.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
  CommodityMarketSystem cms;
  while (true) {
    string command;
    cout << "> ";
    getline(cin, command);
    if (command.compare("QUIT") == 0) break;
    cms.processInput(command);
  }
  return 0;
}
