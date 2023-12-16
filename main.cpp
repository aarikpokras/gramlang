#include <iostream>
#include <regex>
#include <string>
#include <fstream>
#include <sstream>
#include <chrono>
#include <thread>
#include "include/eval.h"
#include "include/colorprint.h"
#include "include/saywof.h"
#include "include/askf.h"
#include "include/file.h"
#include "include/sleep.h"

using namespace std;

int main(int argc, char* argv[]) {
  if (argc > 1) {
    ifstream fileTP(argv[1]);
    if (!fileTP.is_open()) {
      cout << "Error opening file. Does it exist? Do you have permissions?" << endl;
      return 2;
    }
    string line;
    while (getline(fileTP, line)) {
      regex say("say ");
      regex pau("pause for ");
      regex saywo("say without new line ");
      regex add("add");
      regex sub("subtract");
      regex duv("divide");
      regex mul("multiply");
      regex read("read ");
      regex ask("ask ");
      regex saywc("say with color ");

      if (regex_search(line, saywo)) {
        string saywores = regex_replace(line, saywo, "");
        saywof(saywores);
      } else if (regex_search(line, saywc)) {
        string topr = regex_replace(line, saywc, "");
        regex red("red ");
        regex ora("orange ");
        regex yel("yellow ");
        regex gre("green ");
        regex blu("blue ");
        regex pur("purple ");
        regex bla("black ");
        
        if (regex_search(topr, red)) {
          string bsTo = regex_replace(topr, red, "");
          colorprint("red", bsTo);
        }
        if (regex_search(topr, ora)) { 
          string bsTo = regex_replace(topr, ora, "");
          colorprint("orange", bsTo);
        }
        if (regex_search(topr, yel)) { 
          string bsTo = regex_replace(topr, yel, "");
          colorprint("yellow", bsTo);
        }
        if (regex_search(topr, gre)) { 
          string bsTo = regex_replace(topr, gre, "");
          colorprint("green", bsTo);
        }
        if (regex_search(topr, blu)) { 
          string bsTo = regex_replace(topr, blu, "");
          colorprint("blue", bsTo);
        }
        if (regex_search(topr, pur)) { 
          string bsTo = regex_replace(topr, pur, "");
          colorprint("purple", bsTo);
        }
        if (regex_search(topr, bla)) { 
          string bsTo = regex_replace(topr, bla, "");
          colorprint("black", bsTo);
        }
      } else if (regex_search(line, ask)) {
        string prompt = regex_replace(line, ask, "");
        askf(prompt);
      } else if (regex_search(line, read)) {
        string fileTRO = regex_replace(line, read, "");
        readFile(fileTRO);
      } else if (regex_search(line, pau)) {
        string tosleepstr = regex_replace(line, pau, "");
        sleepf(tosleepstr);
      } else if (line == "new line") {
        cout << "" << endl;
      } else if (regex_search(line, say)) {
        string sayres = regex_replace(line, say, "");
        cout << sayres << endl;
      } else if (regex_search(line, add)) {
        string toeval = regex_replace(line, add, "");
        istringstream iss(toeval);
        int n1, n2;
        iss >> n1 >> n2;
        int addres = addi(n1, n2);
        cout << addres;
      } else if (regex_search(line, sub)) {
        string toeval = regex_replace(line, sub, "");
        istringstream subst(toeval);
        int n1, n2;
        subst >> n1 >> n2;
        int subres = subt(n1, n2);
        cout << subres;
      } else if (regex_search(line, duv)) {
        string toeval = regex_replace(line, duv, "");
        istringstream divid(toeval);
        int n1, n2;
        divid >> n1 >> n2;
        int divres = divi(n1, n2);
        cout << divres;
      } else if (regex_search(line, mul)) {
        string toeval = regex_replace(line, mul, "");
        istringstream multi(toeval);
        int n1, n2;
        multi >> n1 >> n2;
        int mulres = mult(n1, n2);
        cout << mulres;
      } else {
        cout << "Command not found: " << line << endl;
      }
    }
    fileTP.close();
  } else {
    cout << "Usage:\n" << argv[0] << " [file]" << endl;
    return 1;
  }
  return 0;
}
