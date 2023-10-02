#include <iostream>
using namespace std;

double sum (double, double );

int main() {
  
  double n1, n2;
  cin >> n1 >> n2;
  
  double sum1 = sum (n1,n2);
  cout << sum1;
  
  return 0;
}

double sum (double a, double b) {
  return a + b;
}
