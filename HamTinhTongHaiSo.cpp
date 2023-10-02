#include <iostream>
using namespace std;

double sum (double, double);

int main() {
    double x = 2.12;
    double y = 3.25;
    double sum1 = sum(x,y);

    cout << sum1;
  
  return 0;
}

//Định nghĩa hàm sum tại đây
double sum(double a, double b){
  double sum = a + b;
  return sum;
}