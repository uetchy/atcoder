#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <iomanip>
#include <map>
#include <set>
#include <bitset>
#include <vector>
#include <boost/algorithm/string/replace.hpp>

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

int factorial(int i) {
  if (i > 1) {
    return factorial(i - 1);
  } else {
    return 1;
  }
}

int main() {
  int N;
  IN(N);
  int P[N];
  PACK(P, N);

  vector<int> data(P, P + N);
  int uniqueSize = set<int>(data.begin(), data.end()).size();
  OUT(uniqueSize + 1 + N);
}