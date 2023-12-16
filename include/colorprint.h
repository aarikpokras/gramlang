#include <iostream>
using namespace std;

void colorprint(string color, string text) {
  string black = "0;30m";
  string red = "0;31m";
  string green = "0;32m";
  string yellow = "0;33m";
  string blue = "0;34m";
  string purple = "0;35m";
  string cyan = "0;36m";
  string white = "0;37m";
  string orange = "38;5;208m";
  string clr = "\033[";
  string end = "\033[0m\n";
  if (color == "black") {cout << clr << black << text << end;}
  if (color == "red") {cout << clr << red  << text << end;}
  if (color == "green") {cout << clr << green << text << end;}
  if (color == "yellow") {cout << clr << yellow << text << end;}
  if (color == "blue") {cout << clr << blue << text << end;}
  if (color == "purple") {cout << clr << purple << text << end;}
  if (color == "cyan") {cout << clr << cyan << text << end;}
  if (color == "white") {cout << clr << white << text << end;}
  if (color == "orange") {cout << clr << orange << text << end;}
}
