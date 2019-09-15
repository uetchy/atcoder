#include <algorithm>
#include <bitset>
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

  int H[N];
  PACK(H, N);

  // LIST(X, N);

  int sum = 0;
  FOR(i, 0, N) {
    PP("iter", i);
    sum += i;
  }

  OUT(sum);
}