#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <bitset>

using namespace std;

#define FOR(i, n) for (int i = 0; i < n; i++)
#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;
#define PACK(a, n)                                                             \
  for (int i = 0; i < n; i++)                                                  \
    cin >> a[i];
#define LIST(a, n)                                                             \
  for (int i = 0; i < n; i++)                                                  \
    cout << "[" << i << "] " << a[i] << endl;

int main() {
  // input
  int N;
  IN(N);
  int X[N];
  PACK(X, N);

  LIST(X, N); // DEBUG

  // calculation
  // TODO: your code here

  // output
  OUT("result");
}