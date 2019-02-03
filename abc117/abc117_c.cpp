#include <iostream>
#include <algorithm>

using namespace std;

#define FOR(i, n) for (int i = 0; i < n; i++)
#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;
#define PACK(a, n)                                                             \
  for (int i = 0; i < n; i++)                                                  \
    cin >> a[i];

int main() {
  // input
  int N, M;
  IN(N >> M);
  int X[M];
  PACK(X, M);
  if (M < N - 1) {
    OUT("0");
    return 0;
  }

  // calculate
  sort(X, X + M);
  int distance[M - 1];
  int distanceSum = 0;
  FOR(i, M - 1) {
    distance[i] = X[i + 1] - X[i];
    distanceSum += distance[i];
  }
  sort(distance, distance + M - 1);
  FOR(i, N - 1) {
    distanceSum -= distance[M - 2 - i];
  }

  OUT(distanceSum);
}