#include <fstream>

using namespace std;

void askf(string prompt) {
  cout << prompt;
  string ClientReadLine;
  getline(cin, ClientReadLine);
  ofstream ClientGramOut("gram.out");
  if (!ClientGramOut.is_open()) {
    cerr << "Unable to save user input to gram.out. Do you have permission?" << endl;
  }
  ClientGramOut << ClientReadLine << endl;
  ClientGramOut.close();
}
