#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <iomanip>
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
  int N;
  IN(N);

  string currency;
  double amount;
  double sum = 0.0;

  for (int i = 0; i < N; i++) {
    cin >> amount;
    cin >> currency;
    if (currency == "BTC") {
      amount *= 380000.0;
      sum += amount;
    } else {
      sum += amount;
    }
  }

  std::cout << std::showpoint << std::fixed;
  OUT((double)sum);
}