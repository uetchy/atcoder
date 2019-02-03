#include <algorithm>
#include <bitset>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>

#define FOR(i, n) for (int i = 0; i < n; i++)
#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;
#define PACK(a, n) \
  for (int i = 0; i < n; i++) cin >> a[i];
#define LIST(a, n) \
  for (int i = 0; i < n; i++) cout << "[" << i << "] " << a[i] << endl;

using namespace std;

int main() {
  // input
  int N;
  IN(N);
  int X[N];
  PACK(X, N);
  LIST(X, N);

  // calculate
  OUT("result");
}