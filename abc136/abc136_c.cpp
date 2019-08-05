#include <algorithm>
#include <bitset>
#include <boost/algorithm/string/replace.hpp>
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

  // edge case
  if (N == 1) {
    OUT("Yes");
    return 0;
  }

  if (N == 2) {
    if (H[1] - H[0] < -1) {
      OUT("No");
    } else {
      OUT("Yes");
    }
    return 0;
  }

  // aggregation
  int X[N - 1];
  int gap = 0;
  for (int i = 0; i < N - 1; i++) {
    X[i - gap] = H[i + 1] - H[i];
    if (X[i - gap] < -1) {
      OUT("No");
      return 0;
    } else if (X[i - gap] == 0) {
      gap += 1;
    }
  }

  // fill gap
  for (int i = N - 1 - gap; i < N - 1; i++) {
    X[i] = 100001;
  }

  // check
  for (int i = 0; i < N - 1; i++) {
    if (X[i] < 0 && X[i + 1] < 0) {
      OUT("No");
      return 0;
    }
  }

  OUT("Yes");
}