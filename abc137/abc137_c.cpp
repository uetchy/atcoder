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

#define FOR(i, j, n) for (int i = j; i < n; i++)
#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;
#define PACK(a, n)                                                             \
  for (int i = 0; i < n; i++)                                                  \
    cin >> a[i];
#define LIST(a, n)                                                             \
  for (int i = 0; i < n; i++)                                                  \
    cout << i << ": " << a[i] << endl;
#define PP(label, obj) cout << "[" << label << "] " << obj << endl;

int main() {
  int N;
  IN(N);

  string S[N];
  PACK(S, N);

  int sum = 0;
  int s1[26];
  int s2[26];
  FOR(i, 0, N) {
    FOR(j, i, N) {
      if (i == j)
        continue;

      FOR(x, 0, 26) s1[x] = 0;
      FOR(x, 0, 26) s2[x] = 0;
      FOR(k, 0, 10) {
        s1[int(S[i][k]) - 97] += 1;
      }
      FOR(k, 0, 10) {
        s2[int(S[j][k]) - 97] += 1;
      }
      bool found = true;
      FOR(k, 0, 26) {
        if (s1[k] != s2[k]) {
          found = false;
          break;
        }
      }
      if (found)
        sum += 1;
    }
  }
  OUT(sum);
}