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
#define OUT(s) cout << s << " ";
#define IN(a) cin >> a;
#define PACK(a, n)                                                             \
  for (int i = 0; i < n; i++)                                                  \
    cin >> a[i];
#define LIST(a, n)                                                             \
  for (int i = 0; i < n; i++)                                                  \
    cout << i << ": " << a[i] << endl;
#define PP(label, obj) cout << "[" << label << "] " << obj << endl;

int main() {
  string S;
  IN(S);

  int len = S.length();
  int even = 0;
  int odd = 0;
  int rpos = -1;
  FOR(i, 0, len) {
    if (i % 2 == 0) {
      even += 1;
    } else {
      odd += 1;
    }
    if ((i + 1 == len || S[i + 1] == 'R') && S[i] == 'L') {
      if (rpos % 2 == 0) {
        OUT(even);
        OUT(odd);
      } else {
        OUT(odd);
        OUT(even);
      }
      FOR(j, 0, i - rpos - 1) OUT(0);
      rpos = -1;
      even = odd = 0;
    } else if (S[i + 1] == 'L' && S[i] == 'R') {
      rpos = i;
    } else {
      if (rpos < 0) {
        OUT(0);
      }
    }
  }
}