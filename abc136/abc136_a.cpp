#include <iostream>

using namespace std;

#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int result = C - (A - B);
  if (result < 0) {
    OUT(0);
  } else {
    OUT(result);
  }
}