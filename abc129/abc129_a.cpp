#include <iostream>

using namespace std;

#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;

int main() {
  int P, Q, R;
  cin >> P >> Q >> R;
  if (P < Q) {
    if (Q < R) {
      OUT(P + Q);
    } else {
      OUT(P + R);
    }
  } else {
    if (P < R) {
      OUT(P + Q);
    } else {
      OUT(Q + R);
    }
  }
}