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
  int A, B;
  IN(A);
  IN(B);
  

  OUT(max(max(A + B, A - B), A * B));
}