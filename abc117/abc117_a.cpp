#include <iostream>

using namespace std;

#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;

int main() {
  int T, X;
  IN(T >> X);
  OUT((double)T / X);
}