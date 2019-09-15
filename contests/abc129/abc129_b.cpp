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
  int W[N];
  PACK(W, N);

  int S[N];
  S[0] = W[0];
  for (int i = 1; i < N; i++) {
    S[i] = S[i - 1] + W[i];
  }
  int sum = S[N - 1];
  int least = 100;
  for (int i = 0; i < N; i++) {
    least = min(least, abs((sum - S[i]) - S[i]));
  }

  // output
  OUT(least);
}