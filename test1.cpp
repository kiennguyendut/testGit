#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  for (int i = 1; i <= n; i++){
    // in khoang trang
    for(int j = 0; j < n - i; j++){
      cout << " ";
    }

    // in dau *
    for (int k = 0; k < i;k++){
      cout << "*";
    }
    cout << endl;
  }
  
  // in nguoc lai
  for(int i = 0; i <= n - 1; i++){
    //in khoang trong
    for (int j = 0; j < i;j++) {
      cout << " ";
    }
    
    for (int k = 0; k < n - i; k++) {
      cout << "*";
    }
    cout << endl;
  }
  
  return 0;
}