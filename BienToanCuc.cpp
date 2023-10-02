#include <iostream>

using namespace std;
int global = 3;

void function () {
  int function_local = 10;
  cout << "global = " << global << endl;
  global = 9;
}
int main() {
  int main_local = 20;
  global = 5;
  cout << "global = " << global << endl;
  global = 7;

  function ();
  cout << "global = " << global << endl;

  return 0;
}