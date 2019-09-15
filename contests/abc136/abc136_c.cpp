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
    cout << "[" << i << "] " << a[i] << endl;
#define PP(label, obj) cout << "[" << label << "] " << obj << endl;

int main() {
  int N;
  IN(N);
  int H[N];
  PACK(H, N);

  int h = H[0];
  FOR(i, 1, N) {
    if (h > H[i]) {
      OUT("No");
      return 0;
    }
    if (h == H[i])
      continue;
    h = H[i] - 1;
  }

  OUT("Yes");
}