#include <iostream>
using namespace std;

int main() {
  int n;
  int alpha = 65;
  int num = 0;
  cin >> n;
  
  for (int i = 1; i <= n; i++){
    // in khoang trang
    for(int j = n; j > i; j--){
      cout << " ";
    }

    // in dau *
    for (int k = 0; k < i*2 -1;k++){
      cout << ((char)(alpha + num++));
    }
    num = 0;
    cout << endl;
  }
  
  // in nguoc lai
  for(int i = 1; i <= n - 1; i++){
    //in khoang trong
    for (int j = 0; j < i;j++) {
      cout << " ";
    }
    
    for (int k = (n - i) * 2 - 1; k > 0; k--) {
      cout << ((char)(alpha + num++));
    }
    num = 0;
    cout << endl;
  }
  
  return 0;
}