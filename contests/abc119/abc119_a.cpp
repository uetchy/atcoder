#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <bitset>
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

int main() {
  // input
  string S;
  IN(S);

  boost::replace_all(S, "/", "");
  int i = stoi(S);
  if (i <= 20190430) {
    OUT("Heisei");
  } else {
    OUT("TBD");
  }
  return 0;
}