#include <iostream>

#define FOR(i, n) for (int i = 0; i < n; i++)
#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;
#define PACK(a, n) \
  for (int i = 0; i < n; i++) cin >> a[i];
#define LIST(a, n) \
  for (int i = 0; i < n; i++) cout << "[" << i << "] " << a[i] << endl;

using namespace std;

int main() {
  int N;
  IN(N);
  int L[N];
  PACK(L, N);
  int longest = L[0];
  int sum = 0;
  FOR(i, N) {
    longest = max(L[i], longest);
    sum += L[i];
  }
  sum -= longest;
  if (longest < sum) {
    OUT("Yes");
  } else {
    OUT("No");
  }
}
