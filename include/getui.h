#include <iostream>
#include <fstream>
using namespace std;

void getin() {
  ifstream GramOut("gram.out");
  if (!GramOut.is_open()) {
    cerr << "Error: Cannot find gram.out file in the current directory." << endl;
  } else {
    string fLine;
    if (getline(GramOut, fLine)) {
      cout << fLine << endl;
    } else {
      cout << "" << endl;
    }
    GramOut.close();
  }
}
