#include<iostream>

using namespace std;

void show(int n) {
for (int i = 0; i <= n; i++){
  if((i % 3 == 0) && (i % 5 != 0)) {
    cout << i << " ";
  }
}
}

int main() {
	int a;
	cin >> a;
	show(a);
	return 0;
}
