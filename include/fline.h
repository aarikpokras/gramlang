#include <iostream>
#include <fstream>
#include <string>

void getfirstline(string file) {
  ifstream fileTGO(file);
  if (!fileTGO.is_open()) {
    cerr << "Unable to open file " << file << ". Do you have permission? Does it exist?" << endl;
  } else {
    string fLine;
    if (getline(fileTGO, fLine)) {
      cout << fLine << endl;
    } else {
      cout << "" << endl;
    }
    fileTGO.close();
  }
}
