#include <iostream>

#define FOR(i, n) for (int i = 0; i < n; i++)
#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;
#define PACK(a, n) \
  for (int i = 0; i < n; i++) cin >> a[i];
#define LIST(a, n) \
  for (int i = 0; i < n; i++) cout << "[" << i << "] " << a[i] << endl;

using namespace std;

int main() {
  int T, X;
  IN(T >> X);
  OUT((double)T / X);
}
