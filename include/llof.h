#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void llof(string fl) {
  ifstream fileGL(fl);
  if (!fileGL.is_open()) {
    cerr << "Error: cannot read " << fl << endl;
  }
  string lLine;
  string cLine;
  while (getline(fileGL, cLine)) {
    lLine = cLine;
  }
  cout << lLine << endl;
  fileGL.close();
}
