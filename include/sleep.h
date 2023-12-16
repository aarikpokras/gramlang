#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

void sleepf(string duration) {
  // Duration will be converted to integer
  istringstream durat(duration);
  int dur;
  durat >> dur;
  this_thread::sleep_for(chrono::seconds(dur));
}
