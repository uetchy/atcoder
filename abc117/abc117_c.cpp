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
  int numberOfPones, numberOfCoords;
  IN(numberOfPones >> numberOfCoords);
  int coords[numberOfCoords];
  PACK(coords, numberOfCoords);
  int numberOfDistance = numberOfCoords - 1;

  // calculation
  if (numberOfCoords < numberOfPones - 1) {
    OUT("0");
    return 0;
  }
  sort(coords, coords + numberOfCoords);
  int distance[numberOfDistance];
  int distanceSum = 0;
  FOR(i, numberOfDistance) {
    distance[i] = coords[i + 1] - coords[i];
    distanceSum += distance[i];
  }
  sort(distance, distance + numberOfDistance);
  FOR(i, numberOfPones - 1) {
    distanceSum -= distance[numberOfDistance - 1 - i];
  }

  OUT(distanceSum);
}