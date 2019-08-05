#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

#define OUT(s) cout << s << endl;
#define IN(a) cin >> a;

int main() {
  int N;
  IN(N);
  int sum = 0;
  while (N != 0) {
    int len = log10(N) + 1;
    if (len % 2 == 1) {
      sum += 1;
    }
    N -= 1;
  }
  OUT(sum);
}