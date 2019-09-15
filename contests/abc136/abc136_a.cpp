#include <iostream>

using namespace std;

#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;

int main() {
  int A, B, C;
  IN(A >> B >> C);
  OUT(max(0, C - (A - B)));
}