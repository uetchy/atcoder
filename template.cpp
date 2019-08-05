#include <algorithm>
#include <bitset>
// #include <boost/algorithm/string/replace.hpp>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

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
  int H[N];
  PACK(H, N);
  // LIST(X, N);

  // handle edge case (N == 1, N == 2, ...)

  // aggregation
  int sum = 0;
  FOR(i, N) {
    sum += i;
  }

  // check

  // output
  OUT(sum);
}