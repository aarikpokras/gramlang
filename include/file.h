#include <fstream>
#include <iostream>
using namespace std;

void readFile(string file) {
  ifstream ClientReadFile(file);
  if (!ClientReadFile.is_open()) {
    cerr << "Unable to open file." << endl;
  }
  string ClientLine;
  while (getline(ClientReadFile, ClientLine)) {
    cout << ClientLine << endl;
  }
  ClientReadFile.close();
}
